#include<bits/stdc++.h>

template<class T = int>

void fun(T arg1, int arg2)
{
    std::cout<<"Fun 1: "<<arg1<<"\t"<<arg2<<std::endl;
}

template<class T1, class T2>
void fun(T1 t1, T2 t2)
{
    std::cout<<"Fun 2: "<<t1<<"\t"<<t2<<std::endl;
}

void fun(int arg1 = 30, int arg2 = 35)
{
    std::cout<<"Fun 3: "<<arg1<<"\t"<<arg2<<std::endl;
}

int main()
{
    fun(25, 28);
    fun(25, 28.5);
    fun(35.8, 28);
    fun();
    fun(45);
}