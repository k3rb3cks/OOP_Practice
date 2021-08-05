#include<iostream>

int sub(int a = 20, int b)
{
    int result;
    result = a - b;
    return result;
}

int main()
{
    int a = 100;
    int b = 200;
    int result;
    result = sub(b);

    result = sub(a);
    
}