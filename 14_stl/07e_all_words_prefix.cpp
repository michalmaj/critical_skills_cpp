/*
 * All words prefix
 * Give N, read N unique strings. Then read Q queries, for each query: print all strings that start with this prefix.
 * Print user input order. Use a map.
 */
#include <iostream>
#include <map>
#include <string>
#include <vector>

int main(){
    std::map<std::string, std::vector<std::string>> mp;

    int n;
    std::cout << "Enter number of names: ";
    std::cin >> n;

    while(n--){
        std::string str;
        std::cin >> str;

        std::string cur;
        for(const auto& c : str){
            cur += c;
            mp[cur].push_back(str);
        }
    }

    std::cout << "Enter number of queries: ";
    std::cin >> n;

    while (n--){
        std::string str;
        std::cin >> str;
        for(const auto& cur : mp[str])
            std::cout << cur << " ";
        std::cout << "\n";
    }


    return 0;
}