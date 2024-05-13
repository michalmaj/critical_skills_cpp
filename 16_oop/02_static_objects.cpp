#include <iostream>

class Employee {
private:
  std::string name_;

public:
  Employee(std::string name): name_(name) {std::cout << "C-tor: " << name << '\n';}
  ~Employee() {std::cout << "D-tor: " << name_ << '\n';}
};

int main() {
  static Employee e1{"John"};
  Employee e2{"Mark"};
  if (true)
    Employee e3{"Mona"};
  static Employee e4{"Bea"};

  return 0;
}