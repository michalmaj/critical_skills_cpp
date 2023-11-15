/*
 * Find full names
 * Given N full-names as following;
 *  - Each full name starts with number K: # of words,
 *  - Then read K words.
 */
#include <iostream>
#include <vector>
#include <map>

std::map<std::string, std::vector<std::string>> createNames(){
    int n;
    std::map<std::string, std::vector<std::string>> mp;

    std::cin >> n;
    for(int i{0}; i < n; ++i){
        int len;
        std::cin >> len;

        std::string curr_full_name;
        std::string str;
        std::vector<std::string> names;

        for(int j{0}; j < len; ++j){
            std::cin >> str;

            if(j)
                curr_full_name += " ";
            curr_full_name += str;
            names.push_back(curr_full_name);
        }
        for(const auto& str : names)
            mp[str].push_back(curr_full_name);
    }
    return mp;
}

void queryNames(std::map<std::string, std::vector<std::string>>& mp){
    int q;
    std::cin >> q;
    while(q--){
        int len;
        std::cin >> len;

        std::string cur_full_name;
        std::string str;
        for(int j{0}; j < len; ++j){
            std::cin >> str;

            if(j)
                cur_full_name += " ";
            cur_full_name += str;
        }
        if(mp.count(cur_full_name)){
            for(auto& str : mp[cur_full_name])
                std::cout << str << "\n";
        }
        else
            std::cout << "No such sub-full name\n";
    }
}

template <typename T>
std::ostream& operator<<(std::ostream& out, const std::vector<T>& v){
    for(const auto& e : v)
        out << e << " ";
    return out;
}

int main(){

    auto mp = createNames();
    for(const auto& [f,s]: mp)
        std::cout << f << ": " << s << std::endl;

    queryNames(mp);


    return 0;
}