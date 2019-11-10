#include<bits/stdc++.h>
using namespace std;
void swap(int A[], int i, int j)
{
    int temp = A[i];
    A[i] = A[j];
    A[j] = temp;
}
void bubbleSort(int A[], int n)
{
    int i, j;
    bool swapped;
    for(i=0; i<n; i++)
    {
        swapped = false;
        for(j=0; j<n-1-i; j++)
        {
            if(A[j]>A[j+1])
            {
                swap(A, j, j+1);
                swapped = true;
            }
        }
        if(swapped==false)
            break;
    }
}
// Driver Code
int main()
{
    int A[] = {-2, 45, 0, 11, -9};
    int size = sizeof(A) / sizeof(A[0]);
    cout<<"Array before Sorting: ";
    for(int i = 0; i<size; i++)
    {
        cout<<A[i]<<" ";
    }
    cout<<endl;
    bubbleSort(A, size);
    cout<<"Array after Sorting: ";
    for(int i = 0; i<size; i++)
    {
        cout<<A[i]<<" ";
    }
    return 0;
}