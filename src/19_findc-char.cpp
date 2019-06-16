#include<iostream>

std::string::size_type find_char(const std::string &s, char c, std::string::size_type &occours)
{
    auto ret = s.size();
    occours = 0;
    for(decltype(ret) i = 0; i != s.size(); ++i)
    {
        if(s[i] == c)
        {
            if(ret == s.size())
            {
                ret = i;
            }
            ++occours;
        }

    }
       return ret;
}

int main()
{
    std::string str = "shabichuanpu";
    std::string::size_type index, ctr;
    index = find_char(str, 'h', ctr);
    std::cout << index << std::endl;
    std::cout << ctr << std::endl;
    return 0;
}
