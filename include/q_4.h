#pragma once
#include<iostream>
#include<algorithm>
#include<string>

void findLexicographicString(std::string key, std::string perm_key){

    int rank = 1;

    while(true){
        if (key == perm_key){
            std::cout << "The permutation "<< perm_key <<" has a lexicographic rank of "<< rank << std::endl;
            return;
        }
        std::next_permutation(key.begin(), key.end());
        rank+=1;
    }


}
