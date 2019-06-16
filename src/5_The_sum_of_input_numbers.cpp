#include <iostream>
int main()
{
    int i = 0, sum = 0;
    while(std::cin >> i)
    {
        sum += i;
    }
    std::cout << sum << std::endl;
    return 0;
}
