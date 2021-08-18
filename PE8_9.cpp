#include<bits/stdc++.h>

class vehicle
{
    private:
        int number_of_wheels;
        std::string transmission;
        std::string fuel_type;

    public:

        vehicle() {}

        vehicle(int number_of_wheels, std::string transmission, std::string fuel_type)
        {
            this->number_of_wheels = number_of_wheels;
            this->transmission = transmission;
            this->fuel_type = fuel_type;
        }

        void display()
        {
            std::cout<<"Wheels: "<<number_of_wheels<<std::endl;
            std::cout<<"Transmission: "<<transmission<<std::endl;
            std::cout<<"Fuel Type: "<<fuel_type<<std::endl;
        }
};

class car : public vehicle
{
    private:
        std::string company;
        std::string model;

    public:
        car() : vehicle() {}
        car(std::string company, std::string model, int number_of_wheels, std::string transmission, std::string fuel_type) : vehicle(number_of_wheels, transmission, fuel_type)
        {
            this->company = company;
            this->model = model;
        }

        void display()
        {
            vehicle::display();
            std::cout<<"Company: "<<company<<std::endl;
            std::cout<<"Model: "<<model<<std::endl;
        }
};
