#include<bits/stdc++.h>

class person
{
    private:
        std::string name;
        int code;

    public:
        person() {}
        person(int code, std::string name)
        {
            this->name = name;
            this->code = code;
        }

        void setName(std::string name)
        {
            this->name = name;
        }

        void setCode(int code)
        {
            this->code = code;
        }

        std::string getName()
        {
            return name;
        }

        int getCode()
        {
            return code;
        }

        void display()
        {
            std::cout<<"Code: "<<code<<std::endl;
            std::cout<<"Name: "<<name<<std::endl;
        }
};

class account : virtual public person
{
    private:
        double pay;
    
    public:
        account() : person() {}
        account(int code, std::string name, double pay) : person(code, name)
        {
            this->pay = pay;
        }

        void setPay(double pay)
        {
            this->pay = pay;
        }

        double getPay()
        {
            return pay;
        }

        void display()
        {
            person::display();
            std::cout<<"Pay: "<<pay<<std::endl;
        }
};


class admin: virtual public person
{
    private:
        int experience;
    
    public:
        admin() : person() {}

        admin(int code, std::string name, int experience) : person(code, name)
        {
            this->experience = experience;
        }

        void setExperience(int experience)
        {
            this->experience = experience;
        }

        int getExperience()
        {
            return experience;
        }

        void display()
        {
            person::display();
            std::cout<<"Experience: "<<experience<<" yrs. "<<std::endl;

        }
};

class master : public account, public admin
{
    public:
        master() : account(), admin() {}

        master(int code, std::string name, double pay, int experience) : account(code, name, pay), admin(code, name, experience)
        {
            setName(name);
            setCode(code);
            setPay(pay);
            setExperience(experience);
        }

        void display()
        {
            person::display();
            std::cout<<"Pay: "<<getPay()<<std::endl;
            std::cout<<"Experience: "<<getExperience()<<std::endl;
        }
};

int main()
{
    person p(1, "Abhishek");
    p.display();

    account a(2, "Rohan", 50000);
    a.display();

    admin ad(3, "Ashwin", 5);
    ad.display();

    master m(4, "Mrunali", 300, 10);
    m.display();


}