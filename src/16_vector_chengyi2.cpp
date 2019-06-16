#include<iostream>
#include<vector>

int main()
{
    std::vector<int> vec(10, 4);
    for(auto it = vec.begin(); it != vec.end(); ++it)
    {
        (*it) *= 2;
    }
    for(auto &i : vec)
    {
        std::cout << i << std::endl;
    }
    return 0;
}
