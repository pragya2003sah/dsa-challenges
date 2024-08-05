/*given a array of n number of elements fint two of the maximum numbers and return the product of the numbers*/
/*pitfalls- must use long long to prevent integer overflow
            must use stress testing*/

#include <iostream>
#include <vector>
#include <cstdlib>
/*maxpair is a funvtion in which we calculate the product of every possible combination and compare it to the highest product value stored using max function of std.
limitations: brute force approach - we have to do calculations for all possible cobinations
             integer overflow- large products can result in a garbage value because of overflow*/
long long maxpair(const std::vector<int>& numbers) {
   long long product=0;
   int n=numbers.size();
   for(int i=0;i<n;i++){
    for(int j=i+1;j<n;j++){
        if(((long long)numbers[i])*((long long)numbers[j])>product)
            product=((long long)numbers[i])*((long long)numbers[j]);
    }
   }
   return product;
}
/*in this fuction we use a more optimized approach in which we first calculate the largest and second largest numbers first and then return their product*/
long long maxpairfast(const std::vector<int>& numbers){
    int first=-1;
    int n=numbers.size();
    for(int i=0;i<n;i++){
        if((numbers[i]>numbers[first]) || (first==-1)){
             first=i;
        }
    }
    int second=-1;
    for(int j=0;j<n;j++){
        if((j!=first)&&((second ==-1) || (numbers[j]>numbers[second]))){
            second=j;
        }
    }
   long long product=(long long)numbers[first]*(long long)numbers[second];
   return product;
}

int main(){
  //stress testing
//    while(true){
//     int n=rand()%10+2;
//     std::cout<<n<<'\n';
//     std::vector<int> a;
//     for(int i=0;i<n;i++){
//         a.push_back(rand()%100);
//     }
//     for(int i=0;i<n;i++){
//         std::cout<<a[i]<<" ";

//     }
//     long long res1=maxpair(a);
//     long long res2=maxpairfast(a);
//     if(res1 != res2){
//        std:: cout<<"wrong answer : "<<res1<<' '<<res2<<"\n";
//     break;
//     }
//     else{
//         std::cout<<"ok\n";
//     }

//    }
    

    int n;
    // std::cout<<"enter the number of integers"<<'\n';
    std::cin>>n;
    std::vector<int> numbers(n);
    for(int i=0;i<n;i++){
        std::cin>>numbers[i];
    }
    std::cout<< maxpairfast(numbers)<<'\n';
}