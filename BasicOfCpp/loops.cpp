#include <iostream>
#include <string>
using namespace std;

int main()
{
    // int teaOrders = 5;

    // while (teaOrders){
    //     cout<<"Serving the tea"<<endl;
    //     cout<<"Remaing  the teas is"<<teaOrders<<endl;
    //     teaOrders--;
    // }

    // if(teaOrders==0){
    //     cout<<"All teas are serverd and now tea is left "<<teaOrders<<endl;
    // }

    // bool isWantMore;
    //  do
    //  {
    //    cout<<"If you want more tea enter 1 for yes and 0 for no"<<endl;
    //    cin>>isWantMore;
    //  } while (isWantMore);

    // string response;
    // do
    // {
    //     cout << "If you want more tea type yes else no" << endl;
    //     getline(cin, response);
    // } while (response != "no" && response != "NO" && response != "No");

    // int numOfCups = 4;
    // for (int i = 0; i < numOfCups; i++)
    // {
    //     cout << "Brewing cup " << i << " of tea..." << endl;
    // }

    // string response;
    // while (true)
    // {
    //     cout << "You want more tea type yes else stop" << endl;
    //     getline(cin, response);

    //     if (response == "stop")
    //         break;
    //     cout << "Here is you another cup of tea" << endl;
    // }

    // cout << "No more tea will be served to you";

    // string teaTypes[5] = {"Oolong tea", "Orange Tea", "Green Tea", "Black Tea", "Lemon Tea"};
    // for (int i = 0; i < 5; i++)
    // {
    //     if (teaTypes[i] == "Green Tea")
    //     {
    //         cout << "Skipping the " << teaTypes[i] << endl;
    //         continue;
    //     }
    //     cout << "Brewing " << teaTypes[i] << "..." << endl;
    // }

    // string teaTypes[5] = {"Oolong tea", "Orange Tea", "Green Tea", "Black Tea", "Lemon Tea"};

    // for(int i = 0 ; i < 5 ; i++){
    //     cout << "Brewing " << teaTypes[i] << "..." << endl;
        
    //     for (int j = 1 ; j <= 3 ; j++){
    //         cout << "Brewing " << j << " cup of " << teaTypes[i] << endl;
    //     }
    // }


    for(int i=1;i<=10;i++){
        cout<<2*i<<endl;
    }

    return 0;
}