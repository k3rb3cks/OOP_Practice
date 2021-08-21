#include<bits/stdc++.h>

//Doubt!!!


template<class T>
class vector
{
    private:
        T *vec;
        int size;

    public:
        vector(int size)
        {
            this->size = size;

            vec = new T[this->size];
        }

        vector(T *arr)
        {
            for(int i = 0; i < size;i++)
            {
                vec[i] = arr[i];
            }

        }

        vector<T> operator*(T t)
        {
            for(int i = 0; i < size; i++)
            {
                vec[i] *= t;
            } 

            return *this;
        }

        T operator[](int x)
        {
            return vec[x];
        }

        void display()
        {   
            std::cout<<"(";
            for(int i = 0; i < size; i++)
            {
                std::cout<<vec[i]<<",";
            }
            std::cout<<")"<<std::endl;
        }
};

int main()
{
    vector<int> v(5);

    int arr[5] = {1, 2, 3, 4, 5};

    v = arr;

    v.display();
}