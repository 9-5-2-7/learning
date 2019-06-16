#include <iostream>

#include <vector>


bool compare(const std::vector<int> &a, const std::vector<int> &b)
{
    if(a==b)
    {
        return true;
    }
    return false;
}

int main()
{
    std::vector<int> i = {1,3,5,6,7};
    std::vector<int> j = {1,3,5,6,7};
    std::cout << compare(i, j) << std::endl;
    return 0;
}
