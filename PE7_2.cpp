#include<bits/stdc++.h>

class Polar
{
    private:
        double radius, angle;
    
    public:

        Polar()
        {
            radius = 0;
            angle = 0;
        }

        Polar(double radius, double angle)
        {
            this->radius = radius;
            this->angle = angle;
        }

        Polar operator + (Polar p)
        {
            Polar result;

            double x1 = this->radius * cos(this->angle);
            double y1 = this->radius * sin(this->angle);

            double x2 = p.radius * cos(p.angle);
            double y2 = p.radius * sin(p.angle);

            double x = x1 + x2;
            double y = y1 + y2;

            result.radius = sqrt((x * x) + (y * y));

            result.angle = atan(y/x);

            return result;
        }

        void show()
        {
            std::cout<<"Radius: "<<this->radius<<std::endl;
            std::cout<<"Angle: "<<this->angle<<std::endl;
        }


};

int main()
{
    Polar p1(4, 0), p2(3, (11.0/7.0));

    p1.show();
    p2.show();

    Polar p3;

    p3 = p1 + p2;

    p3.show();
}