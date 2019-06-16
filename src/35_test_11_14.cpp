#include <iostream>
#include <map>
#include <vector>
#include <utility>

std::map<std::string, std::vector<std::pair<std::string, std::string>>>families;

void add_family(const std::string &family)
{
    if(families.find(family) != families.end())
    {
        families[family];
    }
}

void add_name_birthday(const std::string &family, const std::string &name, const std::string &birthday)
{
    families[family].push_back(std::pair<std::string, std::string>{name, birthday});
}

int main()
{
    add_family("yuan");
    add_family("chen");
    add_name_birthday("yuan", "yuan", "1981.5.4");
    add_name_birthday("chen", "qian", "1991.1.7");
    add_name_birthday("yuan", "wei", "1991.9.7");
    add_name_birthday("chen", "jia", "1989.6.3");
    for(auto &a : families)
    {
        std::cout << a.first << "'s child is ";
        for(auto &b : a.second)
        {
            std::cout << b.first << " " << b.second << " ";
        }
        std::cout << std::endl;
    }
    return 0;
}
