#include <iostream>
#include "postfix.h"

std::string postfix(std::string infix)
{
    std::string result;
    std::stack<char> s;

    for(int i = 0; i < infix.size(); ++i)
    {
        char current = infix[i];
        
	if((current >= 'a' && current <= 'z') || (current >= 'A' && current <= 'Z'))
            result += current;

	else
	    if(current == '(')
                s.push(current);
	    else
	        if(current == ')')
	        {
	            while(s.top() != '(')
		    { 
		        result += s.top();
		        s.pop();
		    }
		    s.pop();
	        }
	        
	        else
		{
                    while(!s.empty() && op_priority(current) < op_priority(s.top()))
		    {
		        result += s.top();
			s.pop();
		    }
		    s.push(current);
		}
    }

    while(!s.empty())
    {
        result += s.top();
	s.pop();
    }

    return result;
}
