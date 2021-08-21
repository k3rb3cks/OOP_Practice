#include<bits/stdc++.h>

template <class T1, class T2>
T1 & MinMax(T1 t1, T2 t2)
{
    return t1 > t2 ? t1 : t2;
    std::cout<<"??" //Would compile but wont display since control has been returned already!!!
}

int main()
{
    std::cout<<++MinMax(2, 3);
    std::cout<<++MinMax(2, 3);
}

