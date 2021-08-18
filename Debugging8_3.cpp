#include<bits/stdc++.h>

class p
{
    public:
        int i;
};

class q: virtual public p
{
    public:
        int j;
};

class r: virtual public p
{
    public:
        int k;
};

class s: public p, public q, public r //We made the base class virtual which solved diamond problem but then inherited it again explicitly which will again introduce ambiguity
{ 
    public:
        int mul;
};

int main()
{
    s obj;
    obj.i = 10;
    obj.j = 20;
    obj.k = 30;

    obj.mul = obj.i * obj.j * obj.k;
    std::cout<<"Mul is: "<<obj.mul<<std::endl;
}