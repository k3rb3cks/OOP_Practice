#include<iostream>

class Vector
{
    private:
        int dimens;
        float* vec;
        //float scalar;
    
    public:
        Vector(int dimens)
        {
            this->dimens = dimens;
            vec = new float[dimens];
        }

        void modify(int co_ordinate, float new_value)
        {
            vec[co_ordinate] = new_value;
        }

        void multiply_scalar(float scalar)
        {
            for(int i = 0; i < dimens; i++)
            {
                vec[i] *= scalar;
            }
        }

        void display()
        {
            std::cout<<"(";
            for(int i = 0; i < dimens; i++)
            {
                std::cout<<vec[i]<<",";
            }
            std::cout<<")"<<std::endl;
        }

        void input()
        {
            std::cout<<"Enter the elements of the vector: "<<std::endl;
            for(int i = 0; i < dimens; i++)
            {
                std::cin>>vec[i];
            }
        }


};


int main()
{
    int dimens, co_ordinate;
    float new_value;


    std::cout<<"Enter the dimensions of the vector: ";
    std::cin>>dimens;

    Vector v(dimens);

    v.input();
    v.display();

    std::cout<<"Enter the co-ordinate at which value is to be modified: ";
    std::cin>>co_ordinate;

    std::cout<<"Enter new value: ";
    std::cin>>new_value;

    v.modify(co_ordinate, new_value);
    v.display();

    std::cout<<"Enter the value of scalar: ";
    std::cin>>new_value;

    v.multiply_scalar(new_value);
    v.display();
}