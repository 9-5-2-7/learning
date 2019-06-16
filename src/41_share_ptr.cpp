#include <iostream>
#include <memory>
#include <vector>

 std::shared_ptr<std::vector<int>> new_vector()
 {
    return std::make_shared<std::vector<int>>();
 }

 void read_ints(std::shared_ptr<std::vector<int>> vec)
 {
    int i;
    while(std::cin >> i)
    {
        vec -> push_back(i);
    }
 }

 void print_ints(std::shared_ptr<std::vector<int>> vec)
 {
    for(const auto &ints : *vec)
    {
        std::cout << ints << " ";
    }
    std::cout << std::endl;
 }


int main(int argc, char *argv[])
{
    auto p = new_vector();
    read_ints(p);
    print_ints(p);
    return 0;
}

