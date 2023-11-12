/*
 * 3 Stack max sum
 * Given 3 stack of positive numbers. You may remove some items from the top of them. The target is the sum of all
 * stacks is equal and maximum.
 * Let's say the 3 stacks as following (remove from the end)
 *  A = {1, 2, 3, 4};
 *  B = {2, 2, 2, 4, 0};
 *  C = {0, 3, 3, 5};
 * Initial sums are 10, 10, 11 => Not equal
 * If we remove top element from A(4), top 2 from B(0, 4) and top from C(5) => 6, 6, 6 = max
 * What if we have initial C as {12, 3, 3, 5}. Maximum possible sum is 0 :(
 * Implement int max_3stack_sum(vector<int>& a, vector<int>& b, vector<int>& c)
 */
#include <iostream>
#include <vector>
#include <numeric>

int max_3stack_sum(std::vector<int>& a, std::vector<int>& b, std::vector<int>& c){
    // Sum up every vector using accumulate
    int sum_a = std::accumulate(a.begin(), a.end(), 0);
    int sum_b = std::accumulate(b.begin(), b.end(), 0);
    int sum_c = std::accumulate(c.begin(), c.end(), 0);


    while(true){
        // If one of vectors are empty return 0, because there is no max sum
        if(a.empty() || b.empty() || c.empty())
            return 0;

        // If all sums are the same return one of them
        if(sum_a == sum_b && sum_b == sum_c)
            return sum_a;

        // If sum of vector a is greater than others:
        // remove last element from vector and from sum
        if(sum_a > sum_b || sum_a > sum_c){
            sum_a -= *(a.end() - 1);
            a.pop_back();
        }

        // If sum of vector b is greater than others:
        // remove last element from vector and from sum
        if(sum_b > sum_a || sum_b > sum_c){
            sum_b -= *(b.end() - 1);
            b.pop_back();
        }

        // If sum of vector c is greater than others:
        // remove last element from vector and from sum
        if(sum_c > sum_a || sum_c > sum_b){
            sum_c -= *(c.end() - 1);
            c.pop_back();
        }
    }
}

int main(){
    std::vector A{1, 2, 3, 4};
    std::vector B{2, 2, 2, 4, 0};
    std::vector C{0, 3, 3, 5};

    int res = max_3stack_sum(A, B, C);
    std::cout << res << "\n";
    return 0;
}