//There are N people standing in a circle waiting to be executed.
// The counting out begins at some point in the circle and proceeds around the circle in a fixed direction.
// In each step, a certain number of people are skipped and the next person is executed. 
//The elimination proceeds around the circle (which is becoming smaller and smaller as the executed people are removed), until only the last person remains, who is given freedom. 

#include<iostream>
#include<vector>
using std::cout;
using std::cin;
using std::vector;

int josephus(vector<int> &person,int index,int kill){
    if(person.size()==1){
        return person[0];
    }
    //to curve off the vector size
    index=(index+kill)%person.size();
    person.erase(person.begin()+index);
    josephus(person,index,kill);
}

int main(){
    int total_people{0},kill{0};
    vector<int> people;
    cin>>total_people;
    cin>>kill;
//since vector count starts from 0 we have to consider n-1 position
    kill--;
    for(int i=1;i<=total_people;i++){
        people.push_back(i);
    }
    int index{0};
    cout<<josephus(people,index,kill);
    


}
