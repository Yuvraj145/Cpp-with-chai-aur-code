//pass by refrence:- passing the address that's why it changes to the original variable 

#include<iostream>
using namespace std;

void  incNumByTwo (int &num){  //we are passing the address of that value
    num += 2;
    cout<<"number after the increament "<<num<<endl;
}

int main(){
 int number = 5;
 
 incNumByTwo(number);
 cout<<"Number that we passed "<<number<<endl;
}