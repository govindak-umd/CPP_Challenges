#pragma once
#include<iostream>
#include<string>
#include <memory>
#include <utility>

class ReverseString{
public:

    char * my_ptr = new char;
    char * my_ptr2 = new char;
    std::string my_str;
    void reverse_string();
    ReverseString(std::string);
    ~ReverseString();
};