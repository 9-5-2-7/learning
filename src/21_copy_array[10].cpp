#include<iostream>

int main()
{
    int arr[10];
    for(int i = 0; i <= 9; ++i)
    {
        arr[i] = i;
    }
    int arr1[10];
    for(int i = 0; i <= 9; ++i)
    {
        arr1[i] = arr[i];
    }
    for(auto i : arr1)
    {
        std::cout << i << std::endl;
    }
    return 0;
}
