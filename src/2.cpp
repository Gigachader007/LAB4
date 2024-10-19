#include <lab05.hpp>
#include <limits>

std::pair<float, float> minMax(const std::vector<float>& array){
    if(array.empty())
        return {std::numeric_limits<float>::min(),std::numeric_limits<float>::max()};
    float min = array.front(), max = array.front();
    for(auto v : array){
        if(v < min){
            min = v;
        }
        if(v > max){
            max = v;
        }
    }
    return {min, max};
}