#include<iostream>

class pract
{
    private:
        int a, b, c;

    public:
        
        pract(int x, int y, int z)
        {
            a = x;
            b = y;
            c = z;
        }

        void show()
        {
            std::cout<<"\nValues "<<a<<"\t"<<b<<"\t"<<c;
        }
};

int main()
{
    pract Object(10, 20, 30);
    pract Object2 = Object;
    pract Object3 = Object2;
    Object3.show();

    //Default copy constructor is called
}