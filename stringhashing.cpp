#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cout<<"enter the string "<<"\n";
    getline(cin,s);
    //hashing using array
    //int hash[26]={0}; for only lowecase string
    int hash[256]={0};// because we have 256 characters 
    //hashing
    for(int i=0;i<s.size();i++){
       // hash[(s[i]-'a')]++;  for lowercase
       hash[s[i]]++;
    }
    //hashing using map
    unordered_map<char,int> mpp;
    for(int i=0;i<s.size();i++){
        mpp[s[i]]++;
    }
    cout<<"enter the no of characters you want to search"<<"\n";
    int n;
    cin>>n;
    while(n--){
        char ch;
        cin>>ch;
        //cout<<hash[(ch-'a')]<<"\n";
        //cout<<hash[ch]<<"\n";
        cout<<mpp[ch]<<"\n";
    }

}