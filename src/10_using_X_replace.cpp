#include <iostream>
int main()
{
    std::string str;
    while(std::cin >> str)
    {
        for(auto &c : str)
        {
            c = 'X';
        }
        std::cout << str << ' ';
    }
    return 0;
}
/*#include <iostream>
int main()
{
    std::string line;
    getline(std::cin, line);
    for(int i = 0; i != line.size() ; ++i)
    {
        if(line[i]!=' ')
        {
            line[i] = 'X';
        }
    }
    std::cout << line;
    return 0;
}
*/
