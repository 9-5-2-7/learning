#include <map>
#include <iostream>
#include <vector>
    void add_family(std::map<std::string, std::vector<std::string>> &families,
            const std::string &family)
    {
        if(families.find(family) == families.end())
        {
            families[family];
        }
    }

    void add_child(std::map<std::string, std::vector<std::string>>&families,
            const std::string &family, const std::string &child)
    {
        families[family].push_back(child);
    }

    int main()
    {
        std::map<std::string, std::vector<std::string>> families;
        add_family(families, "张");
        add_child(families, "张", "强");
        add_child(families, "张", "刚");
        add_child(families, "王", "五");
        add_family(families, "王");

        for(auto &f : families)
        {
            std::cout << f.first << "家的孩子： ";
            for(auto &c : f.second)
            {
                std::cout << c << ' ';
            }
            std::cout << std::endl;
        }
        return 0;
    }
