#include <iostream>
#include <vector>

using namespace std;

// this is class in the main function we will make object that is also we can say an instance of class
class MyClass
{

public:
    // data members
    string *name;
    int age;
    vector<string> hobbies;

    // constructor
    MyClass(string n, int a, vector<string> h)
    {
        cout << "constructor called" << endl;
        name = new string(n);
        age = a;
        hobbies = h;
    }

    MyClass(const MyClass &other)
    {
        name = new string(*other.name);
        age = other.age;
        hobbies = other.hobbies;
        cout << "Copy constructor called" << endl;
    }

    // Destructor
    ~MyClass()
    {
        delete name;
        cout << "Destructor called" << endl;
    }
    // member function
    void displayPersonDetails()
    {
        cout << "The person name is " << *name << endl;
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

    MyClass personOne("ABCDEF", 45, {"Running", "walking", "working"});
    //  personOne.displayPersonDetails();
    MyClass personeTwo = personOne;
    // personeTwo.displayPersonDetails();
    *personOne.name = "rosuperhit";

    cout << "Person one --------" << endl;
    personOne.displayPersonDetails();
    cout << "Copied Person Two ---------" << endl;
    personeTwo.displayPersonDetails();
    return 0;
}