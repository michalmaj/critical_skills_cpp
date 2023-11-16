/*
 * Reverse a queue using a stack
 * Implement a function that reverses a queue. Use a stack for this purpose:
 *  void reverse_queue(queue<int>& q)
 */
#include <iostream>
#include <queue>
#include <stack>

void reverse_queue(std::queue<int>& q){
    std::stack<int> s;
    while (!q.empty()){
        s.push(q.front());
        q.pop();
    }
    while (!s.empty()){
        q.push(s.top());
        s.pop();
    }
}

void printQueue(std::queue<int> q){
    while (!q.empty()){
        std::cout << q.front() << " ";
        q.pop();
    }
    std::cout << std::endl;
}

int main(){
    std::queue<int> q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);
    q.push(6);
    q.push(7);
    q.push(8);
    q.push(9);
    q.push(10);

    printQueue(q);
    reverse_queue(q);
    printQueue(q);

    return 0;
}