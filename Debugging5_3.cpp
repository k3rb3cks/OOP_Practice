#include<iostream>

class weight
{
    int leter, ML;

    public:

    void getdata();
    void putdata();
    void sum_of_weight(weight, weight);
};

void weight:: getdata()
{
    std::cout<<"in leter: ";
    std::cin>>leter;
    std::cout<<"in ML: ";
    std::cin>>ML;
}

void weight:: putdata()
{
    std::cout<<leter<<" Leter and  "<<ML<<" ML.";
}

void weight:: sum_of_weight(weight w1, weight w2)
{
    ML = w1.ML + w2.ML;
    leter = ML/1000;
    ML = ML % 1000;

    leter = w1.leter + w2.leter;
}

int main()
{
    weight w1, w2, w3;
    std::cout<<"Enter weight in leter and ML: "<<std::endl;
    std::cout<<"Enter weight 1 ";
    w1.getdata();
    std::cout<<"Enter weight 2 ";
    w2.getdata();
    sum_of_weight(w1, w2); //Cant access member function without object
    std::cout<<"Total Weight = ";
    w3.putdata();
}

