#include <iostream>
#include <forward_list>

void find_and_insert(std::forward_list<std::string> &lstr,
        const std::string &str1, const std::string &str2)
{
    auto prev = lstr.before_begin();
    auto curr = lstr.begin();
    bool find_ = false;
    while(curr != lstr.end())
    {
        if(*curr == str1)
        {
            curr = lstr.insert_after(curr, str2);
            find_ = true;
        }
        else
        {
            prev = curr;
            ++curr;
        }
    }
    if(!find_)
    {
        lstr.insert_after(prev, str2);
    }

}
int main()
{
    std::forward_list<std::string>list_str = {"yuan", "wei", "is", "a"};
    find_and_insert(list_str, "sh", "qian");
    for(auto str: list_str)
    {
        std::cout << str << " ";
    }
    std::cout << std::endl;
    return 0 ;
}
