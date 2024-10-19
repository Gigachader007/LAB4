#include <lab05.hpp>

float mean(const std::vector<float>& array){
    float sum = 0.f;
    for(auto v : array){
        sum += v;
    }
    return sum / array.size();
}