#include<iostream>

int row = 0;
int col = -1;

int** create_matrix(int m, int n)
{
    int **mat = new int* [m];

    for(int i = 0; i < m; i++)
    {
        mat[i] = new int[n];
    }
    return mat;
}

void push_matrix(int ** mat, int input, int m, int n)
{
    

    if(col == n - 1)
    {
        col = -1;
        row++;
    }

    if(row < m)
        mat[row][++col] = input;
    else
        std::cout<<"Matrix Full";

}

void print_matrix(int ** mat, int m, int n)
{
    for(int i = 0; i < m; i++)
    {
        for(int j = 0; j < n; j++)
        {
            std::cout<<mat[i][j]<<"\t";
        }
        std::cout<<std::endl;
    }
}

int** create_matrix(int m = 3, int n)
{
    int** mat = new int* [m];
    
    for(int i = 0; i < n; i++)
        mat[i] = new int[n];

    return mat;
}



int main()
{
    int m, n, input;

    std::cout<<"Enter the value of m, n: ";
    std::cin>>m>>n;

    int **mat = create_matrix(m, n);
    int **mat2 = create_matrix(n);

    for(int i = 0; i < m*n; i++)
    {
        std::cout<<"Enter input value: ";
        std::cin>>input;

        push_matrix(mat, input, m, n);
    }

    print_matrix(mat, m, n);


    

    


}