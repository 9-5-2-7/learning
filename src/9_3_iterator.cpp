#include <iostream>
#include <vector>

bool Serch_num(std::vector<int>::iterator beg, std::vector<int>::iterator end, int x)
{
    while(beg != end)
    {
        if(*beg == x)
        {
            return true;
        }
        ++beg;
    }
    return false;
}

int main()
{
    std::vector<int> a = {1, 2, 3, 4, 5};
    std::cout << Serch_num(a.begin(), a.end(), 6) << std::endl;
    return 0;
}
