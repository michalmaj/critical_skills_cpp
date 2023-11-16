/*
 * Stack based on a queue
 * We need to implement stack, but we will make use of the available queue data structure. Fill the push methods such
 * that the struct behave as it is a stack. Don't define other struct variables. Only this queue<int>
 */
#include <iostream>
#include <queue>

struct OurStack{
    std::queue<int> q;

    void push(int val){
        size_t sz{q.size()};
        q.push(val);
        for(size_t i{0}; i < sz; ++i){
            q.push(q.front());
            q.pop();
        }
    }

    void pop(){
        if(!q.empty()){}
            q.pop();
    }

    int top(){
        return q.front();
    }

    bool empty(){
        return q.empty();
    }
};

int main(){

    OurStack s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);

    while (!s.empty())
        std::cout << s.top() << " ", s.pop();

    return 0;
}