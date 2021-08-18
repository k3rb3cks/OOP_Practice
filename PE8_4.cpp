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

class education
{
    private:
        std::string qual_ge, qual_prof;

    public:
        education() {}
        education(std::string qual_ge, std::string qual_prof)
        {
            this->qual_ge = qual_ge;
            this->qual_prof = qual_prof;
        }

        void display()
        {
            std::cout<<"Highest Qualification in General Education: "<<qual_ge<<std::endl;
            std::cout<<"Highest Professional Qualification: "<<qual_prof<<std::endl;
        }
};

class teacher: public staff, public education
{
    private:
        std::string subject;
        std::string publication;

    public:

        teacher(): staff() {}

        teacher(int code, std::string name, std::string subject, std::string publication, std::string qual_ge, std::string qual_prof) : staff(code, name) , education(qual_ge, qual_prof)
        {
            this->subject = subject;
            this->publication = publication;
        }

        void display()
        {
            staff::display();
            education::display();

            std::cout<<"Subject: "<<subject<<std::endl;
            std::cout<<"Publication: "<<publication<<std::endl;
        }

};

class officer: public staff, public education
{
    private:
        char grade;

    public:

    officer() : staff() {}

    officer(int code, std::string name, char grade, std::string qual_ge, std::string qual_prof) : staff(code, name) , education(qual_ge, qual_prof)
    {
        this->grade = grade;
    }

    void display()
    {
        staff::display();
        education::display();
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

    teacher t(2, "Leena", "Science", "Oxford", "B.Ed", "Supervisor");
    t.display();

    typist tp(3, "William", 192);
    tp.display();

    officer o(4, "Hopper", 'A', "D. Ed", "Senior Teacher");
    o.display();

    regular r(5, "Regular", 100);
    r.display();

    casual c(6, "Casual", 60, 4999.99);
    c.display();

}