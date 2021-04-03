#include"../include/ReverseString.h"

void ReverseString::reverse_string() {
    size_t len_string = my_str.size();
    std::cout << len_string << std::endl;
    char temp;

    for(int i = 0; i < len_string/2; i++){
        char * my_ptr = &my_str[i];
        char * my_ptr2 = &my_str[len_string - 1 - i];

        temp = *my_ptr;
        *my_ptr = *my_ptr2;
        *my_ptr2 = temp;
        std::cout << *my_ptr << " --- " << *my_ptr2 << std::endl;

    }

}

// Constructor
ReverseString::ReverseString(std::string user_str){
    my_str = user_str;
}

// Destructor
ReverseString::~ReverseString() {
    std::cout << "The string has been reversed to : " << my_str << std::endl;

}