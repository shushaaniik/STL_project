#include <iostream>
#include <string>
#include <stack>

#include "convert.h"
#include "no_spaces.h"
#include "checks.h"

int main()
{
    std::string input;
    getline(std::cin, input);
    input = no_spaces(input);
    if(!(is_valid(input)))
    {
	std::cerr << "Invalid input\n";
	return 1;
    }
    else
    {
        if(is_infix(input))
        {
	    try
	    {
                std::cout << convert_to_postfix(input) << std::endl;
	    }
	    catch(char)
	    {
		std::cerr << "Wrong use of program\n";
	    }
        }
        else
        {
            std::cout << convert_to_infix(input) << std::endl;
	}
    }
    return 0;
}
