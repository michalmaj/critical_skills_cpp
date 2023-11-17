/*
 * All words prefix
 * Give N, read N unique strings. Then read Q queries, for each query: print all strings that start with this prefix.
 * Print user input order. Use a map.
 */
#include <iostream>
#include <map>
#include <string>

void addNames(std::map<int, std::string>& m){
    int N;
    std::cout << "How many names do you want to add: ";
    std::cin >> N;

    for(int i{0}; i < N; ++i){
        std::string name;
        std::cin >> name;
        m.emplace(i, name);
    }
}

void getNames(std::map<int, std::string>& m){
    int Q;
    std::cout << "How many queries do you want: ";
    std::cin >> Q;

    while (Q--){
        std::string prefix;
        std::cin >> prefix;
        for(const auto& e : m){
            if(e.second.starts_with(prefix))
                std::cout << e.second << " ";
        }
        std::cout << "\n";
    }
}

void printMap(const std::map<int, std::string>& m){
    for(const auto& e : m)
        std::cout << e.first << ": " << e.second << std::endl;
}

int main(){
    std::map<int, std::string> m;
    addNames(m);
    printMap(m);

    getNames(m);

    return 0;
}