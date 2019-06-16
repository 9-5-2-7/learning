#include <iostream>
#include <forward_list>

int main()
{
    std::forward_list<int> flst{1,2,3,4,5,6,7,8,9,10};
    auto prev = flst.before_begin();
    auto curr = flst.begin();
    while(curr != flst.end())
    {
        if(*curr % 2)
        {
            std::cout << *curr << " ";
            curr = flst.erase_after(prev);////返回值需要赋值给curr而不能空着。
        }
        else
        {
            prev = curr;
            ++curr;
        }
    }
    std::cout << std::endl;

    for(auto num : flst)
    {
        std::cout << num << " ";
    }
    std::cout << std::endl;
    return 0;
}
