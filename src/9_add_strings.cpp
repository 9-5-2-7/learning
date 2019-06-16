#include<iostream>
int main()
{
    std::string string, bigstring;
    while(std::cin >> string)
    {
        bigstring += string + ' ';
    }
    std::cout << bigstring << std::endl;
    return 0;
}
