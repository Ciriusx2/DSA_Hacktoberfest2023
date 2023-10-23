#include<bits/stdc++.h>
using namespace std;
void sortone(int arr[],int n){
    int i=0,j=n-1;
    while(i<j){
        while(arr[i]==0 && i<j){
            i++;
        }
        while(arr[j]==1 && i<j){
            j--;
        }
        if(i<j){
            swap(arr[i],arr[j]);
            i++;
            j--;
        }
    }
}
void printarr(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
int main()
{
int arr[]={0,1,1,1,0,1,0,1};
int n=sizeof(arr)/sizeof(int);
printarr(arr,n);
sortone(arr,n);
cout<<endl;
printarr(arr,n);
    return 0;
}