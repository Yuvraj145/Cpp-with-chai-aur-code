//pass by value :- making copy of that not changing in the original value

#include<iostream>
using namespace std;

void  incNumByTwo (int num){
    num += 2;
    cout<<"number after the increament "<<num<<endl;
}

int main(){
 int number = 5;
 
 incNumByTwo(number);
 cout<<"Number that we passed "<<number<<endl;
}