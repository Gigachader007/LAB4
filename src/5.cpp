#include <lab05.hpp>

bool remove_first_negative_element(std::vector<int>& vec, int& removed_element){
    removed_element = 0;
    std::vector<int> new_vec{};
    for(auto i = 0; i < vec.size(); ++i){
        if(vec.at(i) < 0 && removed_element == 0){
            removed_element = vec.at(i);
            continue;
        }
        new_vec.push_back(vec.at(i));
    }
    vec = new_vec;
    return removed_element != 0;
}