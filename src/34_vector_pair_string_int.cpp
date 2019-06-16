#include <iostream>
#include <utility>
#include <vector>
#include <fstream>
#include <sstream>

int main(int argc, char *argv[])
{
    std::ifstream in1_str(argv[1]);
    std::string str;
    int intnum;
    std::pair<std::string, int> str_int;
    std::vector<std::pair<std::string, int>> vec_pair;

    while(in1_str >> str && in1_str >> intnum)
    {
        vec_pair.emplace_back(std::pair<std::string, int>(str, intnum));
    }
    for(auto i : vec_pair)
    {
        std::cout << i.first << " " << i.second << std::endl;
    }
    return 0;
}

