#include<iostream>

class stm
{
    static int a;

    int number;
    
public:
        void increment(int b)
        {
            number = b;
            a++;
        }

        void show(void)
        {
            std::cout<<a<<std::endl;
        }
};

int stm::a;
int main()
{
    stm s1,s2,s3;
    s1.increment(5);
    s1.show();
    s2.show();
    s3.show();

}