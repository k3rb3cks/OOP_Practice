#include<bits/stdc++.h>

class shape
{
    private:
        double x;
        double y;

    public:
        void set_data(double x, double y)
        {
            this->x = x;
            this->y = y;
        }

        double get_x()
        {
            return x;
        }

        double get_y()
        {
            return y;
        }

        void virtual display_area()
        {
            std::cout<<"Default Area!"<<std::endl;
        }
};

class triangle : public shape
{
    public:

        void display_area()
        {
            std::cout<<"Area of triangle = "<<(0.5 * get_x() * get_y())<<std::endl;
        }
};

class rectangle : public shape
{
    public: 

        void display_area()
        {
            std::cout<<"Area of rectangle = "<< (get_x() * get_y())<<std::endl;
        }
};

int main()
{
    double x, y;

    int choice;

    shape *s;
    rectangle r;
    triangle t;

    std::cout<<"Enter your choice: \n1. Compute area of rectangle \n2. Compute area of triangle \n";
    std::cin>>choice;

    switch (choice)
    {
    case 1:
        std::cout<<"Enter the length of rectangle: ";
        std::cin>>x;

        std::cout<<"Enter the breadth of rectangle: ";
        std::cin>>y;

        r.set_data(x, y);

        s = &r;

        s->display_area();

        break;

    case 2:
        std::cout<<"Enter the height of triangle: ";
        std::cin>>x;
        
        std::cout<<"Enter the base of triangle: ";
        std::cin>>y;

        t.set_data(x, y);

        s = &t;

        s->display_area();

        break;
    
    default:
        std::cout<<"Invalid Choice!!!"<<std::endl;
        break;
    }
}
