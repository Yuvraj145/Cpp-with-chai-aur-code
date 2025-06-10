#include <iostream>

using namespace std;

int main()
{
    // int numOfCups;
    // double pricePerCups, discountPrice, totalPrice;
    // cout << "Enter the number of Tea cups You want" << endl;
    // cin >> numOfCups;
    // cout << "Enter at what price you will buy and you will get 5\% discount above 100rs" << endl;
    // cin >> pricePerCups;

    // totalPrice = pricePerCups * numOfCups;
    // discountPrice = totalPrice - (totalPrice * 0.05);

    // if (totalPrice > 100)
    // {
    //     cout << "The final amount you have to pay is with discount " << discountPrice;
    // }
    // else
    // {
    //     cout << "The final amount you have to pay is " << totalPrice;
    // }

    // int numOfBags;
    // cout << "Enter the number of tea bags you have " << endl;
    // cin >> numOfBags;

    // if (numOfBags < 10)
    // {
    //     numOfBags += 5;
    //     cout << "You got 5 extra bag now you have total tea bag is " << numOfBags;
    // }
    // else
    // {
    //     cout << "you will not get extra bag because you have more then 10 bag that is " << numOfBags << endl;
    // }

    // challenges

    // int numOfPack,perPackPrice;
    // cout<<"Enter the number of tea packs you want"<<endl;
    // cin>>numOfPack;
    // cout<<"Enter the the price per pack "<<endl;
    // cin>>perPackPrice;

    // int totalPrice = numOfPack * perPackPrice;
    // int amoutToPayWithTax = totalPrice + (totalPrice * 0.10);

    // cout<<"For "<<numOfPack<<" tea packs at the price of "<<perPackPrice<<" you have to pay with 10\% tax is "<<amoutToPayWithTax<<endl;

    // int numOfCups;
    // bool isMoreThenYear;
    // cout<<"Enter the Number Cups you want"<<endl;
    // cin>>numOfCups;
    // cout<<"If you are with us is more then one year so for yes enter 1 and for no enter 0"<<endl;
    // cin>>isMoreThenYear;

    // if(numOfCups > 12 || isMoreThenYear){
    //     cout<<"Congr. You are eligibel for the special discount"<<endl;
    // }
    // else{
    //     cout<<"Sorry but you are not eligible for the special discount"<<endl;
    // }

    int typeOfTea;
    int stock=3;
    cout << "Enter the Type of tea like : 1 for Green, 2 for Black, 4 for Oolong" << endl;
    cin >> typeOfTea;

      if (typeOfTea != 1 && typeOfTea != 2 && typeOfTea != 4) {
        cout << "Invalid input. Please enter 1, 2, or 4 only." << endl;
        return 0;
    }


    if (stock & typeOfTea)
    {

        if (typeOfTea == 1)
        {
            cout << " Yes Green tea is in Stock " << endl;
        }
        else if (typeOfTea == 2)
        {

            cout << " Yes Black tea is in Stock " << endl;
        }
        else if (typeOfTea == 4)
        {
            cout << " Yes Oolong tea is in Stock " << endl;
        }
    }
    else
    {
         cout << "Sorry, that tea is not in stock." << endl;
    }
    return 0;
}