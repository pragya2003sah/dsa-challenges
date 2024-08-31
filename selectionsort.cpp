#include<bits/stdc++.h>

using namespace std;

void selection_sort(int n,int arr[]){
    
    for(int i=0;i<n-1;i++){
        int min=i;
        for(int j=i;j<n;j++)
          {
            if(arr[j]<arr[min]){
              min=j;  
            }
          }
          swap(arr[i],arr[min]);

    }
}

int main(){
    cout<<"enter the no. of array elements"<<"\n";
    int n=0;
    cin>>n;
    cout<<"enter the array"<<"\n";
    int arr[n];
    for(int i=0;i<n;i++)
     cin>>arr[i];
    selection_sort(n,arr);
    for(int i=0;i<n;i++)
     cout<<arr[i]<<" ";
}