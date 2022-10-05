#include <iostream>
#include "word_table.h"

void word_table(std::string& s, std::unordered_map<std::string, int>& um)
{
    std::size_t length = s.size();
    std::size_t i = 0;
    while(i < length)
    {
        std::string temp = "";
        while(s[i] != ' ' && i < length)
        {
            temp += s[i];
            i++;
        }
        if(! um.count(temp))
            um[temp] = 1;
        else 
            um[temp]++;
        i++;
    }
}

