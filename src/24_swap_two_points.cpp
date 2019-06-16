#include<iostream>

void swap(int *&p1, int *&p2)////////改变实参要引用
{
    int *temp;
    temp = p1;
    p1 = p2;
    p2 = temp;
}

int main()
{
    int a, b;
    int *point1 = &a;
    int *point2 = &b;
    std::cin >> *point1 >> *point2;
    swap(point1, point2);
    std::cout << *point1  << " "<< *point2;
    return 0;
}
