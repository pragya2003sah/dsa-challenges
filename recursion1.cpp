#include<bits/stdc++.h>

using namespace std;

void backtracking(int i){
    if(i<1)
      return;
    backtracking(i-1);
    cout<<i<<"\n";

}


int main(){
    cout<<"enter the number of times";
    int n=0;
    cin>>n;
    backtracking(n);
}