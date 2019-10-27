#include <bits/stdc++.h>
using namespace std;
int binarySearch(int x, int A[], int n){
    int lower = 0;
    int upper = n;
    while(lower <= upper)
    {
        int mid = lower + (upper - lower)/2;
        if(A[mid] == x)  return mid;
        else if (A[mid] < x)  lower = mid + 1;
        else upper = mid - 1;
    } 
    return -1;
}
int main(){
    int x;
    int A[] = {1, 8, 10, 22, 211, 222};
    int n = sizeof(A)/sizeof(A[0]);
    cout<<"Enter element to search: ";
    cin>>x;
    int index = binarySearch(x, A, n);
    cout<<"Element is at index: "<<index<<endl;

    return 0;
}