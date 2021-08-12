#include<iostream>

class dynamic
{
    private:
        int* p;

    public:
        dynamic()
        {
            //p = int;
            *p = 10;
        }

        dynamic(int v)
        {
            *p = v;
        }

        int display()
        {
            return *p;
        }
};

int main()
{
    dynamic p1, p2(9);
    std::cout<<"Object p1 is: ";
    std::cout<<p1.display();
    std::cout<<"\n Object p2 is: " << p2.display();

    
}