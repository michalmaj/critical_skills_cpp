#include <iostream>
#include <algorithm>
#include <cassert>

const int MAX_BOOKS{10};
const int MAX_USER{10};

struct book{
    int id;
    std::string name;
    int total_quantity;
    int total_borrowed;

    book() {
        id = -1;
        name = "";
        total_quantity = total_borrowed = 0;
    }

    void read(){
        std::cout << "Enter book info: id & name & total quantity: ";
        std::cin >> id >> name >> total_quantity;
        total_borrowed = 0;
    }

    bool borrow(int user_id){
        if(total_quantity - total_borrowed == 0)
            return false;
        ++total_borrowed;
        return true;
    }

    void return_copy(){
        assert(total_borrowed > 0);
        --total_borrowed;
    }

    bool has_prefix(std::string prefix){
        if(name.size() < prefix.size())
            return false;

        for(int i{0}; i < prefix.size(); ++i){
            if(prefix[i] != name[i])
                return false;
        }
        return true;
    }

    void print(){
        std::cout << "id: " << id << ", name: " << name << ", total_quantity: " << total_quantity
                  << ", total borrowed: " << total_borrowed << std::endl;
    }
};

struct user{
    std::string name;
    int id;
    int borrowed_books_ids[MAX_BOOKS];
    int len;

    user(){
        name = "";
        id = -1;
        len = 0;
    }

    void read(){
        std::cout << "Enter user name & national id: ";
        std::cin >> name >> id;
    }

    void borrow(int book_id){
        borrowed_books_ids[len++] = book_id;
    }

    void return_copy(int book_id){
        bool removed = false;
        for(int i{0}; i < len; ++i){
            if(borrowed_books_ids[i] == book_id){
                // Let's shift the array to the right to remove this entry
                for(int j{i - 1}; j < len; ++j)
                    borrowed_books_ids[j-1] = borrowed_books_ids[j];
                removed = true;
                --len;
                break;
            }
        }
        if(!removed)
            std::cout << "User " << name << " never borrowed book id" << book_id << std::endl;
    }

    bool is_borrowed(int book_id){
        for(int i{0}; i < len; ++i){
            if(book_id == borrowed_books_ids[i])
                return true;
        }
        return false;
    }

    void print(){
        // sort what the used borrowed
        std::sort(borrowed_books_ids, borrowed_books_ids + len);

        std::cout << "user: " << name << " id " << id << " borrowed books ids: ";
        for(int i{0}; i < len; ++i)
            std::cout << borrowed_books_ids[i] << " ";
        std::cout << "\n";
    }
};


struct library_system{
    book books[MAX_BOOKS];
    int total_books = 0;

    user users[MAX_USER];
    int total_users = 0;

    library_system(){
        total_books = total_users = 0;
    }

    void run(){
        while(true){
            int choice = menu();

            if (choice == 1)
                add_book();
            else if (choice == 2)
                search_books_by_prefix();
            else if (choice == 3)
                print_who_borrowed_book_by_name();
            else if (choice == 4)
                print_library_by_id();
            else if (choice == 5)
                print_library_by_name();
            else if (choice == 6)
                add_user();
            else if(choice == 7)
                user_borrow_book();
            else if (choice == 8)
                user_return_book();
            else if (choice == 9)
                print_users();
            else
                break;
        }
    }

    int menu(){
        int choice = -1;
        while(choice == -1){
            std::cout << "\nLibrary menu:\n";
            std::cout << "1) add_book\n";
            std::cout << "2) search_book_by_prefix\n";
            std::cout << "3) print_who_borrowed_book_by_name\n";
            std::cout << "4) print_library_by_id\n";
            std::cout << "5) print_library_by_name\n";
            std::cout << "6) add_user\n";
            std::cout << "7) user_borrow_book\n";
            std::cout << "8) user_return_book\n";
            std::cout << "9) print_users\n";
            std::cout << "10) Exit\n";

            std::cout << "\nEnter your menu choice [1-10]: ";
            std::cin >> choice;

            if(!(1 <= choice && choice <= 10)){
                std::cout << "Invalid choice. Try again\n";
                choice = -1;
            }
        }
        return choice;
    }

    void add_book(){
        books[total_books++].read();
    }

    void search_books_by_prefix(){
        std::cout << "Enter book name prefix: ";
        std::string prefix;
        std::cin >> prefix;

        int cnt = 0;
        for(int i{0}; i < total_books; ++i){
            if(books[i].has_prefix(prefix)){
                std::cout << books[i].name << "\n";
                ++cnt;
            }
        }
        if(!cnt)
            std::cout << "No books with such prefix!\n";
    }

    void add_user(){
        users[total_users++].read();
    }

    int find_book_idx_by_name(std::string name){
        for(int i{0}; i < total_books; ++i){
            if(name == books[i].name)
                return i;
        }
        return -1;
    }

    int find_user_idx_by_name(std::string name){
        for(int i{0}; i < total_users; ++i){
            if(name == users[i].name)
                return i;
        }
        return -1;
    }

    void print_who_borrowed_book_by_name(){
        std::string book_name;
        std::cout << "Enter book name: ";
        std::cin >> book_name;

        int book_idx = find_book_idx_by_name(book_name);

        if(book_idx == -1){
            std::cout << "Invalid book name\n";
            return;
        }

        int book_id = books[book_idx].id;

        if(books[book_idx].total_borrowed == 0){
            std::cout << "No borrowed copies\n";
            return;
        }

        for(int i{0}; i < total_users; ++i){
            if(users[i].is_borrowed(book_id))
                std::cout << users[i].name << "\n";
        }

    }

    void user_return_book(){
        int user_idx, book_idx;

        if(!read_user_name_and_book_name(user_idx, book_idx))
            return;

        int book_id = books[book_idx].id;
        books[book_idx].return_copy();
        users[user_idx].return_copy(book_id);
    }

    void print_library_by_id(){
        std::sort(books, books + total_books, [](book& b1, book& b2){return b1.id < b2.id;});
        for(int i{0}; i < total_books; ++i)
            books[i].print();
    }

    void print_library_by_name(){
        std::sort(books, books + total_books, [](book& b1, book& b2){return b1.name < b2.name;});
        for(int i{0}; i < total_books; ++i)
            books[i].print();
    }

    bool read_user_name_and_book_name(int& user_idx, int& book_idx, int trials = 3){
        std::string user_name;
        std::string book_name;

        while(trials--){
            std::cout << "Enter user name and book name: ";
            std::cin >> user_name >> book_name;

            user_idx = find_user_idx_by_name(user_name);

            if(user_idx == -1){
                std::cout << "Invalid user. Try again\n";
                continue;
            }
            book_idx = find_book_idx_by_name(book_name);

            if(book_idx == -1){
                std::cout << "Invalid book name. Try again\n";
                continue;
            }
            return true;
        }
        std::cout << "You did several trials! Try later.\n";
        return false;
    }

    void user_borrow_book(){
        int user_idx, book_idx;

        if(!read_user_name_and_book_name(user_idx, book_idx))
            return;

        int user_id = users[user_idx].id;
        int book_id = books[book_idx].id;

        if(!books[book_idx].borrow(user_id))
            std::cout << "No more copies available right now\n";
        else
            users[user_idx].borrow(book_id);
    }

    void print_users(){
        for(int i{0}; i < total_users; ++i)
            users[i].print();
    }
};

int main(){



    return 0;
}