#include<bits/stdc++.h>
using namespace std;

void bubble_sort(int arr[],int n){
    int swapcheck=0;
      for(int i=0;i<n;i++){
        for(int j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
             swap(arr[j],arr[j+1]);
            swapcheck++;
            }
        }
        if(swapcheck==0)//optimisation for best case
         break;

      }

}

//using recursion
void bubblesort(int arr[],int n){
   int swapcheck=0;
   if(n==1)
   return;
   for(int j=0;j<n-1;j++){
    if(arr[j]>=arr[j+1])
      {
        swap(arr[j],arr[j+1]);
        swapcheck=1;
      }
   }
   if(swapcheck==0)
     return;
    bubblesort(arr,n-1);
}

int main(){
    cout<<"enter the no. of elements"<<"\n";
    int n=0;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
      cin>>arr[i];
    bubblesort(arr,n);
    for(int i=0;i<n;i++)
      cout<<arr[i]<<" ";
}