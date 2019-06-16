//
// Created by yuanwei on 19-6-3.
//

#ifndef TEST_STRBLOB_H
#define TEST_STRBLOB_H

#include <memory>
#include <vector>
#include <initializer_list>
#include <stdexcept>
class StrBlob
{
public:
    typedef std::vector<std::string>::size_type size_type;
    StrBlob();
    //StrBlob(): data(make_shared(std::vector<std::string>) {}
    StrBlob(std::initializer_list<std::string> i1);

    size_type size() const {return data -> size();}
    bool empty() const{return data -> empty();}
    void push_back(std::string &t){data -> push_back(t);}
    void pop_back();
    std::string &front();
    const std::string &front() const;
    std::string &back();
    const std::string &back() const;

private:
    std::shared_ptr<std::vector<std::string>> data;
    void check(size_type i, const std::string &msg) const;
};

StrBlob::StrBlob(): data(make_shared(std::vector<std::string>()) {}
StrBlob::StrBlob(std::initializer_list<std::string> i1):
                 data(make_shared<std::vector<std::string>>i1) {}


void StrBlob::check(StrBlob::size_type i, const std::string &msg) const
{
    if(i <= data -> size())
    {
        throw out_of_range(msg);
    }
}

const void StrBolb::pop_back() const
{
    check(0, "pop_back on empty SreBlob");
    return data -> pop_back;
}

const std::string& StrBlob::front() const
{
    check(0, "front on empty SreBlob");
    return data -> front()
}

std::string& StrBlob::back()
{
    check(0, "back on empty SreBlob");
    return data -> back();
}


#endif //TEST_STRBLOB_H






/*
#include <memory>
#include <vector>
#include <initializer_list>
#include <stdexcept>
class StrBlob
{
public:
    typedef std::vector<std::string>::size_type size_type;
    StrBlob();
    //StrBlob(): data(std::make_shared<std::vector<std::string>>){}
    StrBlob(std::initializer_list<std::string> i1);

    size_type size() const {return data -> size();}
    bool empty() const{return data -> empty();}
    void push_back(std::string &t){data -> push_back(t);}
    void pop_back();
    std::string &front();
    const std::string &front() const;
    std::string &back();
    const std::string &back() const;

private:
    std::shared_ptr<std::vector<std::string>> data;
    void check(size_type i, const std::string &msg) const;
};

StrBlob::StrBlob(): data(std::make_shared<std::vector<std::string>>) { }
StrBlob::StrBlob(std::initializer_list<std::string> i1):
        data(std::make_shared<std::vector<std::string>>(i1)) { }


void StrBlob::check(StrBlob::size_type i, const std::string &msg) const
{
    if(i <= data -> size())
    {
        throw std::out_of_range(msg);
    }
}


const std::string& StrBlob::front() const
{
    check(0, "front on empty SreBlob");
    return data -> front();
}

std::string& StrBlob::back()
{
    check(0, "back on empty SreBlob");
    return data -> back();
}
void StrBlob::pop_back()
{
    check(0, "pop_back on empty SreBlob");
    data -> pop_back();
}

