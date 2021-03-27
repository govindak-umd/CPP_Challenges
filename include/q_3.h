#include<iostream>
#include<algorithm>
#include<vector>

/**
 * This works with std::nth_element.
 * This function doesn't sort th array. It
 * converts the array in such a way that the
 * all elements before the nth position are lesser than
 * it and all the elements greater than that posiiton are
 * greater than that number itself.
 * @param arr
 * @param k
 */
void findKthSmallestElement(){

    std::vector<int> my_vec;
    my_vec = {7,4,6,3,9,1};
    size_t n = 2;

    std::nth_element(my_vec.begin(), my_vec.begin() + n, my_vec.end());

    std::cout << "nth smallest element with n = " << n << " is " << my_vec[n]<< std::endl;

}