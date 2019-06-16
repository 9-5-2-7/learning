#include<iostream>

int main()
{
    int arr[10];
    for(int i = 0; i <= 9; ++i)
    {
        arr[i] = i;
    }
    for(auto i : arr)
    {
        std::cout << i << std::endl;
    }
    return 0;
}
