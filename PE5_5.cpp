#include<iostream>
#include<math.h>

class DM;
class DB;

class DM
{
    private:
        int metres, centimetres;

    public:

    int getMetres()
    {
        return metres;
    }

    int getCentimetres()
    {
        return centimetres;
    }

    void setMetres(int metres)
    {
        this->metres = metres;
    }

    void setCentimetres(int centimetres)
    {
        this->centimetres = centimetres;
    }

    friend void add(DB & db, DM dm);
    

};

class DB
{
    private:
        int feet, inches;

    public:

    int getFeet()
    {
        return feet;
    }

    int getInches()
    {
        return inches;
    }

    void setFeet(int feet)
    {
        this->feet = feet;
    }

    void setInches(int inches)
    {
        this->inches = inches;
    }

    friend void add(DB & db, DM dm);


};

void add(DB & db, DM dm)
{
    float total_feet = db.getFeet() + (db.getInches()/12.00) + (dm.getMetres() * 3.28) + (dm.getCentimetres() * 3.28 / 100.00);

    db.setFeet(floor(total_feet));

    std::cout<<(total_feet)<<std::endl;

    int inches = (total_feet - floor(total_feet)) * 12;

    std::cout<<inches<<std::endl;
    //db.setInches((total_feet - floor(total_feet)) * 12);

}

int main()
{
    int metres, centimetres, feet, inches;

    std::cout<<"Enter distance in metres and centimetres: ";
    std::cin>>metres>>centimetres;

    std::cout<<"Enter distance in feet and inches: ";
    std::cin>>feet>>inches;

    DB db;
    DM dm;

    db.setFeet(feet);
    db.setInches(inches);
    dm.setMetres(metres);
    dm.setCentimetres(centimetres);
    
    add(db, dm);

    std::cout<<"The addition of distance in feet and inches is: "<<db.getFeet()<<" ft. and "<<db.getInches()<<" in. "<<std::endl;
    std::cout<<"The addition of distance in metres and centimetres is: "<<db.getFeet()/3.28<<" mtrs. and "<<db.getInches() * 2.54<<" cms. ";
}

