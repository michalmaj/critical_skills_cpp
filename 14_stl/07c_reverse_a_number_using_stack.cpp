/*
 * Reverse a number using stack
 * Implement a method that takes number >= 0 and reverse its digits using a stack: int reverse_num(int num)
 * E.g., Input 1234, Output 4321
 */
#include <iostream>
#include <stack>
#include <cassert>

int reverse_num(int num){
    if(num < 0)
        num = -num;

    std::stack<int> s;
    while (num > 0){
        s.push(num % 10);
        num /= 10;
    }

    int multiplier{1};
    while (!s.empty()){
        num += multiplier * s.top();
        s.pop();
        multiplier *= 10;
    }

    return num;
}

int main(){
    int num{1653};
    std::cout << reverse_num(num) << "\n";

    return 0;
}