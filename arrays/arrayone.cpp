#include <iostream>
using namespace std;

int arrayElementsSum(int n, int arr[])
{
    int total = 0;
    for (int i = 0; i < n; i++)
    {
        total += arr[i];
    }

    return total;
}

void displayArr(int n, int arr[])
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    // int arr[5] = {1,2,3,4,5};

    // for(int i=0;i<5;i++){
    //     cout<<arr[i]<<" ";
    // }
    // cout<<endl;

    // find the sum of array element and make a funtion for that and alos write print funtion

    int arr[6] = {1, 2, 3, 4, 5, 6};
    int n = 6;
    cout << "Your array is as follow : " << endl;
    displayArr(n, arr);
    int total = arrayElementsSum(n, arr);
    cout << "The total sum of array is " << total << endl;
}