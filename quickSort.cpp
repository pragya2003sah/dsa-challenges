#include <bits/stdc++.h> 
using namespace std;

int partitionswap(vector<int> &arr,int low,int high){
    int pivot=arr[low];
    int i=low;
    int j=high;
    while(i<j){
        while(arr[i]<=pivot && i<=high-1){
            i++;
        }
        while(arr[j]>pivot && j>=low+1){
            j--;
        }
        if(i<j)
          swap(arr[i],arr[j]);
    }
    swap(arr[low],arr[j]);
    return j;
}

void quick_sort(vector<int> &arr,int low,int high){
    if(low<high){
        int partition=partitionswap(arr,low,high);
        quick_sort(arr,low,partition-1);
        quick_sort(arr,partition+1,high);
    }
}

vector<int> quickSort(vector<int> arr)
{
    quick_sort(arr,0,arr.size()-1);
    return arr;
}
int main(){
   vector<int> arr;
   cout<<"enter array and -1 to end "<<"\n";
   int input;

    while(true){
      cin>>input;
      if(input==-1)
       break;
      arr.push_back(input);
    }
    arr=quickSort(arr);
    for(int i=0;i<arr.size();i++)
      cout<<arr[i]<<" ";
}