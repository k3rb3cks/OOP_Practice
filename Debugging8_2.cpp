#include<bits/stdc++.h>

class four_seater
{
    public:
        void Property()
        {
            std::cout<<"It has space for four persons" <<std::endl;
        }
};

class four_wheeler
{
    public:
        void Property()
        {
            std::cout<<"It runs on four tyres"<<std::endl;
        }
};

class car: public four_seater, public four_wheeler
{    
};

int main()
{
    car c1;
    //c1.four_seater;//Object cannot call a class
    //c1.four_wheeler;//Object cannot call a class
    //c1.Property();//Ambiguous call to Property
    c1.four_seater::Property();
    c1.four_wheeler::Property();
}