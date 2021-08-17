#include<bits/stdc++.h>

class MAT
{
    private:
        int m, n;

        int** p;

    public:
        MAT()
        {
            this->m = 3;
            this->n = 3;

            p = new int* [m];

            for(int i = 0; i < m; i++)
            {
                p[i] = new int[n];
            }
        }

        MAT(int m, int n)
        {
            this->m = m;
            this->n = n;

            p = new int*[m];

            for(int i = 0; i < m; i++)
            {
                p[i] = new int[n];
            }
        }

        void input()
        {
            for(int i = 0; i < m; i++)
            {
                for(int j = 0; j < n; j++)
                {
                    std::cin>>p[i][j];
                }
            }
        }

        MAT operator+(MAT m2)
        {
            MAT m3(this->m, this->n);

            for(int i = 0; i < m; i++)
            {
                for(int j = 0; j < n; j++)
                {
                    m3.p[i][j] = this->p[i][j] + m2.p[i][j];
                }
            }

            return m3;
        }

        void display()
        {
            for(int i = 0; i < m; i++)
            {
                for(int j = 0; j < n; j++)
                {
                    std::cout<<p[i][j]<<"\t";
                }

                std::cout<<std::endl;
            }
        }


};


int main()
{

    int m, n;

    std::cout<<"Enter the value of m and n: ";
    std::cin>>m>>n;

    MAT m1(m, n), m2;

    std::cout<<"Enter the elements of the matrix: "<<std::endl;
    m1.input();
    m1.display();
    std::cout<<std::endl;

    std::cout<<"Enter the elements of the matrix: "<<std::endl;
    m2.input();
    m2.display();
    std::cout<<std::endl;

    std::cout<<"The addition matrix of the two above matrices is: "<<std::endl;
    MAT m3 = m1 + m2;
    m3.display();

}