#include<bits/stdc++.h>

template<class T, int size>
int linear_search(T arr[], T key)
{
    for(int i = 0; i < size; i++)
    {
        if(arr[i] == key)
            return i;
    }

    return -1;
}


int main()
{
    int arr[5] = {1, 2, 3, 4, 5};

    float ax[5] = {2.3, 2.1, 4.5, 0.1, 9.3};

    char ab[5] = {'e', 'h', 'x', 'p', 'q'};

    std::cout<<linear_search<int, 5>(arr, 3)<<std::endl;
    std::cout<<linear_search<float, 5>(ax, 0.1)<<std::endl;
    std::cout<<linear_search<char, 5>(ab, 'a')<<std::endl;

}