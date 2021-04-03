#pragma once
#include<iostream>
#include<string>
#include <memory>
#include <utility>

class ReverseString{
public:


    std::string my_str;
    void reverse_string();
    ReverseString(std::string);
    ~ReverseString();
};