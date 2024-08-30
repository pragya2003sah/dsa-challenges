//array reverse using recursion
#include<bits/stdc++.h>
using namespace std;


void reverse(int i,int arr[],int n){//arrays are passed using reference so we dont need and
    if(i>=n/2)
      return;
    swap(arr[i],arr[n-i-1]);
    reverse(i+1,arr,n);
}

int main(){
    cout<<"enter size"<<"\n";
    int n=0;
    cin>>n;
    cout<<"enter array elements"<<"\n";
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"entered array"<<"\n";
    for(int i=0;i<n;i++)
       cout<<arr[i]<<" ";
    reverse(0,arr,n);
     cout<<"reversed array"<<"\n";
    for(int i=0;i<n;i++)
       cout<<arr[i]<<" ";
}