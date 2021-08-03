#include<iostream>

int main()
{
    void* vp;
    char* cp = vp; //Cannot convert void* to char*;
    char* cp = (char*)vp; //Needs type casting for above statement to work

    int* p = new; 

    int const* p = total;

    const int x; //Doesn't compile because const values need to be initialized when declared

    int &num = 100; //initial value of reference to non-const must be an lvalueC/C++(461)????

    float *p = new int[10]; //invalid type conversion

    char name[3] = "USA"; //a value of type "const char [4]" cannot be used to initialize an entity of type "char [3]"

    char y[3] = "NO";

    char x[3] = {'x', 'y', 'z'};

}