#include<bits/stdc++.h>


template<class T, int y>
int min_max(T x)
{
    return (x > y ? x : y);
}

int main()
{
    std::cout<<min_max<float, 3>(5.8)<<std::endl;
}
