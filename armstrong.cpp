#include<bits/stdc++.h>
using namespace std;
bool checkArmstrong(int n){
	//Write your code here
	int copy=n;
	int count=(int)(log10(n)+1);
	int sum=0;
	while(n>0){
		int rem=n%10;
		sum=sum+pow(rem,count);
		n=n/10;

	}
	if(sum==copy)
	 return true;
	 else
	 return false;
}
int main(){
    int n;
    cout<<"enter the number"<<"\n";
    cin>>n;
    bool b=checkArmstrong(n);
     if(b==true)
          cout<<"your number is an armstrong number";
    else 
           cout<<"your number is not an armstrong number";
     
}