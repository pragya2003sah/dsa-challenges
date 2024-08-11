// this program is to compute the gcd(greatest common divisor of two large numbers)
#include <iostream>

using std::cout;
using std::cin;
//this is the brute force method in which we calculate the largest number divisible by both num1 and num2 but individually dividing both numbers and dinding the largest using iteration
int gcdSlow(int num1,int num2){
    int i{1},gcd{0};
    for(i;i<=num1+num2;i++){
        if((num1%i==0)&&(num2%i==0))
          gcd=i;
    }
    return gcd;
}
//this is the optimised method in which we use euclidean gcd. gcd(a,b)=gcd(b,a%b). we use resursion in this
int gcdFast(int num1,int num2){
    if(num2==0){
        return num1;
    }
    return gcdFast(num2,num1%num2);
}

int main(){
    int num1{0},num2{0};
    cin>>num1>>num2;
    cout<<gcdFast(num1,num2);
}