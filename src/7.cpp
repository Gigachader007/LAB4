#include <lab05.hpp>

std::vector<std::string> split(const std::string& str, char sep){
    std::vector<std::string> res{};
    std::string tmp = "";
    for(auto i = 0; i < str.size(); ++i){
        if(str.size() - 1 == i){
            res.push_back(tmp + str[i]);
        }
        else if(str.at(i) == sep){
            if(!tmp.empty()){
                res.push_back(tmp);
            }
            tmp = "";
        }
        else{
            tmp += str.at(i);
        }
    }
    return res;
}