#include<iostream>

class vector_
{
    private:
        int n;
        float* arr;
        

    public:

        void setN(int n)
        {
            this->n = n;
        }

        void create_vector()
        {
            float *arr = new float[n];
        }

        void input_vector()
        {
            
                
        }

        void modify_vector(int dimen, float new_value)
        {
            if(dimen < n)
                {
                    arr[dimen] = new_value;
                    return; 
                }
                    
            else
                std::cout<<"Incorrect dimension!!!";
        }

        void multiply_scalar(float scalar)
        {
            for(int i = 0; i < n; i++)
            {
                arr[i] *= scalar;
            }
        }

        void display_vector()
        {
            std::cout<<"(";
            for(int i = 0; i < n; i++)
                std::cout<<arr[i]<<",";
            std::cout<<")"<<std::endl;
        }

        float* getVector()
        {
            return arr;
        }

};

int main()
{
    int n, dimen;
    float value;
    float scalar;

    vector_ v1;

    std::cout<<"Enter the number of dimensions of vector: ";
    std::cin>>n;

    v1.setN(n);

    v1.create_vector();

    //v1.input_vector();

    float* arr = v1.getVector();
    float input;
    for(int i = 0; i < n; i++)
    {
        std::cout<<"Enter the value to input: ";
        std::cin>>input;

        arr[i] = input;
    }

    std::cout<<"The vector is: ";
    v1.display_vector();

    std::cout<<"Enter the dimension at which value is to be changed: ";
    std::cin>>dimen;
    std::cout<<"Enter the modified value: ";
    std::cin>>value;
    v1.modify_vector(dimen, value);

    std::cout<<"The vector after modification is: ";
    v1.display_vector();


    std::cout<<"Enter the scalar value to be multiplied: ";
    std::cin>>scalar;
    v1.multiply_scalar(scalar);

    std::cout<<"The vector after scalar multiplication is: ";
    v1.display_vector();

}