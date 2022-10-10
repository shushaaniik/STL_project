#include <iostream>
#include "print.h"

void print(std::unordered_map<std::string, int>& um)
{
    for(auto i : um)
    {
        std::cout << "The word " << i.first 
	<< "'s occupancy in the sentence is " << i.second<<std::endl;
    }
}
