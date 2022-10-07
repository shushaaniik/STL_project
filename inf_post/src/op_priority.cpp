#include <iostream>
#include "op_priority.h"

Operator_Priority op_priority(char op)
{
    switch(op)
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
            throw(op);
    }
}
