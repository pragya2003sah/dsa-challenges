//optimal way
#include<bits/stdc++.h>
using namespace std;


int* printDivisors(int n, int &size){
// Write your code here
     int* divisors=new int[n];
     size=0;
     for(int i=1;i<=sqrt(n);i++){
         if(n%i==0){
             divisors[size]=i;
             size++;
             if(n/i!=i){//to avoid duplicates
                 divisors[size]=n/i;
                 size++;
             }
         }

     }
     sort(divisors,divisors+size);
     return divisors;

}
int main(){
    cout<<"enter the number"<<"\n";
    int n=0;
    cin>>n;
    int size=0;
   
    int* arr= printDivisors(n,size);
    for(int i=0;i<size;i++)
       cout<<arr[i]<<" ";
    delete[] arr;
}