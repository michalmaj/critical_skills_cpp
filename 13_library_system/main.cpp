#include <iostream>
#include <algorithm>

// Global variables
const int MAX_SPECIALIZATION{20};
const int MAX_QUEUE{5};

struct hospital_queue{
    std::string names[MAX_QUEUE];
    int status[MAX_QUEUE];
    int len;
    int spec;

    hospital_queue(){
        len = 0;
        spec = -1;
    }
    hospital_queue(int _spec): spec(_spec) {len = 0;}

    bool add_end(std::string name, int st){
        if(len >= MAX_QUEUE)
            return false;
        names[len] = name;
        status[len] = st;
        len++;

        return true;
    }

    bool add_front(std::string name, int st){
        if(len >= MAX_QUEUE)
            return false;
        for(int i{len}; i > 0; --i){
            names[i] = names[i-1];
            status[i] = status[i-1];
        }
        names[0] = name;
        status[0] = st;
        len++;
        return true;
    }

    void remove_front(){
        if(len == 0) {
            std::cout << "No patients at the moment. Have rest, Dr\n";
            return;
        }
        std::string name = names[0];
        int st = status[0];
        for(int i{1}; i < len; ++i){
            names[i-1] = names[i];
            status[i-1] = status[i];
        }
        len--;
        std::cout << "There is " << name << " patients is specialization " << st << "\n";
    }

    void print(){
        if(len == 0)
            return;
        std::cout << "There are " << len << " patients in specialization: " << spec << "\n";
        for(int i{0}; i < len; ++i){
            std::cout << names[i] << " " << ((status[i])? "urgent" : "regular") << std::endl;
        }
    }
};

struct hospital_system{
    hospital_queue queues[MAX_SPECIALIZATION];

    hospital_system(){
        for(int i{0}; i < MAX_SPECIALIZATION; ++i)
            queues[i] = hospital_queue{i};
    }

    void run(){
        while(true){
            int choice = menu();

            if(choice == 1)
                add_patient();
            else if(choice == 2)
                print_patients();
            else if(choice == 3)
                get_next_patients();
            else
                break;
        }
    }

    int menu()
    {
        int choice{-1};
        while(choice == -1) {
            std::cout << "What do you want to do:\n";
            std::cout << "1. Add a patient.\n";
            std::cout << "2. Print patients.\n";
            std::cout << "3. Get next patient.\n";
            std::cout << "4. Exit the program.\n";

            std::cin >> choice;

            if(!(1 <= choice && choice <= 4)){
                std::cout << "Invalid choice\n";
                choice = -1;
            }
        }
        return choice;

    }

    bool add_patient(){
        int spec, st;
        std::string name;

        std::cout << "Enter specialization, name, status: ";
        std::cin >> spec >> name >> st;

        bool status;
        if(st == 0)
            status = queues[spec].add_end(name, st);
        else
            status = queues[spec].add_front(name, st);

        if(!status){
            std::cout << "Sorry we can't add mode patients to this specialization\n";
            return false;
        }
        return true;
    }

    void print_patients(){
        std::cout << "********************************\n";
        for(int spec{0}; spec < MAX_SPECIALIZATION; ++spec)
            queues[spec].print();
    }

    void get_next_patients(){
        int spec;
        std::cout << "Enter specialization: ";
        std::cin >> spec;
        queues[spec].remove_front();
    }
};

struct user{
    std::string name;
    int id;

    user(){
        name = "";
        id = 0;
    }
    user(std::string name, int id): name(name), id(id) {}
};

struct book{
    int id;
    std::string name;
    int quantity;

    book() {
        id = 0;
        name = "";
        quantity = 0;
    }
    book(int id, std::string name, int quantity): id(id), name(name), quantity(quantity) {}

    book addBook(){
        int i, qt;
        std::string n;
        std::cout << "Enter id, name, and quantity: ";
        std::cin >> i >> n >> qt;
        return {i, n, qt};
    }

    void print_book(){
        std::cout << "id: " << id << ", name: " << name << ", quantity: " << quantity << std::endl;
    }
};


struct library_system{
    book books[100];
    int len = 0;
    book b;

    void add_books(){
        books[len] = b.addBook();
        len++;
    }

    void print_library_by_id(){
        std::sort(books, books+len, [](book& b1, book& b2){return b1.id < b2.id;});
        for(int i{0}; i < len; ++i)
            books[i].print_book();
    }

    void print_library_by_name(){
        std::sort(books, books+len, [](book& b1, book& b2){return b1.name < b2.name;});
        for(int i{0}; i < len; ++i)
            books[i].print_book();
    }
};

int main(){
    library_system l1;
    l1.add_books();
    l1.add_books();
    l1.print_library_by_id();
    l1.print_library_by_name();


    return 0;
}