#include <iostream>
#include "op_priority.h"

Operator_Priority op_priority(char c)
{
    switch(c)
    {
        case '+':
        case '-':
            return first;
            break;
        case '*':
        case '/': 
	    return second;
	    break;
        case '%': 
            return third;
            break;
        default:
            return not_operator;
    }
}
