#include<bits/stdc++.h>

class staff
{
    private:
        int code;
        std::string name;
    
    public:

        staff(){}

        staff(int code, std::string name)
        {
            this->code = code;
            this->name = name;
        }

        void display()
        {
            std::cout<<"Code: "<<code<<std::endl;
            std::cout<<"Name: "<<name<<std::endl;
        }

};

class teacher: public staff
{
    private:
        std::string subject;
        std::string publication;

    public:

        teacher(): staff() {}

        teacher(int code, std::string name, std::string subject, std::string publication) : staff(code, name)
        {
            this->subject = subject;
            this->publication = publication;
        }

        void display()
        {
            staff::display();
            std::cout<<"Subject: "<<subject<<std::endl;
            std::cout<<"Publication: "<<publication<<std::endl;
        }

};

class officer: public staff
{
    private:
        char grade;

    public:

    officer() : staff() {}

    officer(int code, std::string name, char grade) : staff(code, name)
    {
        this->grade = grade;
    }

    void display()
    {
        staff::display();
        std::cout<<"Grade: "<<grade<<std::endl;
    }
        
};

class typist: public staff
{
    private:
        int speed;

    public:

        typist() : staff() {}

        typist(int code, std::string name, int speed) : staff(code, name)
        {
            this->speed = speed;
        }

        void display()
        {
            staff::display();
            std::cout<<"Speed: "<<speed<<std::endl;
        }
};

class regular: public typist
{
    public:
        regular() : typist() {}

        regular(int code, std::string name, int speed) : typist(code, name, speed){}
};

class casual: public typist
{
    private:
        double daily_wages;

    public:

        casual() : typist() {}

        casual(int code, std::string name, int speed, double daily_wages) : typist(code, name, speed)
        {
            this->daily_wages = daily_wages;
        }

        void display()
        {
            typist::display();
            std::cout<<"Daily Wages: "<<daily_wages<<std::endl;
        }

};

int main()
{
    staff s(1, "Abhishek");
    s.display();

    teacher t(2, "Leena", "Science", "Oxford");
    t.display();

    typist tp(3, "William", 192);
    tp.display();

    officer o(4, "Hopper", 'A');
    o.display();

    regular r(5, "Regular", 100);
    r.display();

    casual c(6, "Casual", 60, 4999.99);
    c.display();

}