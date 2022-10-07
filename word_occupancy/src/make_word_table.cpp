#include <iostream>
#include "make_word_table.h"

void make_word_table(std::string& s, std::unordered_map<std::string, int>& word_table)
{
    std::size_t length = s.size();
    std::size_t i = 0;
    while(i < length)
    {
        std::string temp = "";
        while(s[i] != ' ' && s[i] != '\t' && s[i] != '\n' && i < length)
        {
            temp += s[i];
            i++;
        }
        if(! word_table.count(temp))
	{
            word_table[temp] = 1;
	}
        else 
	{
            word_table[temp]++;
	}
        i++;
    }
}
