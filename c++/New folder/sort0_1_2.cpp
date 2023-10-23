#include<bits/stdc++.h>
using namespace std;
void sort(int arr[],int n){
    int lo=0,hi=n-1,mid=0;
    while(mid<=hi){
        switch (arr[mid])
        {
        case 0:
            swap(arr[lo++],arr[mid++]);
            break;
        case 1:
            mid++;
            break;
        case 2:
            swap(arr[mid],arr[hi--]);
            break;
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
int arr[]={0,1,2,2,0,1,0,1};
int n=sizeof(arr)/sizeof(int);
printarr(arr,n);
sort(arr,n);
cout<<endl;
printarr(arr,n);
    return 0;
}