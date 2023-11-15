/*
 * Sliding Window Maximum
 * Given an array nums, there is a sliding window of size k which is moving from every left of the array to the very
 * right. We can only see the k numbers in the window. Each time the sliding window moves right by one position. Return
 * the max sliding window.
 */
#include <iostream>
#include <deque>
#include <vector>
#include <algorithm>

std::vector<int> sliding_window_maximum(const std::vector<int>& vec, int k){
    if(vec.size() < k)
        return {};
    std::deque<int> dq{vec.begin(), vec.begin()+k};
    auto it = std::max_element(dq.begin(), dq.end());
    int my_max{*it};
    std::vector<int> res{dq.begin(), dq.end()};

    for(int i{k}; i < vec.size(); ++i){
        dq.emplace_back(vec.at(i));
        dq.pop_front();
        it = std::max_element(dq.begin(), dq.end());
        if(my_max < *it){
            my_max = *it;
            res = {dq.begin(), dq.end()};
        }
    }

    return res;
}


int main(){
    std::vector vec{1, 3, -1, -3, 5, 3, 6, 7};
    int k{3};

    auto res{sliding_window_maximum(vec, k)};
    for(const auto& e : res)
        std::cout << e << " ";

    return 0;
}