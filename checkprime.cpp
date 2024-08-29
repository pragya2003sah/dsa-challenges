#include<iostream>
using namespace std;

bool checkprime(int n){
	for(int i=2;i<n;i++){
        if(n%i==0 )
		    return false;
		
	}
	return true;
}

int main() {
	// Write your code here
	int n=0;
    cout<<"enter the number";
	cin>>n;
	bool b=checkprime(n);
	if(b==true)
	  cout<<"true";
	else
	cout<<"false";
}
