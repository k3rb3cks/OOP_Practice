#include<iostream>

class personal
{
    public:
        int p();
};

int personal:: p()
{
    return 1;
}

int main()
{
    personal a;
    a.x = &personal::p;
    std::cout<<((a.*(a.x))());
}

//personal has no member named x
