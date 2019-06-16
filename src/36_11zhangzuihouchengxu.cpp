#include <iostream>
#include <map>
#include <vector>
#include <fstream>
#include <sstream>

std::map<std::string, std::string>buildMap(std::ifstream &map_file)
{
    std::map<std::string, std::string>trans_map;
    std::string value;
    std::string key;
    while(map_file >> key && getline(map_file, value))
    {
        if(value.size() > 1)
        {
            trans_map[key] = value.substr(1);
        }
    }
    return trans_map;
}

////单纯的输入一个字符，返回字符自身或者返回map中字符对应的Value。
const std::string &transform(const std::string &str, const std::map<std::string, std::string>&m)
{
    //auto map_it = m.find(str);
    if(m.find(str) != m.end())
    {
        return m.find(str) -> second;
    }
    else
    {
        return str;
    }
}

void word_transform(std::ifstream &map_file, std::ifstream &input)
{
    auto trans_map = buildMap(map_file);
    std::string line;
    while(getline(input, line))
    {
        std::string str;
        std::istringstream word(line);
        bool firstword = true;
        while(word >> str)
        {
           if(firstword)
            {
                firstword = false;
            }
            else
            {
                std::cout << " ";
            }
            std::cout << transform(str, trans_map);
        }
        std::cout << std::endl;
    }
}

int main(int argc, char *argv[])
{
    std::ifstream map_file(argv[1]);
    std::ifstream input(argv[2]);
    word_transform(map_file, input);
    return 0;
}
