#include <iostream>
#include <string>
#include <stack>

#include "infix.h"
#include "postfix.h"
#include "is_infix.h"
#include "is_operator.h"
#include "balanced.h"
#include "no_spaces.h"
#include "right_string.h"
#include "is_valid.h"
#include "is_operand.h"
#include "operand_operator.h"

int main()
{
    std::string input;
    getline(std::cin, input);
    input = no_spaces(input);
    if(!(is_valid(input)))
        std::cout << "Non valid input" << std::endl;
    else
    {
        if(is_infix(input))
	    std::cout << postfix(input) << std::endl;
	else
	    std::cout << infix(input) << std::endl;
    }
}
