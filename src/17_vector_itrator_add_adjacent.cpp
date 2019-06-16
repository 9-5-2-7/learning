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
    for(auto iter = num.begin(); iter != num.end(); ++iter)
    {
        std::cout << *iter + *(iter+1) << std::endl;
    }

    return 0;
}
