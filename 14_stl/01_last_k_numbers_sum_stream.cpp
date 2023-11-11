/*
 * Suf of last K numbers (stream)
 * last_k_numbers_sum_stream structure will recieve stream of numbers, each time return sum of last k numbers.
 * E.g., if k = 4
 * Stream: 1 2 3 4 5 6
 * Returns: 1, 1+2, 1+2+3, 1+2+3+4, 2+3+4+5, 3+4+5+6
 */
#include <queue>
#include <iostream>

struct last_k_number_sum_stream{
    int k;
    int sum{0};
    // Use queue to keep only the last k numbers
    std::queue<int> q;

    last_k_number_sum_stream(int _k): k(_k) {}

    int next(int new_num){
        q.push(new_num);
        sum += new_num; // Adding in q, adjust sum variable

        if(q.size() > k){
            sum -= q.front(); // If e have more than k elements removing iq, adjust sum varaible
            q.pop();
        }

        return sum;
    }
};

int main(){
   last_k_number_sum_stream processor{4};

   int num;
   while(std::cin >> num)
       std::cout << processor.next(num) << "\n";

    return 0;
}