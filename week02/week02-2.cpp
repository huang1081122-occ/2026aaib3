//week02-2.cpp要使用命名空間
#include<iostream>
#include<string>
using namespace std;
int main()
{
    std::cout <<"請問你叫什麼名子啊?";
    std::string name; //宣告字串name
    std::cin >> name; //上周教的cin原來長這樣
    std::cout << name <<"你好,今天教字串喔!";
}
