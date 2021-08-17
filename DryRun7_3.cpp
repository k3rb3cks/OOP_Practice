#include<bits/stdc++.h>

class Demo
{
    private:
        int data;
    
    public:

        Demo(){}

        Demo(int data)
        {
            this->data = data;
        }

        void show()
        {
            std::cout<<data<<std::endl;
        }

        void operator++()
        {
            data++;
        }

        Demo & operator=(Demo & d)
        {
            d.data = data;
            return d;
        }
        //Here assignment is done to the right;
};

int main()
{
    Demo d1(10), d2;

    ++d1;

    d1.show();

    //d1 = d2;

    d2 = d1;

    d1.show();
    d2.show();
}