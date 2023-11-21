#include <iostream>
#include <fstream> // for ifstream and ofstream

int main(){
    bool append{true};
    auto status{std::ios::in | std::ios::out | std::ios::app};

    if(!append)
        status = std::ios::in | std::ios::out | std::ios::trunc; // overwrite

    std::string path{"names.txt"};
    std::fstream file_handler{path.c_str(), status};

    if(file_handler.fail()){
        std::cout << "Can't open the file\n";
        return -1;
    }

    std::string first, second;
    file_handler >> first >> second;

    std::cout << first << " " << second << "\n";

    file_handler.clear(); // If any internal errors before writing

    file_handler << "\nKate";

    file_handler.close();

    return 0;
}