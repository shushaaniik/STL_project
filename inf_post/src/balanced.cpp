#include <iostream>
#include "balanced.h"

bool balanced(std::string sequance)
{
    std::stack<char> s;
    for (int i = 0; i < sequance.length(); i++) 
    {
	if(sequance[i] == '(' || sequance[i] == ')')
	{
            if (s.empty())
	        s.push(sequance[i]);
            else 
                if (s.top() == '(' && sequance[i] == ')') 
                    s.pop();
                else 
                    s.push(sequance[i]);
        }
    }
    if (s.empty())
        return true;
                
    return false;
}
