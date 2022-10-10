#include "checks.h"
#include <stack>

bool is_valid(std::string& s)
{
    return !(!is_right_string(s) || !is_balanced(s) 
            || !operand_operator(s) || is_operator(s[0]));
}

bool operand_operator(std::string& s)
{
    int operand_count = 0, operator_count = 0;
    for(int i = 0; i < s.size(); ++i)
    {
        if(is_operand(s[i]))
	{
	    operand_count++;
	}
	if(is_operator(s[i]))
	{
	    operator_count++;
	}
    }
    return operand_count-operator_count == 1;
}

bool is_right_string(std::string& s)
{
    for(int i = 0; i< s.size(); ++i)
    {
        if(!(is_operand(s[i])) && !(is_operator(s[i])) 
		        && s[i] != '(' && s[i] != ')')
	{
            return false;
	}
    }
    return true;
}

bool is_infix(std::string& s)
{
    return !is_operator(s.back());
}

bool is_operator(char c)
{
    return c == '+' || c == '-' || c == '*' || c == '/' || c == '%';
}

bool is_operand(char c)
{
    return (c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z');
}

bool is_balanced(std::string& s)
{
    std::stack<char> st;
    for (int i = 0; i < s.length(); i++) 
    {
	if(s[i] == '(' || s[i] == ')')
	{
            if (st.empty())
	    {
	        st.push(s[i]);
	    }
            else
	    {
                if (st.top() == '(' && s[i] == ')')
		{
                    st.pop();
		}
                else 
		{
                    st.push(s[i]);
		}
	    }
        }
    }
    if (st.empty())
    {
        return true;
    }          
    return false;
}
