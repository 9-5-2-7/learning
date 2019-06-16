#include <iostream>

bool has_D(const std::string &s)
{
    for(auto c : s)
    {
        if(c >= 'A' && c <= 'Z')
        {
            return true;
        }
        else
        {
            return 0;
        }
    }
}

std::string become_X(std::string &s)
{
    for(auto &c : s)
    {
        if(c >= 'A'&& c <= 'Z')
        {
            c -= 'A' - 'a';
        }
    }
    return s;
}

int main()
{
    std::string str = "YUan WEI is a SB";
    std::cout << has_D(str) << std::endl;
    std::cout << become_X(str) << std::endl;
    return 0;
}
