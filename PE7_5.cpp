#include<bits/stdc++.h>

class Rectangle;

class Polar
{
    private:
        float radius, angle;
    
    public:
        Polar()
        {
            radius = 0;
            angle = 0;
        }

        Polar(float radius, float angle)
        {
            this->radius = radius;
            this->angle = angle;
        }

        float getRadius()
        {
            return radius;
        }

        float getAngle()
        {
            return angle;
        }

        void setRadius(float radius)
        {
            this->radius = radius;
        }

        void setAngle(float angle)
        {
            this->angle = angle;
        }

        operator Rectangle()
        {
            Rectangle r;

            r.setX(this->radius * cos(this->angle));
            r.setY(this->radius * sin(this->angle)); 

            return r;
        }

        void display()
        {
            std::cout<<"Radius: "<<radius<<"\t Angle: "<<angle<<std::endl;
        }




};

class Rectangle
{
    private:
        float x, y;

    public:
        Rectangle()
        {
            x = 0;
            y = 0;
        }

        Rectangle(float x, float y)
        {
            this->x = x;
            this->y = y;
        }

        Rectangle(Polar p)
        {
            p.setRadius(sqrt((x * x) + (y * y)));
            p.setAngle(atan(y/x));
        }

        float getX()
        {
            return x;
        }

        float getY()
        {
            return y;
        }

        void setX(float x)
        {
            this->x = x;
        }

        void setY(float y)
        {
            this->y = y;
        }

        void display()
        {
            std::cout<<"x: "<<x<<"\t y: "<<y<<std::endl;
        }

};

int main()
{
    Rectangle r1(3, 4), r2;
    r1.display();
    Polar p1(10, 0), p2;
    p1.display();

    r2 = (Rectangle)p1;

    r2.display();

    Rectangle r3 = Rectangle(p1);

    r3.display();




}