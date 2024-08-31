//finding the second largest element and second smallest of an array

#include<bits/stdc++.h>
using namespace std;

vector<int> getSecondOrderElements(int n, vector<int> a) {
    // Write your code here.
    //optimized
    int largest=a[0];
    int secondlarge=-1;
    int smallest=a[0];
    int secondsmall=INT_MAX;
    for(int i=1;i<n;i++){
        if(a[i]>largest){
             secondlarge=largest;
            largest=a[i];
           }
        if(a[i]<largest && a[i]>secondlarge){
            secondlarge=a[i];
        }
        if(a[i]<smallest){
            secondsmall=smallest;
            smallest=a[i];
        }
        if(a[i]>smallest && a[i]<secondsmall){
            secondsmall=a[i];
        }
    }
    vector<int> arr(2);
    arr[0]=secondlarge;
    arr[1]=secondsmall;
    return arr;
}

int main(){
  
   cout<<"enter no of elements"<<"\n";
   int input;
  cin>>input;
  vector<int> arr(input);
    for(int i=0;i<input;i++){ 
    cin>>arr[i];
    }

    vector<int> results(2);
    results= getSecondOrderElements(input,arr);
    for(int i=0;i<2;i++)
      cout<<results[i]<<" ";
   
}

