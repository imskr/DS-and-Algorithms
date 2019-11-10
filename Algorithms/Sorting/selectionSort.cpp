#include<bits/stdc++.h>
using namespace std;
void swap(int A[], int i, int j)
{
    int temp = A[i];
    A[i] = A[j];
    A[j] = temp;    
}
void selectionSort(int A[], int lower, int upper)
{
    int i;
    for(i=lower; i<upper; i++)
    {
        int min = i; int j;
        for(j=i+1; j<upper; j++)
        {
            if(A[j]<A[min]) min = j;
        }
        swap(A, i, min);    
    }
}
// Driver Code
int main()
{
    int A[] = {12, 5, 4, 11, 3, 1};
    int size = sizeof(A)/sizeof(A[0]);
    cout<<"Array before Sorting: ";
    for(int i = 0; i<size; i++)
    {
        cout<<A[i]<<" ";
    }
    cout<<endl;
    selectionSort(A, 0, size);
    cout<<"Array after Sorting: ";
    for(int i = 0; i<size; i++)
    {
        cout<<A[i]<<" ";
    }
    return 0;
}