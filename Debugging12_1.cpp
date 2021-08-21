#include<bits/stdc++.h>

class Test
{
    int intNumber;
    float floatNumber;

    public:
        Test()
        {
            intNumber = 0;
            floatNumber = 0.0;
        }

        int getNumber()
        {
            return intNumber;
        }

        float getNumber() //Cannot overload based on different return types only!
        {
            return floatNumber;
        }

        float getNumber(int)
        {
            return floatNumber;
        }
};


int main()
{
    Test obj;
    obj.getNumber();
}