#include <lab05.hpp>

int argmax(const std::vector<float>& array){
    if(array.empty()) return -1;
    int         ind = 0;
    float       val = array.at(ind);
    for(auto i = 0; i < array.size(); ++i){
        if(array.at(i) > val){
            val = array.at(i);
            ind = i;
        }
    }
    return ind;
}