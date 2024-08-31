//chcek if array is sorted
#include<bits/stdc++.h>
using namespace std;

int isSorted(int n, vector<int> a) {
    // Write your code here.
    int check=0;
    for(int i=0;i<n-1;i++){
        if(a[i]>a[i+1])
          check=1;
    }
    if(check==1)
     return 0;
    else
      return 1;
}

int main(){
  
   cout<<"enter no of elements"<<"\n";
   int input;
  cin>>input;
  vector<int> arr(input);
    for(int i=0;i<input;i++){ 
    cin>>arr[i];
    }
   int Sorted= isSorted(input,arr);
    if(Sorted==1){
        cout<<"the array is sorted";
    }
    else
      cout<<"the array is unsorted";
}
