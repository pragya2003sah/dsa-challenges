#include<bits/stdc++.h>
using namespace std;

int main(){
    cout<<"enter the number of array elements"<<"\n";
    int n=0;
    cin>>n;
    int max=numeric_limits<int>::min();
    int arr[n];
    for(int i=0;i<n;i++){
     cin>>arr[i];
     if(arr[i]>max)
       max=arr[i];
    }
    //hashing using array
     int hash[max+1]={0};//initialise with 0 otherwise garbage value will be provided 
     for(int i=0;i<n;i++)
      hash[arr[i]]++;
    //hashing in map instead of array as it saves more space
    map<int,int> mpp;
    for(int i=0;i<n;i++){
        mpp[arr[i]]++;//we are not storing the frquencies according to 0 to n rather only the frequencies of the digits found
    }
    // int maxx=numeric_limits<int>::min();
    // int min=numeric_limits<int>::max();
    // int max_num=0;
    // int min_num=0;

    // for(auto it:mpp){
    //     if(it.second>maxx){
    //          maxx=it.second;
    //          max_num=it.first;
    //     }
    //     if(it.second<min)
    //       {
    //         min=it.second;
    //         min_num=it.first;
    //       }
    // }
    // cout<<"highest frequency "<<max_num<<"\n";
    // cout<<"lowest frequency "<<min_num<<"\n";


    cout<<"enter the number of elements you want to search"<<"\n";
    int q=0;
    cin>>q;
    while(q--){
        int number;
        cin>>number;
        //cout<<hash[number]<<"\n";
        cout<< mpp[number]<<"\n";
    }

    

 }