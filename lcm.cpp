#include<iostream>

using std::cout;
using std::cin;
//we are using euclideam gcd using while loop instead of recursion
int gcd(int num1,int num2){
    int temp{0};
  while(num2!=0){
     temp=num1;
     num1=num2;
     num2=temp%num2;
  }
  return num1;
}
//lcm function to calculate lcm using (a*b)/gcd(a,b) formula
long long lcm(int num1,int num2){
  return ((static_cast<long long>(num1)/gcd(num1,num2))*num2);
}

int main(){
    int num1{0},num2{0};
    cin>>num1>>num2;
    cout<<lcm(num1,num2);
}