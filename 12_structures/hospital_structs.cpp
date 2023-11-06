#include <iostream>

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



int main(){
    hospital_system s1;
    s1.run();

    return 0;
}