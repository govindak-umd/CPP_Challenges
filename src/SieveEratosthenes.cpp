#include"../include/SieveEratosthenes.h"

std::vector<int> SieveEratosthenes::findPrimes(){
    std::vector<int> all_num;
    std::vector<int> all_bool;
    for(int i =2; i < num; i++){
        all_num.push_back(i);
        all_bool.push_back(1);
    }
    for(int i =2; i <=std::pow(num,0.5); i++){if (all_bool[i] == 1){
            int curr_idx = std::pow(i, 2);
            int j = 1;
            while(curr_idx < num){
                curr_idx = std::pow(i, 2) + (j - 1)*i;
                all_bool[curr_idx - 2 ] = 0;
                j+=1;
            }
            curr_idx = 0;
        }
    }

    std::cout << "Getting all primes lesser than " << num << std::endl;
    for(int i =0; i < all_bool.size(); i++){
        if (all_bool[i] == 1){
            std::cout << all_num[i] << std::endl;
        }
    }
    return all_num;
}

void SieveEratosthenes::printVec(std::vector<int> vec){
    for(int i =0; i < vec.size(); i++){
        std::cout<< vec[i] << " ";
    }
    std::cout << std::endl;
}