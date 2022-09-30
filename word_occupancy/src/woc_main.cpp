#include <iostream>
#include <unordered_map>
#include "print.h"
#include "map_create.h"

int main()
{
    std::unordered_map<std::string, int> umap;
    std::string input;

    getline(std::cin, input);

    map_create(input, umap);
    print(umap);

    return 0;
}

