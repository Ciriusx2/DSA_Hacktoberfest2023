#include<bits/stdc++.h>
using namespace std;
bool ispossible(int arr[],int n,int k,int mid){
    int cowcount=1;
    int lastpos=arr[0];
    for (int i = 0; i < n; i++)
    {
        if(arr[i]-lastpos>=mid){
            cowcount++;
            if(cowcount==k){
                return true;
            }
            lastpos=arr[i];
        }
    }
    return false;
}
int aggressivecows(int stalls[],int n,int k){
    sort(stalls,stalls+n);
    int s=0;
    int maxi=-1;
    for (int i = 0; i < n; i++)
    {
        maxi=max(maxi,stalls[i]);
    }
    int e=maxi;
    int ans=-1;
    while(s<=e){
        int mid=s+(e-s)/2;
        if(ispossible(stalls,n,k,mid)){
            ans=mid;
            s=mid+1;
        }
        else{
            e=mid-1;
        }
    }
    return ans;
}
int main()
{
    int arr[]={4,3,1,2,6};
    cout<<aggressivecows(arr,5,2);
    return 0;
}