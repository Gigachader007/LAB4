#include <lab05.hpp>

std::string replace(const std::string& str, const std::string& old, const std::string& new_string){
    std::string res = "";
    for(auto i = 0; i < str.size(); ++i){
        bool found = true;
        for(auto j = 0; j < old.size(); ++j){
            if(i + j >= str.size()){
                found = false;
                break;
            }
            if(str[i+j] != old[j]){
                found = false;
                break;
            }
        }
        if(found){
            res += new_string;
            i += old.size() - 1;
        }
        else{
            res += str[i];
        }
    }
    return res;
}