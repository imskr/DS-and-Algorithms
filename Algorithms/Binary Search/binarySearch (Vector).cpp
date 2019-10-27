#include <bits/stdc++.h>
using namespace std;
int binarySearch(int x, vector<int>& A){
    int lower = 0;
    int upper = A.size()-1;
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
    int x, input;
    vector<int> A; 
    cout<<"Enter 5 elements in Ascending order: ";
    for (unsigned int i = 0; i < 5; i++) 
	{
        cin >> input;
		A.push_back(input);
	}
    cout<<"Vector A: ";
    for(unsigned int i = 0; i < A.size(); i++){
        cout<<A[i]<<" ";
    }
    cout<<endl;
    cout<<"Enter element to search: ";
    cin>>x;
    int index = binarySearch(x, A);
    cout<<"Element is at index: "<<index<<endl;

    return 0;
}