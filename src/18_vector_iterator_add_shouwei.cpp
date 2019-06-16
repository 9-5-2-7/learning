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
    for(auto iter1 = num.begin(), iter2 = num.end() - 1;
    iter1 < iter2; ++iter1, --iter2)
    {
        std::cout << *iter1 + *iter2 << std::endl;
    }

    return 0;
}

