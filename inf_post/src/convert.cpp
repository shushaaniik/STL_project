#include <iostream>
#include <stack>
#include "convert.h"
#include "checks.h"
#include "op_priority.h"

//enum Op_Priority {'+', '-' =1, '*', '/', '%' =2};

std::string convert_to_infix(std::string& postfix)
{
    std::stack<std::string> s;
    std::string result;

    for(int i = 0; i < postfix.size(); ++i)
    {
	std::string current; 
        current += postfix[i];

        if((postfix[i]>= 'a' && postfix[i] <= 'z') || (postfix[i] >= 'A' && postfix[i] <= 'Z'))
	{
            s.push(current);
	}

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
    return result;
}

std::string convert_to_postfix(std::string& infix)
{
    std::string result;
    std::stack<char> s;

    for(int i = 0; i < infix.size(); ++i)
    {
        char current = infix[i];
        
	if((current >= 'a' && current <= 'z') || (current >= 'A' && current <= 'Z'))
	{
            result += current;
	}

	else
	{
	    //Op_Priority current_priority = current;
	    if(current == '(')
	    {
                s.push(current);
	    }
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
		    //Op_Priority top_priority = s.top();
                    while(!s.empty() && op_priority(current) < op_priority(s.top()))
		    {
		        result += s.top();
			s.pop();
			//top_priority = s.top();
		    }
		    s.push(current);
		}
	}
    }

    while(!s.empty())
    {
        result += s.top();
	s.pop();
    }

    return result;
}

