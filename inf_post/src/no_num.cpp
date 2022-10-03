#include <iostream>
#include "no_num.h"

bool no_num(std::string s)
{
    for(int i = 0; i< s.size(); ++i)
        if(s[i] < '9' && s[i] > '0')
            return false;
    return true;
}

