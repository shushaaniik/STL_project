#include <iostream>
#include "is_valid.h"

bool is_valid(std::string& s)
{
    return (!(!right_string(s) || !balanced(s) 
            || !operand_operator(s) || is_operator(s[0])));
}
