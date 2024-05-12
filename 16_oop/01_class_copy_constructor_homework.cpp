#include <iostream>
#include <stdexcept>

class MyVector {
private: 
  int *arr_;
  int len_{100};

  bool checkPos(int pos) {
    if (pos >= len_) {
      return true;
    }
    return false;
  }

public:
  MyVector(int len, int default_value = 0) {
    len_ = len;
    arr_ = new int[len];

      for(int i{0}; i < len_; ++i) {
        arr_[i] = default_value;
      }
  }

  MyVector(const MyVector& other) {
    len_ = other.len_;
    arr_ = new int[len_];
    for (int i{0}; i < len_; ++i) {
      arr_[i] = other.arr_[i];
    }
  }

  ~MyVector() {
    std::cout << "d-tor\n";
    delete[] arr_;
  }

  int get(int pos) {
    if (checkPos(pos)) {
      throw std::out_of_range("Out of bounds");
    }
    return arr_[pos];
  }

  void set(int pos, int val) {
    if (checkPos(pos)) {
      throw std::out_of_range("Out of bounds");
    }
    arr_[pos] = val;
  }

  void print() {
    for (int i{0}; i < len_; ++i) {
      std::cout << arr_[i] << " ";
    }
    std::cout << '\n';
  }

};

int main() {
  MyVector a1{10, 99};
  MyVector a2(a1);
  a2.set(1, 22);
  a2.print();
  


  return 0;
}