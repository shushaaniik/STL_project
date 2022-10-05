#include <iostream>
#include <string>
#include <stack>

#include "convert.h"
#include "no_spaces.h"
#include "checks.h"

int main()
{
    try
    {
        std::string input;
        getline(std::cin, input);
        input = no_spaces(input);
        if(!(is_valid(input)))
        {
            throw(input);
        }
        else
        {
            if(is_infix(input))
	    {
	        std::cout << convert_to_postfix(input) << std::endl;
	    }
	    else
	    {
	        std::cout << convert_to_infix(input) << std::endl;
	    }
        }
    }
    catch(std::string s)
    {
        std::cout << "Non valid input\n";
    }
    return 0;
}
