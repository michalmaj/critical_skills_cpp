#include <iostream>

struct queue{
    int arr[100]{};
    int len;

    queue(){
        len = 0;
    }

    void add_end(int value){
        arr[len++] = value;
    }

    void add_front(int value){
        right_shift();
        arr[0] = value;
    }

    int remove_front(){
        int front = arr[0];
        left_shift();

        return front;
    }

    void print(){
        for(int i{0}; i < len; ++i)
            std::cout << arr[i] << " ";
        std::cout << std::endl;
    }

    // Helper function
    void right_shift(){
        for(int i{len}; i > 0; --i){
            arr[i] = arr[i-1];
        }
        len++;
    }

    void left_shift(){
        for(int i{1}; i < len; ++i){
            arr[i-1] = arr[i];
        }
        len--;
    }
};

int main(){
    queue my_queue;

    my_queue.add_end(10);
    my_queue.add_end(20);
    my_queue.add_end(30);
    my_queue.print();

    my_queue.add_front(1);
    my_queue.add_front(4);
    my_queue.print();

    std::cout << my_queue.remove_front() << std::endl;

    return 0;
}