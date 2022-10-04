#include <iostream>
#include "right_string.h"
#include "is_operand.h"
#include "is_operator.h"

bool right_string(std::string& s)
{
    for(int i = 0; i< s.size(); ++i)
        if(!(is_operand(s[i])) && !(is_operator(s[i])) && s[i] != '(' && s[i] != ')')
            return false;
    return true;
}
