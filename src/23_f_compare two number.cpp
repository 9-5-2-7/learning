/*
#include<iostream>

int f(int num, int *p)
{
    if(num > *p)
    {
        return num;
    }
    else if(num < *p)
    {
        return *p;
    }
    else
    {
        return 0;
    }
}
int main()
{
    std::cout << "PLease enter two numbers: " << std::endl;
    int i, j;
    std::cin >> i >> j;
    int *k = &j;
    std::cout << f(i, k);
    return 0;
}
 */
#include<iostream>
int f(const int num, const int *p)
{
    return (num > *p) ? num :*p;
}
int main()
{
    std::cout << "PLease enter two numbers: " << std::endl;
    int i, j;
    std::cin >> i >> j;
    std::cout << f(i, &j);
    return 0;
}
