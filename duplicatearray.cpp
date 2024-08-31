//count the number of unique array elements
#include<bits/stdc++.h>
using namespace std;

int removeDuplicates(vector<int> &arr, int n) {
	// Write your code here.
    int pointer=arr[0];
	int num=1;
	for(int i=1;i<n;i++){
		if(arr[i]!=pointer){
			pointer=arr[i];
			num++;
		}
	}

	return num;
}
int main(){
  
   cout<<"enter no of elements"<<"\n";
   int input;
  cin>>input;
  vector<int> arr(input);
    for(int i=0;i<input;i++){ 
    cin>>arr[i];
    }
   int num=removeDuplicates(arr,n);
   cout<<num;
}