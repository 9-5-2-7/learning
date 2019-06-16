#include <iostream>
#include <vector>

std::vector<int>* new_vector()
{
    return new std::vector<int>;
}

void read_ints(std::vector<int>*vec)
{
    int i;
    while(std::cin >> i)
    {
        vec -> push_back(i);
    }
}

void print_ints(std::vector<int>*vec)
{
    for(auto &a : *vec)
    {
        std::cout << a << " ";
    }
    std::cout << std::endl;
}

int main(int argc, char *argv[])
{
    auto pv = new_vector();
    read_ints(pv);
    print_ints(pv);
    delete pv;
    pv = nullptr;
    return 0;
}
