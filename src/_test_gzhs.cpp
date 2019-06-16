#include <iostream>
#include <string>
class X
{
public:
    X(){std::cout << "构造函数： X()" << std::endl;}
    X(const std::string &p): ps(new std::string (p)), i(0){std::cout << "构造函数2" << std::endl;}
    X(const X &){std::cout << "拷贝构造函数： X(const X &)" <<std::endl;}
    X & operator= (const X &rhs){ std::cout << "拷贝赋值运算符： =(const X&)" << std::endl; return *this;}
    ~X(){std::cout << "析构函数： ~X()" <<std::endl; delete ps;}
private:
    std::string *ps;
    int i;
};

//void f1(X x)
//{}
//void f2(X &x)
//{}

int main()
{
    X x("yuan");
    X *p2x = new X;
    X *p1x = new X;
    delete p2x;
    std::cout << "delete p2x" << std::endl;
    delete p1x;
    std::cout << "delete p1x" << std::endl;
    return 0;
}
