#include <iostream>
#include <unordered_map>
#include "print.h"
#include "word_table.h"

int main()
{
    std::unordered_map<std::string, int> umap;
    std::string input;

    getline(std::cin, input);

    word_table(input, umap);
    print(umap);

    return 0;
}

