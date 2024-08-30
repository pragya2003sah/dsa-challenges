//to check if the strig is palindrome

#include<bits//stdc++.h>
using namespace std;

bool stringpalindrome(int i,string &s){//string is not taken by refernece so we need and
    if(i>=s.size()/2)
     return true;
    if(s[i]!=s[s.size()-i-1])
      return false;
    return stringpalindrome(i+1,s);
}

int main(){
    string s;
    cin>>s;
    cout<<stringpalindrome(0,s);//print 0 when false and 1 when true
}