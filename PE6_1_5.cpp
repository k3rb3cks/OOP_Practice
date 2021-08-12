#include<iostream>
#include<math.h>

class DM;
class DB;

class DM
{
    private:
        int metres, centimetres;

    public:

    DM()
    {
        this->metres = 0;
        this->centimetres = 0;
    }

    DM(int metres, int centimetres)
    {
        this->metres = metres;
        this->centimetres = centimetres;
    }

    friend void add(DB & db, DM dm);

    friend void display(DB & db);
    

};

class DB
{
    private:
        int feet, inches;

    public:

    DB()
    {
        this->feet = 0;
        this->inches = 0;
    }

    DB(int feet, int inches)
    {
        this->feet = feet;
        this->inches = inches;
    }

    friend void add(DB & db, DM dm);

    friend void display(DB & db);


};

void display(DB & db)
{
    std::cout<<"The addition of distance in feet and inches is: "<<db.feet<<" ft. and "<<db.inches<<" in. "<<std::endl;
    std::cout<<"The addition of distance in metres and centimetres is: "<<db.feet/3.28<<" mtrs. and "<<db.inches * 2.54<<" cms. ";
}

void add(DB & db, DM dm)
{
    float total_feet = db.feet + (db.inches/12.00) + (dm.metres * 3.28) + (dm.centimetres * 3.28 / 100.00);

    db.feet = floor(total_feet);

    std::cout<<(total_feet)<<std::endl;

    int inches = (total_feet - floor(total_feet)) * 12;

    //std::cout<<inches<<std::endl;
    //db.setInches((total_feet - floor(total_feet)) * 12);

}

int main()
{
    int metres, centimetres, feet, inches;

    std::cout<<"Enter distance in metres and centimetres: ";
    std::cin>>metres>>centimetres;

    std::cout<<"Enter distance in feet and inches: ";
    std::cin>>feet>>inches;

    DB db(feet, inches);
    DM dm(metres, centimetres);

    
    add(db, dm);

    display(db);
}

