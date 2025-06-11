#include <iostream>
using namespace std;

class MyClass
{
private:
    string name;
    int age;

public:
    MyClass(string n, int a) : name(n), age(a) {}

    friend bool compareAge(const MyClass &personOne, const MyClass &personTwo);
    void display() const
    {
        cout << name << " you are " << age << " years old" << endl;
    }
};

bool compareAge(const MyClass &personOne, const MyClass &personTwo)
{
    return personOne.age > personTwo.age;
}

int main()
{

    MyClass personOne("abcdef", 45);
    MyClass personTwo("xyztuv", 98);

    personOne.display();
    personTwo.display();

    if (compareAge(personOne, personTwo))
    {
        cout << "Person one is older then person two" << endl;
    }
    else
    {
        cout << "Person one is younger then person two" << endl;
    }
    return 0;
}