#include <vector>
#include <iostream>
#include <list>

int main()
{
    int ia[] = {0, 1, 1, 2, 3, 5, 8, 13, 21, 55, 89};
    std::vector<int> vec;
    std::list<int> lis;
    vec.assign(ia, ia+11);
    lis.assign(ia, ia+11);
    auto vec_iter = vec.begin();
    auto lis_iter = lis.begin();
    while(vec_iter != vec.end())
    {
        if(!(*vec_iter & 1))
        {
            vec_iter = vec.erase(vec_iter);
        }
        else ++vec_iter;
    }
    for(auto &a :vec)
    {
        std::cout << a << " ";
    }
    std::cout << std::endl;
    while(lis_iter != lis.end())
    {
        if(*lis_iter & 1)
        {
            lis_iter = lis.erase(lis_iter);
        }
        else ++lis_iter;
    }
    for(auto &a :lis)
    {
        std::cout << a << " ";
    }
    std::cout << std::endl;
    return 0;
}

