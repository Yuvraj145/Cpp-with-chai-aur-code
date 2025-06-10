
#include <iostream>
using namespace std;

// here we are defined simple funtion and calling in the main funtion
int checkTemprature(int temprature)
{
    return temprature;
}

void displayMessage()
{
    cout << "Hello , How are you?? " << endl;
}

//declaration of function
void getNumber(int num);

//we can also called as methdo overiding
void getNumber(string Name = "abc xyz"){
    int score = 4;
    cout << Name << score << endl;
}

int main()
{
    int temp = checkTemprature(50);
    //   cout<<"Temprature is "<<temp<<endl;
    displayMessage();
    getNumber(5);
    getNumber("Rohit");
    return 0;
}

// defination of function
void getNumber(int num){
    cout << "The number is  " << num <<endl;
}