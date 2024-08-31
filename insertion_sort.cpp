#include<bits/stdc++.h>
using namespace std;

void insertion_sort(int arr[],int n){
    for(int i=0;i<n;i++){
        int j=i;
        while(j>0 && arr[j-1]>arr[j] ){
         swap(arr[j],arr[j-1]);
         j--;
        }
    }
}

int main(){
    cout<<"enter the no. of elements"<<"\n";
    int n=0;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
      cin>>arr[i];
    insertion_sort(arr,n);
    for(int i=0;i<n;i++)
      cout<<arr[i]<<" ";
}