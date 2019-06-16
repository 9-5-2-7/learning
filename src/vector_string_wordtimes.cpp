#include <iostream>
#include <vector>
#include <fstream>
#include <sstream>

int main(int argc, char * argv[])
{
    std::vector<std::string> file;
    std::ifstream input(argv[1]);
    std::string line;

    while(getline(input, line))
    {
        file.push_back(line);
    }

    std::cout << "enter a word: " << std::endl;
    std::string word;
    std::cin >> word;
    int occurs = 0;////occurs要声明在循环外面
    for(int i = 0; i < file.size(); ++i)
    {
        std::string stream;
        std::istringstream str(file[i]);
        while(str >> stream)///////while遍历，if找结果。
        {
            if(stream == word)
            {
                ++occurs;
            }

        }
    }
    std::cout << occurs << std::endl;
    return 0;
}
