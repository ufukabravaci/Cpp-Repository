#include <iostream>

using namespace std;

int* apply_all (int *arr1, size_t size1, int *arr2, size_t size2)
{
    int *newarray {} ;
    newarray = new int[size1 * size2];
    int counter{} ;
    for (size_t i{0} ; i< size2 ; i++)
    {
        for (size_t j{0}; j<size1 ; j++)
        {
            *(newarray+counter) = (*(arr1 + j)) * (*(arr2 + i)) ;
            counter ++ ;
        }
    }
    return newarray ;
}

void printarr (const int* const arr , size_t sizearr)
{
    cout << "[ ";
    for (size_t i{0}; i<sizearr ; i++)
        {
            cout << *(arr+i) << " " ;
        }
    cout << "]\n";
}



int main()
{
    int arr1[] {1, 2, 3, 4, 5};
    int arr2[] {10, 20, 30};

    int *newarr = apply_all(arr1, 5, arr2, 3);
    printarr(arr1, 5);
    printarr(arr2, 3);
    printarr(newarr , 15);
    delete [] newarr ;

    return 0;
}
