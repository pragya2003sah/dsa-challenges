#include<iostream>
using namespace std;

int main() {
	// Write your code here
	int n;
	cin>>n;
	int revn=0;
	while(n>0){
		int rem=n%10;
		revn=revn*10+rem;
		n=n/10;
	}
	cout<<revn;
}