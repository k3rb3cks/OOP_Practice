#include<bits/stdc++.h>

class faculty
{
    private:
        int fid;
        char name[20];
        
        void getdata()
        {
            std::cout<<"Enter faculty id: ";
            std::cin>>fid;
            std::cout<<"Enter name: ";
            std::cin>>name;
        }
};

class details: faculty
{
    public:
        int age, exp;

        void getdetails()
        {
            getdata();//Private members cannot be inherited
            std::cout<<"Enter age: ";
            std::cin>>age;
            std::cout<<"Enter years of experience: ";
            std::cin>>exp;
        }

        void display()
        {
            std::cout<<"\n\n"<<"Faculty ID: "<<fid<<std::endl;//Private members cannot be inherited
            std::cout<<"Name of Faculty: "<<name<<std::endl;//Private members cannot be inherited
            std::cout<<"Faculty age: "<<age<<std::endl;
            std::cout<<"Faculty year of experience: "<<exp<<std::endl;

        }
};

int main()
{
    details m;
    m.getdetails();
    m.display();
}

