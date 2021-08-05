#include<iostream>

void fun(int count)
{
    if(count == 0)
        std::cout<<count;
    else
    {
        std::cout<<count<<std::endl;
        fun(--count);
        return;
    }
}

int main()
{
    fun(5);
    fun(-1);
}