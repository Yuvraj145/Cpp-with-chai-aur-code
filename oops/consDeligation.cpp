#include <iostream>
#include <vector>
using namespace std;

class MyClass
{
public:
    string name;
    int age;
    vector<string> hobbies;

    // deligating constructor
    MyClass(string name) : MyClass(name, 23, {"walking", "reading", "running"}) {}

    // main constructor
    MyClass(string n, int a, vector<string> h)
    {
        name = n;
        age = a;
        hobbies = h;

        cout << "Main constructor called" << endl;
    }

    void displayPersonDetails()
    {
        cout << "person Name: " << name << endl;
        cout << "person age: " << age << endl;
        cout << "hobbies: ";
        for (string hobby : hobbies)
        {
            cout << hobby << " ";
        }
        cout << endl;
    }
};
int main()
{
    MyClass personOne("abcdef");
    personOne.displayPersonDetails();
    return 0;
}