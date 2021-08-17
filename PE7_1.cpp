#include<bits/stdc++.h>

class FLOAT
{
    private:
        float data;

    public:

    FLOAT()
    {
        this->data = 0.0f;
    }

    FLOAT(float data)
    {
        this->data = data;
    }

    FLOAT operator+(FLOAT f)
    {
        FLOAT result;

        result.data = this->data + f.data;

        return result;
    }

    FLOAT operator-(FLOAT f)
    {
        FLOAT result;

        result.data = this->data - f.data;

        return result;
    }

    FLOAT operator*(FLOAT f)
    {
        FLOAT result;

        result.data = this->data * f.data;

        return result;
    }

    FLOAT operator/(FLOAT f)
    {
        FLOAT result;

        result.data = this->data / f.data;

        return result;
    }


    void operator=(const FLOAT & f)
    {
        this->data = f.data;
    }

    void show()
    {
        std::cout<<"Value: "<<data<<std::endl;
    }


};

int main()
{
    FLOAT f1(10.2), f2(5.0);

    FLOAT f3;

    f3 = f1 + f2;

    f3.show();

    f3 = f1 - f2;

    f3.show();

    f3 = f1 * f2;

    f3.show();

    f3 = f1 / f2;

    f3.show();

    f3 = f2;

    f3.show();
}
