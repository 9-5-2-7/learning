#include<iostream>
#include<vector>

int main()
{
    int i;
    std::vector<int> num;
    while(std::cin >> i)
    {
        num.push_back(i);
    }
    decltype(num.size()) top = 0; auto bottom = num.size()-1;
    for(; top <= bottom; ++top, --bottom)
    {
        std::cout << num[top] +num[bottom] << std::endl;
    }
    return 0;
}
