#include<iostream>

class construct
{
    private:
        int p, q;

    public:
        construct(int x, int y)
        {
            p = x;
            q = y;    
        }

        void Display()
        {
            std::cout<<p<<"\n"<<q<<"\n";
        }
};

int main()
{
    construct item1(10, 20), item2 = construct(30, 40);

    item1.Display();
    item2.Display();
}