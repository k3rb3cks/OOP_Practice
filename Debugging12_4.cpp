#include<bits/stdc++.h>

template <class T1, class T2 = int> //Default arguments always come at last!
class Test
{
    T1 a;
    T2 b;

    public:
        Test(T1 x, T2 y)
        {
            a = x;
            b = y;
        }

        void show()
        {
            std::cout<<a<< " and "<<b<<std::endl;
        }


};

int main()
{
    Test <float, int> t(1.23, 3);
    t.show();
    Test<float> t2(3.3, 2.5);
    t2.show();

}