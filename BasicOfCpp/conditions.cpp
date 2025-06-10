#include <iostream>
#include <string>
using namespace std;

int main()
{
    // string favoriteTea;
    // cout<<"Enter your favorite tea"<<endl;
    // getline(cin,favoriteTea);

    // if(favoriteTea == "Oolong"){
    //     cout<<" \"You have excellent taste!\""<<endl;

    // }

    // int age;
    // cout << "Enter your age" << endl;
    // cin >> age;

    // if (age > 18)
    // {

    //     cout << "Your eligible to purchese the tea" << endl;
    // }
    // else
    // {
    //     cout << "Your too young to purchese the tea" << endl;
    // }

    // int temperature;
    // cout << "Enter the Temperature of water" << endl;
    // cin >> temperature;
    // if (temperature > 100)
    // {
    //     cout << "Too hot" << endl;
    // }
    // else if (temperature > 80 && temperature < 100)
    // {
    //     cout << "Perfect temperature" << endl;
    // }
    // else
    // {
    //     cout << "Too Cold" << endl;
    // }

    int userSelection;
    cout << "Choose your selection 1 for Boiling, 2 for Steeping, 3 for Iced Tea " << endl;
    cin >> userSelection;

    switch (userSelection)
    {
    case 1:
        cout << " Boiling Method Selected: \n - Bring water to a rolling boil. \n - Add tea leaves or bag. \n - Boil for 3-5 minutes. \n - Strain and serve hot. \n"
             << endl;
        break;

    case 2:
        cout << "Steeping Method Selected: \n - Heat water to the appropriate temperature (not boiling). \n - Pour water over tea leaves or bag. \n - Let it steep for 3-4 minutes. \n - Remove leaves or bag and enjoy. \n"
             << endl;
        break;
    case 3:
        cout << "Iced Tea Method Selected: \n -  Brew tea using the boiling or steeping method. \n - Let it cool to room temperature. \n - Add ice and refrigerate. \n - Serve chilled with lemon or mint.. \n"
             << endl;
        break;

    default:
        cout << "Invalid selection " << endl;
    }
    return 0;
}