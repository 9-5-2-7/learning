#include<iostream>
#include<vector>
int main()
{
    std::vector<int> vec;
    for(int i = 0; i <= 9; ++i)
    {
        vec.push_back(i);
    }
    std::vector<int> vec1(vec);
    for(auto i : vec1)
    {
        std::cout << i << std::endl;
    }
    return 0;
}
