#include <iostream>
#include "is_operand.h"

bool is_operand(char c)
{
    return((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
