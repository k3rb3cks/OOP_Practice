#include<iostream>
//No idea
class demo
{
    private:
        static int cnt;
        int data;
    
    public:
        demo(int d)
        {
            data = d;
            demo::cnt++;
        }

        ~demo()
        {
            demo::cnt--;
        }

        void show()
        {
            std::cout<<"\nValues: "<<data<<"\t"<<cnt;
        }

        static void fun(demo & ob)
        {
            demo temp(ob.data);
            temp.show();
            ob.show();
        }

};

int main()
{
    demo ob1(20);
    ob1.show();
    demo::fun(ob1);
    ob1.show();
    demo ob2(30);
    ob1.show();
    ob2.show();
}