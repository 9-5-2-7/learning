#include<iostream>
int main()
{
    std::string string1, string2;
    std::cin >> string1 >> string2;
    if(string1.size() == string2.size())
    {
        std::cout << string1 << std::endl;
    }
    else if(string1.size() > string2.size())
        {
            std::cout << string1 << std::endl;
        }
    else
        {
            std::cout << string2 << std::endl;
        }

    return 0;
}
