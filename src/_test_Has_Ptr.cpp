#include <iostream>

class HasPtr
{
public:
    explicit HasPtr(const std::string &s = std::string()):
    ps(new std::string(s)), i(0){std::cout << "构造函数" << std::endl;}
    ~HasPtr(){std::cout << "析构函数" << std::endl; delete ps;}
private:
    std::string *ps;
    int i;
};

int main()
{
    HasPtr x("yuan");
    return 0;
}
