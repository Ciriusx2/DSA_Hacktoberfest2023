#include<iostream>
using namespace std;
bool ispossible(int arr[],int n,int m,int mid){
    int stdcount=1;
    int pagesum=0;
    for(int i=0;i<n;i++){
        if(pagesum+arr[i]<=mid){
            pagesum+=arr[i];
        }
        else{
            stdcount++;
            if(stdcount>m || arr[i]>mid){
                return false;
            }
            pagesum=arr[i];
        }
    }
    return true;
}
int allocatebook(int arr[],int n,int m){
    int s=0;
    int sum=0;
    for (int i = 0; i < n; i++)
    {
        sum+=arr[i];
    }
    int e=sum; int ans=-1;
    while (s<=e)
    {
        int mid=s+(e-s)/2;
        if(ispossible(arr,n,m,mid)){
            ans=mid;
            e=mid-1;
        }
        else{
            s=mid+1;
        }
    }
    return ans;
    
}
int main(){
    int arr[]={10,20,30,40};
    cout<<allocatebook(arr,4,2);
    return 0;
    
}