#include <iostream>
#include <vector>

using namespace std;

//this is class in the main function we will make object that is also we can say an instance of class
class MyClass
{
    
    public:
        // data members
        string name;
        int age;
        vector<string> hobbies;

        

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

int main(){
    //here we are make object of the class
    
  MyClass personOne;
  personOne.name = "ABCXYZ";
  personOne.age=45;
  personOne.hobbies={"Reading","Writing","Running"};

  personOne.displayPersonDetails();

  MyClass personTwo;
  personTwo.name = "XYZABC";
  personTwo.age=46;
  personTwo.hobbies={"Swimming","Writing","Running"};

  personTwo.displayPersonDetails();


return 0;
 
}