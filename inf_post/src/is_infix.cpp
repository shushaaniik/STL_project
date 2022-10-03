#include "is_infix.h"
#include "is_operator.h"

bool is_infix(std::string input)
{
    return !is_operator(input[input.size()-1]);
}
