#include<iostream>

#include<vector>

#include<string>


int main()
{
    std::string s;
    std::vector<std::string> text;//出现string的地方都得前缀std::,与cin，cout,endl一样
    while(std::cin >> s)
    {
        text.push_back(s);
    }
    for(auto c : text)
    {
        std::cout << c;
    }
    return 0;
}


