#include <iostream>
#include <sstream> // istringstream and ostringstream

int main(){
    std::string str{"John 32 years"};
    std::istringstream  iss{str};

    std::string name;
    int age;
    iss >> name >> age;

    std::cout << age << "\n";

    std::ostringstream oss;

    oss << "Arya ";
    oss << 12;
    oss << " years old\n";

    std::cout << oss.str();

    return 0;
}