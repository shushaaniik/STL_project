#include <iostream>
#include <fstream>
#include <unordered_map>
#include <sys/stat.h>
#include "print.h"
#include "make_word_table.h"

int main(int argc, char** argv)
{
    std::unordered_map<std::string, int> umap;
    std::string file_name = argv[1];
     
    struct stat s;
    if ( lstat(file_name.c_str(), &s) == 0 ) 
    {
        if ( S_ISDIR(s.st_mode) )
        {
           throw std::runtime_error{"The input is a directory\n"};
	}
    } 

    std::ifstream input_file;
    input_file.open(file_name);
    std::string sentence;
    if (! input_file.is_open() ) 
    {
        throw std::runtime_error{"Couldn't open file\n"};
    }
    else
    {
        std::string temp;
        while ( input_file ) 
        {
            std::getline (input_file, temp);
	    sentence += temp;
        }
        make_word_table(sentence, umap);
        print(umap);
    }

    input_file.close();
    return 0;
}
