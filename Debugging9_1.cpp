#include<bits/stdc++.h>

class GST
{
    private:
        float price;
        float percent;
    
    public:
        void input(float a, float b)
        {
            price = a;
            percent = b;
        }

        void print()
        {
            std::cout<<"Price: "<<price<<std::endl;
            std::cout<<"Percent: "<<percent<<std::endl;
        }
};

int main()
{
    GST *p[3]; 
    

    GST **q = p;

    int i;

    float s, t, f;

    for(i = 0; i < 3; i++)
    {
        std::cout<<"Provide the price and percent: ";
        std::cin>>s>>t;

        p[i] = new GST;

        p[i]->input(s, t);
        std::cout<<"You have entered: ";
        q[i]->print();
        f = s + s * t /100;
        std::cout<<"Price after gst: "<<f<<std::endl;
    }
}