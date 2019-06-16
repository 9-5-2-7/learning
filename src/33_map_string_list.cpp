#include <iostream>
#include <map>
#include <list>
#include <fstream>
#include <sstream>

std::string trans(std::string &s)
{
    for(int i = 0; i <= s.size(); ++i)
    {
        if(s[i] >= 'A' && s[i] <= 'Z')
        {
            s[i] -= ('A' - 'a');
        }
        else if(s[i] == ',' || s[i] == '.')
        {
            s.erase(i, 1);
        }
    }
    return s;
}
int main(int argc, char *argv[])
{
    std::ifstream in(argv[1]);
    if(!in)
    {
        std::cout << "无输入文件！" << std::endl;
        exit(1);
    }
    std::map<std::string, std::list<int>> word_line;
    std::string line;
    int lineno = 0;
    while(getline(in, line))
    {
        ++lineno;
        std::istringstream li_1(line);
        std::string word;
        while(li_1 >> word)
        {
            trans(word);
            word_line[word].push_back(lineno);
        }
    }
    for(const auto w : word_line)
    {
        std::cout << w.first << " 所在行";
        for(const auto i : w.second)
        {
            std::cout << i << " ";
        }
        std::cout << std::endl;
    }
    return 0;
}
