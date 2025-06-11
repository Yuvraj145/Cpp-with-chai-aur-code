#include <iostream>
#include <vector>
using namespace std;

class MyClass
{
private:
    string name;
    int age;
    vector<string> hobbies;

public:
    MyClass()
    {
        name = "aeiou";
        age = 26;
        hobbies = {"walking", "running", "reading", "writing"};
    }
    MyClass(string n, int a, vector<string> h)
    {
        name = n;
        age = a;
        hobbies = h;
    }

    // getter
    string getPersonName()
    {
        return name;
    }

    // setter
    void setPersonName(string pname)
    {
        name = pname;
    }

    // getter
    int getPersonAge()
    {
        return age;
    }

    // setter
    void setPersonAge(int page)
    {
        age = page;
    }

    // getter
    vector<string> getPersonHobbies()
    {
        return hobbies;
    }

    // setter
    void setPersonHobbies(vector<string> phobbies)
    {
        hobbies = phobbies;
    }

    // display funtion for person details
    void displayPersonDetails()
    {
        cout << "Person name is " << name << endl;
        cout << "Person age is " << age << endl;
        cout << "Hobbies : ";
        for (string hobby : hobbies)
        {
            cout << hobby << " ";
        }
        cout << endl;
    }
};

int main()
{
    MyClass personOne;
    personOne.setPersonName("ABCD");
    personOne.setPersonAge(23);
    personOne.setPersonHobbies({"reading", "writing", "running"});
     
    personOne.displayPersonDetails();

    cout<<"here try to get the name age and hobbies by the getter method "<<endl;
    string pName=personOne.getPersonName();
    int pAge =personOne.getPersonAge();
    vector<string>pHobbies= personOne.getPersonHobbies();
    
    cout<<"The person name is "<<pName<<" And he is "<<pAge<<" years old"<<endl;
    cout<<"Person Hobbies are : ";
    for(string hobby:pHobbies){
        cout<<hobby<<" ";
    }
  
    return 0;
}