#include<bits/stdc++.h>

class Demo
{
    private:
        int data;

        friend void operator-(Demo &);

    public:

        Demo(int d)
        {
            data = d;
        }

        void show()
        {
            std::cout<<"\nValue = "<<data;
        }

};

void operator-(Demo & d)
{
    d.data = -d.data;
}

int main()
{
    Demo d(10);
    d.show();
    -d;
    d.show();
}