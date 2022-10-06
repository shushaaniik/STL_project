#include <iostream>
#include <fstream>
#include <unordered_map>
#include <sys/stat.h>
#include "print.h"
#include "word_table.h"

int main()
{
    std::unordered_map<std::string, int> umap;
    try
    {
        std::string file_name;
        getline(std::cin, file_name);
        
        struct stat s;
        if ( lstat(file_name.c_str(), &s) == 0 ) 
        {
            if ( S_ISDIR(s.st_mode) )
	    {
                throw(1);
	    }
        } 

	std::ifstream input_file;
	input_file.open(file_name);
	std::string sentence;
	if (! input_file.is_open() ) 
	{
	    throw(file_name);
	}
	else
	{
	    std::string temp;
	    while ( input_file ) 
	    {
                std::getline (input_file, temp);
		sentence += temp;
            }
            word_table(sentence, umap);
            print(umap);
	}
    }
    catch(std::string s) 
    {
        std::cout << "Couldn't open file " << s << "\n";
    }
    catch(int x)
    {
        std::cout << "The input is directory\n";
    }
    return 0;
}
