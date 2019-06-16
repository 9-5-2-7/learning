#include <iostream>

int main()
{
    std::cout << "Please enter two numbers:" << std::endl;
    int i, j;
    std::cin >> i >> j;
    if(i<j)
    {
        while(i<j && i+1 < j)
        {
            std::cout << i+1 << " ";
            ++i;
        }

    }
    else if(i>j)
    {
        while(i > j && i > j+1)
        {
            std::cout << j+1 << " ";
            ++j;
        }
    }
    else
    {
        std::cout << "NULL" << std::endl;
    }
    return 0;
}
