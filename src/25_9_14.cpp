//
// Created by yuanwei on 19-5-26.
//
#include <iostream>
#include <string>
#include <vector>
#include <list>

/*
using std::cout;
using std::list;
using std::string;
using std::vector;
 */

int main()
{
    std::list<const char*> chars = {"hello", "world", "!"};
    std::vector<std::string> str;//string, vector, list 等类型记得命名空间。
    str.assign(chars.cbegin(), chars.cend());
    std::cout << "赋值后的string为：";
    for (auto &s: str)
        std::cout << s << ' ';
    return 0;
}
