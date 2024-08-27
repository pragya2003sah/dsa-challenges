#include<bits/stdc++.h>
using std::cout;
using std::cin;

void pattern(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            cout<<"* ";
        }
        cout<<"\n";
    }
}

int main(){
    int n;
    cout<<"enter n";
    cin>>n;
    pattern(n);
}