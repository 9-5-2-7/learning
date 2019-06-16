#include <memory>
#include <vector>
#include <iostream>

std::shared_ptr<std::vector<int>> p_vec_int()
{
    return std::make_shared<std::vector<int>>();
}

void cin_vec(std::shared_ptr<std::vector<int>> ptr)
{
    int n;
    while(std::cin >> n)
    {
        ptr -> push_back(n);
    }
}

void cout_vec(std::shared_ptr<std::vector<int>> ptr)
{
    for(auto &i : *ptr)
    {
        std::cout << i << " ";
    }
    std::cout << std::endl;
}
int main()
{
    std::shared_ptr<std::vector<int>> ptr_vec = p_vec_int();//////auto ptr_vec = p_vec_int();
    cin_vec(ptr_vec);
    cout_vec(ptr_vec);
    return 0;
}
