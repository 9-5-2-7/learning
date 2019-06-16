#include <iostream>

std::string::size_type find_char(const std::string s,
        char c, std::string::size_type &occurs)
{
    occurs = 0;
    std::string::size_type ret = 0;
    for(std::string::size_type i = 0; i <= s.size(); ++i)
    {
        if(s[i] == c)
        {
            ++occurs;
            if(ret == 0)
            {
                ret = i;
            }
        }
    }
    return ret;
}
int main()
{
    std::string::size_type str = 0;
    std::cout << find_char("yuanweiisa", 'i', str) << std::endl;
    std::cout << str << std::endl;
    return 0;
}

