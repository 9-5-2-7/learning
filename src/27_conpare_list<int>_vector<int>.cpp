#include <iostream>
#include <list>
#include <vector>


bool compare(const std::list<int> &a, const std::vector<int> &b)
{
    if(a.size() != b.size())
    {
        return false;
    }
    auto ablist = a.begin();
    //auto aelist = a.end();
    auto bb = b.begin();
    while(ablist != a.end())
    {
        if(*ablist != *bb)////元素对比，解指针运算符不要忘了
        {
            return false;
        }
        ++ablist;
        ++bb;
    }
    return true;
        
}

int main()
{
    std::list<int> i = {1,6,7};
    std::vector<int> j = {1,3,5,6,7};
    std::cout << compare(i, j) << std::endl;
    return 0;
