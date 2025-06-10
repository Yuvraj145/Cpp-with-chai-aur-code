
//  "Preprocessor Directive" ka matlab simple shabdon mein:
// "Wo line jo program start hone se pehle compiler ko kuch instructions deti hai."
// Jaise: #include, #define, #ifdef, etc.

#include <iostream>
#include <string>

using namespace std;

int main()
{
    // task 1 done
    // string typeOfTea = "Lemon tea";
    // float priceOfTea = 100.145;
    // char rating = 'A';
    // cout << "Your favourite \"" << typeOfTea << "\" \n"
    //      << "is rating of " << rating << " \n"
    //      << " And the price is rupees of \"" << priceOfTea << "\"" << endl;

    // float teaPrice ;
    // cout<<"Please Enter the Tea Price"<<endl;
    // cin>>teaPrice;
    // float incTeaPrice = teaPrice + (teaPrice * 0.10f);
    // int finalPrice= (int) incTeaPrice;

    string name;
    string favoriteTea;
    int numOfCups;
    cout << "Enter your user name " << endl;
    cin >> name;
     cin.ignore();
    cout << "Hey " << name << " Can You tell us your favorite tea " << endl;
    getline(cin, favoriteTea);
    cout << "Okay " << name << " let me know how much cup you want " << favoriteTea << endl;
    cin >> numOfCups;
    cout << " Ye Lo " << name << " bhai " << numOfCups << " cups of your favorite " << favoriteTea << endl;

    return 0;
}