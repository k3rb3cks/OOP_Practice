#include<bits/stdc++.h>

class Demo
{
    private:
        int data;
    
    public:
        Demo(int data)
        {
            this->data = data;
        }

        void show()
        {
            std::cout<<"\nValue = "<<data;
        }

        friend void operator - (Demo);
};

void operator-(Demo d)
{
    d.data = -d.data;
}

int main()
{
    Demo ob(10);
    ob.show();
    -ob;
    ob.show();
}