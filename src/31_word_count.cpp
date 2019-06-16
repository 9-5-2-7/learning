#include <iostream>
#include <map>

int main()
{
    std::map<std::string, size_t>word_count;
    std::string word;
    while(std::cin >> word)
    {
        ++word_count[word];
    }
    for(auto &w : word_count)
    {
        std::cout << w.first << " " << w.second << std::endl;
    }
    return 0;
}
