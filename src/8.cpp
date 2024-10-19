#include <lab05.hpp>

std::string join(const std::vector<std::string>& list, const std::string& sep){
    std::string res = "";
    for(auto i = 0; i < list.size(); ++i){
        res += list.at(i);
        if(i != list.size() - 1) res += sep;
    }
    return res;
}