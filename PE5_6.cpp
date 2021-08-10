#include<iostream>

class matrix
{
    private:
        int m[3][3];
    
    public:
        void read_matrix(void)
        {
            std::cout<<"Enter the elements of matrix: \n";
            for(int i = 0; i < 3; i++)
            {
                for(int j = 0; j < 3; j++)
                {
                    std::cout<<"m["<<i<<"]["<<j<<"] = ";
                    std::cin>>m[i][j];
                }
            }
        }

        void display_matrix(void)
        {   
            std::cout<<"Matrix: \n";
            for(int i = 0; i < 3; i++)
            {
                for(int j = 0; j < 3; j++)
                {
                    std::cout<<m[i][j]<<"\t";
                }

                std::cout<<std::endl;

            }
        }

        friend matrix matrix_transpose(matrix);

        friend void matrix_multiplication(matrix, matrix);
};

matrix matrix_transpose(matrix m)
{
    matrix m_t;

    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            m_t.m[i][j] = m.m[j][i];
        }
    }

    return m_t;
}

void matrix_multiplication(matrix m1, matrix m2)
{
    matrix mat;

    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 3; j++)
        { 
            mat.m[i][j] = (m1.m[i][j] * m2.m[0][j]) + (m1.m[i][j + 1] * m2.m[1][j]) + (m1.m[i][j + 2] * m2.m[2][j]);            
        }
    }

    mat.display_matrix();

   // return m;
}

int main()
{
    matrix mat;

    mat.read_matrix();
    mat.display_matrix();
    mat = matrix_transpose(mat);
    mat.display_matrix();

    matrix m1, m2;

    m1.read_matrix();
    m1.display_matrix();
    m2.read_matrix();
    m2.display_matrix();
    matrix_multiplication(m1, m2);
    //mat.display_matrix();
    


}
