#include<iostream>

class A
{
    private:
        int x;

    public:
        A(int d)
        {
            x = d;
        }

        ~A()
        {
            std::cout<<x;
        }
};

int main()
{
    A a(50), b(60);
    for(int i = 0; i < 10; i++)
    {
        A y(i);
    }

    A c(70);
}

//Objects are destroyed in opposite order of creation