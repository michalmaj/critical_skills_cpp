/*
 * Remove All Adjacent Duplicates In String
 * Given a string s of lowercase letters, a duplicate removal consists of choosing two adjacent and equal letters, and
 * removing them.
 * We repeatedly make duplicate removals on S until we no longer can.
 * Return the final string after all such duplicate removals have been made. It is guaranteed the answer is unique.
 * Use a stack.
 * Example:
 * input: "abbaca"
 * output: "ca"
 * Explanation: For example, in "abbaca" we could remove "bb" since the letters are adjacent and equal, and this is the
 * only possible move. The result of this move is that the string is "aaca", of which only "aa" is possible, so the
 * final string is "ca"
 */
#include <iostream>
#include <stack>

std::string removeDuplicates(const std::string& str){
    std::stack<char> s;

    s.push(str.at(0));
    int i{1};
    bool duplicate{false};
    while(i < str.size()){
        if(!s.empty() && str.at(i) == s.top()){
            i++;
            duplicate = true;
            continue;
        }
        if(duplicate){
            s.pop();
            duplicate = false;
            continue;
        }
        s.push(str.at(i));
        i++;
    }

    std::string res;
    while(!s.empty()){
        res += s.top();
        s.pop();
    }
    return {res.rbegin(), res.rend()};
}

int main(){
    std::string str{"abbbaaca"};

    std::cout << removeDuplicates(str);

    return 0;
}