#include <iostream>

int main()
{
    std::cout << "Please enter two numbers:" << std::endl;
    int i, j;
    std::cin >> i >> j;
    if(i<j)
    {
        for(; i<j && i+1 < j; ++i)
        {
            std::cout << i+1 << " ";
        }

    }
    else if(i>j)
    {
        for(; i > j && i > j+1; ++j)
        {
            std::cout << j+1 << " ";
        }
    }
    else
    {
        std::cout << "NULL" << std::endl;
    }
    return 0;
}
