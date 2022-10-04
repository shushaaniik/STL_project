#include <iostream>
#include "op_priority.h"

int op_priority(char c)
{
    switch(c)
    {
        case '+':
        case '-':
            return 1;
            break;
        case '*':
        case '/': 
        case '%': 
            return 2;
            break;
        default:
            return -1;
    }
}
