#include <lab05.hpp>


void sort(std::vector<float>& array){
    for(auto i = 0; i < array.size(); ++i){
        for(auto j = 0; j < i; ++j){
            if(array[j] < array[i]){
                auto tmp = array[j];
                array[j] = array[i];
                array[i] = tmp;
            }
        }
    }
}