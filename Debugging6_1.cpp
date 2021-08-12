#include<iostream>

class cube
{
    private:
        int length;
        int breadth;
        int width;
    
    public:
        cube(): length(5), breadth(5), width(5) { }
        cube(int l, int b): length(l), breadth(b) { }
        int area_of_cube() { return length * breadth * width;}
        void Display(int temp)
        {
            std::cout << temp << std::endl;
        } 
};

int main()
{
    cube B1, A2(4, 4);
    int temp;

    std:: cout << "Default Area " << std::endl;
    temp = B1.area_of_cube();
    B1.Display(temp);

    std::cout << "Area with parameterized constructor: " << std::endl;
    temp = A2.area_of_cube();
    A2.Display(temp);
}