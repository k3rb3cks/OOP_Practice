#include<bits/stdc++.h>

class car
{
    private:
        std::string company, model, fuel_type, transmission;
        int year;
    
    public:
        car()
        {
            company = "TATA MOTORS";
            model = "NANO";
            fuel_type = "PETROL";
            transmission = "MANUAL";
            year = 2008;
        }

        car(std::string company, std::string model, std::string fuel_type, std::string transmission, int year)
        {
            this->company = company;
            this->model = model;
            this->fuel_type = fuel_type;
            this->transmission = transmission;
            this->year = year;
        }

        car(const car & c)
        {
            this->company = c.company;
            this->fuel_type = c.fuel_type;
            this->model = c.model;
            this->transmission = c.transmission;
            this->year = c.year;
        }

        void display()
        {
            std::cout<<"Company Name: "<<company<<std::endl;
            std::cout<<"Model: "<<model<<std::endl;
            std::cout<<"Fuel Type: "<<fuel_type<<std::endl;
            std::cout<<"Transmission: "<<transmission<<std::endl;
            std::cout<<"Year of Manufacture: "<<year<<std::endl;
        }
};

int main()
{
    std::string company, model, transmission, fuel_type;
    int year;

    std::cout<<"Enter the company of car: "<<std::endl;
    std::cin>>company;
    std::cout<<"Enter the model of car: "<<std::endl;
    std::cin>>model;
    std::cout<<"Enter the transmission of car: "<<std::endl;
    std::cin>>transmission;
    std::cout<<"Enter the fuel type of car: "<<std::endl;
    std::cin>>fuel_type;
    std::cout<<"Enter the year of manufacturing: "<<std::endl;
    std::cin>>year;

    car c1, c2(company, model, fuel_type, transmission, year);
    c1.display();
    c2.display();
    car c3(c2);

    c3.display();   
}

