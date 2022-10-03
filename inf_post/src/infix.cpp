#include <iostream>
#include "infix.h"

std::string infix(std::string postfix)
{
    std::stack<std::string> s;
    std::string result;

    for(int i = 0; i < postfix.size(); ++i)
    {
	std::string current; 
        current += postfix[i];

        if((postfix[i]>= 'a' && postfix[i] <= 'z') || (postfix[i] >= 'A' && postfix[i] <= 'Z'))
            s.push(current);

	else
	{
	    std::string op2 = s.top();
	    s.pop();
	    std::string temp;
            temp += '(';
	    temp += s.top();
	    temp += current;
	    temp += op2;
	    s.pop();
	    temp += ')';
	    s.push(temp);
	}
    }
    result = s.top();
    s.pop();
    if(!s.empty())
        return "Non valid input";
    else
        return result;
}
