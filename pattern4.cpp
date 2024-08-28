#include<bits/stdc++.h>
using std::cin;
using std::cout;
using std::min;

void pattern1(int n){
    for(int i=1;i<=n;i++){
        //space
        for(int j=0;j<n-i;j++){
            cout<<" ";
        }
        //star
        for(int j=0;j<2*i-1;j++){
            cout<<"*";
        }
        //space
        for(int j=0;j<n-i;j++){
            cout<<" ";
        }
        cout<<"\n";
    }
}
void pattern2(int n){
    for(int i=n;i>=1;i--){
        //space
        for(int j=0;j<n-i;j++){
            cout<<" ";
        }
        //star
        for(int j=0;j<2*i-1;j++){
            cout<<"*";
        }
        //space
        for(int j=0;j<n-i;j++){
            cout<<" ";
        }
        cout<<"\n";
    }
}

void pattern3(int n)
{
    for(int i=1;i<=n*2-1;i++){
        int stars=i;
        if(stars>n)
          stars=2*n-i;
        for(int j=1;j<=stars;j++)
        cout<<"* ";
        cout<<"\n";
    }
}

void pattern4(int n){
    int start=1;
    for(int i=0;i<n;i++){
        if(i%2==0)  start=1;
        for(int j=0;j<=i;j++ ){
            cout<<start<<" ";
            start=1-start;
        }
        cout<<"\n";
    }
}

void pattern5(int n){
    for(int i=1;i<=n;i++){
        //start number
        for(int j=1;j<=i;j++){
            cout<<j;
        }
        //space
        for(int j=1;j<=2*n-2*i;j++){
            cout<<' ';
        }
        //end number
        for(int j=i;j>=1;j--){
            cout<<j;
        }
        cout<<"\n";
    }
}

void pattern6(int n){
    int count=1;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<count<<" ";
            count++;
        }
        cout<<"\n";
    }
}

void pattern7(int n){
    for(int i=0;i<n;i++){
        for(char j='A';j<='A'+i;j++){
            cout<<j<<" ";
        }
        cout<<"\n";
    }
}

void pattern8(int n){
    for(int i=n;i>=1;i--){
        for(char j='A';j<'A'+i;j++){
            cout<<j<<" ";
        }
        cout<<"\n";
    }
}

void pattern9(int n){
    char ch='A';
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
           cout<<ch<<" ";
        }
        cout<<"\n";
        ch++;
    }
}

void pattern10(int n){
    for(int i=1;i<=n;i++){
         //space
         for(int j=1;j<=n-i;j++){
            cout<<" ";
         }
         //character
         int breakpoint=(2*i)/2;
         char ch='A';
         for(int j=1;j<=2*i-1;j++){
            cout<<ch;
            if(j<breakpoint){ 
            ch++;
            }
            else{
                ch--;
            }
         }\
         //space
         for(int j=1;j<=n-i;j++){
            cout<<" ";
         }
         cout<<"\n";
    }
}
void pattern11(int n){
    for(int i=n;i>=1;i--){
         char ch='A'+i-1;
        for(int j=n;j>=i;j--){
           
            cout<<ch<<" ";
            ch++;
        }
        cout<<"\n";
    }
}
void pattern12(int n){
     int initialspace=0;
    for(int i=0;i<n;i++){
       
        //stars
        for(int j=1;j<=n-i;j++)
          cout<<"*"<<" ";
           //space
        for(int j=0;j<initialspace;j++){
          cout<<"  ";}
           //stars
        for(int j=1;j<=n-i;j++){
          cout<<"*"<<" ";}
          initialspace+=2;

          cout<<"\n";
    }
   initialspace-=2;
    // Lower part of the pattern
    for (int i = 1; i <= n; i++) {
        // First set of stars
        for (int j = 1; j <= i; j++)
            cout << "* ";

        // Space in the middle
        for (int j = initialspace; j > 0; j--)
            cout << "  ";

        // Second set of stars
        for (int j = 1; j <= i; j++)
            cout << "* ";
        
        initialspace -= 2;
        cout<<"\n";
    }


}
void pattern13(int n){
    int space=2*n-2;
    for(int i=1;i<=2*n-1;i++){
        int stars=i;
        if(i>n)
         stars=2*n-i;
         //stars
         for(int j=1;j<=stars;j++)
            cout<<"* ";
        //space
        for(int j=1;j<=space;j++)
         cout<< "  ";
         //stars
        for(int j=1;j<=stars;j++)
        cout<<"* ";
        if(i<n) space-=2;
        else     space+=2;
        cout<<"\n";
    }
}
void pattern14(int n){
    for(int i=1;i<=n;i++){
        for (int j=1;j<=n;j++){
            if((i==1)|(j==n)|(i==n)|(j==1))
               cout<<"* ";
            else
               cout<< "  ";
        }
        cout<<"\n";
    }
}
void pattern15(int n){
    for(int i=0;i<2*n-1;i++){
        for(int j=0;j<2*n-1;j++){
            int top=i;
            int left=j;
            int bottom=(2*n-2)-i;
            int right=(2*n-2)-j;
            cout<<(n-min(min(top,bottom),min(left,right)));
        }
        cout<<"\n";
    }
}
int main(){
    cout<<"enter n ";
    int n;
    cin>>n;
    //pattern1(n);
    //pattern2(n);
   // pattern3(n);
   //pattern4(n);
   //pattern5(n);
  // pattern6(n);
  //pattern7(n);
 // pattern8(n);
   //pattern9(n);
  // pattern10(n);
 // pattern11(n);
 pattern15(n);
}