#include <iostream>
#include "operand_operator.h"
#include "is_operator.h"
#include "is_operand.h"

bool operand_operator(std::string& s)
{
    int operand_count = 0, operator_count = 0;
    for(int i = 0; i < s.size(); ++i)
    {
        if(is_operand(s[i]))
	    operand_count++;
	if(is_operator(s[i]))
	    operator_count++;
    }
    return (operand_count == operator_count);
}
