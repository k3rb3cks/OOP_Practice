#include<iostream>

class age
{
    private:
        int child_age;
    public:
        age(): child_age(20){}
        int father_age(age);
        friend int father_age_f(age);
};

int father_age(age d) //Cannot access private members of class since not a friends/member function
{
    d.child_age += 15;
    return d.child_age;
}

int age::father_age(age d) //member function
{

    d.child_age += 15;
    return d.child_age;
}

int father_age_f(age d) //friend function
{
    d.child_age += 15;
    return d.child_age;
}




int main()
{
    age D;
    std::cout<<"Father's age: "<<father_age(D);
}