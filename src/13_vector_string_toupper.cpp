#include<iostream>
#include<vector>

int main()
{
    std::string word;
    std::vector<std::string> text;
    while(std::cin >> word)
    {
        text.push_back(word);
        for(auto &ch : text)
        {
            for(auto &c : word)
        {
                c = toupper(c);
        }
        }
        std::cout << word << std::endl;
    }
    return 0;
}

