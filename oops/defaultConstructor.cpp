#include <iostream>
#include <vector>

using namespace std;

// this is class in the main function we will make object that is also we can say an instance of class
class MyClass
{

public:
    // data members
    string name;
    int age;
    vector<string> hobbies;

    //makeing default construcors here 
    //when we are making any object that time automatically constructor will called 
    //if are not making the constructor that time c++ make behind the scene
    MyClass (){
        cout<<"Construcor called "<<endl;
        name= "abcxuyx";
        age=45;
        hobbies={"running","reading","walking"};
    }

    // member function
    void displayPersonDetails()
    {
        cout << "The person name is " << name << endl;
        cout << "The person age is " << age << endl;
        for (string hobby : hobbies)
        {
            cout << hobby << " ";
        }
        cout << endl;
    }
};

int main()
{
    // here we are make object of the class

    MyClass personOne;

    personOne.displayPersonDetails();

    return 0;
}