#include <iostream>
#include <vector>
int main()
{
    int num;
    std::vector<int> integer;
    while(std::cin >> num)
    {
        integer.push_back(num);
    }
    //std::cout << integer; //vector对象不能直接输出
    for(int num : integer)
    {

        std::cout << num;
    }
    return 0;
}
