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
    for(decltype(num.size()) j = 0; j != num.size()-1; ++j)
    {
        std::cout << num[j] + num[j+1] << std::endl;
    }
    return 0;
}
