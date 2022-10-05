#include <iostream>
#include "no_spaces.h"

std::string no_spaces(std::string& input)
{
    std::string result;
    for(int i = 0; i < input.size(); ++i)
    {
        if(input[i] != ' ' && input[i] != '\t')
	{
            result.push_back(input[i]);
	}
    }
    return result;
}

