#include<bits/stdc++.h>

template <class T1, class T2>
class Person
{
    T1 t1;
    T2 t2;

    public:
        Person(T1 t1, T2 t2)
        {
            this->t1 = t1;
            this->t2 = t2;
            std::cout<<this->t1<<"\t"<<this->t2<<std::endl;
        }

        Person(T2 t2, T1 t1, int x)
        {
            this->t1 = t1;
            this->t2 = t2;
            std::cout<<"XXX "<<this->t1<<"\t"<<this->t2<<std::endl;
        }

        //Change in order is not considered to be an overloaded one!!!
};


int main()
{
    Person<int, float> objPerson1(1, 2.45);
    Person<float, int> objPerson2(2.8, 2, 5);
}