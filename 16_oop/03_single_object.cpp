#include <iostream>
#include <stdexcept>

class ConfigurationManager {
private:
  ConfigurationManager() {}  
  std::string name_;

public:
  static ConfigurationManager& createInstance(std::string name) {
    static ConfigurationManager cm;
    cm.name_ = name;
    return cm;
  } 
  ~ConfigurationManager() {
    std::cout << "D-tor: " << name_ << '\n';
  }

  void doSomething() {
    std::cout << name_ << " do heavy operations...\n";
  }

  ConfigurationManager(const ConfigurationManager& other) = delete;
  ConfigurationManager& operator=(const ConfigurationManager&) = delete;

};

int main() {
  auto& cm = ConfigurationManager::createInstance("John");
  cm.doSomething();

  ConfigurationManager& cm1 = ConfigurationManager::createInstance("Bea");
  cm1.doSomething();

  return 0;
}