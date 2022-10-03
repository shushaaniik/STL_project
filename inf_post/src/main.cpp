#include <iostream>
#include <string>
#include <stack>
#include "no_num.h"
#include "infix.h"
#include "postfix.h"
#include "is_infix.h"
#include "is_operator.h"
#include "balanced.h"

int main()
{
    std::string input;
    std::cin >> input;
    if(!no_num(input) || !balanced(input))
        std::cout << "Non valid input" << std::endl;
    else
    {
        if(is_infix(input))
	    std::cout << postfix(input) << std::endl;
	else
	    std::cout << infix(input) << std::endl;
    }
}
