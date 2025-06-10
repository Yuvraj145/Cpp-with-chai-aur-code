#include<iostream>
using namespace std;

int main (){
    int chaiSales[3][7] ={ //3 is row and 7 cloumn
        {66,64,77,99,88,75,78},
        {11,22,33,44,55,66,77},
        {23,35,56,78,91,29,12}
    };

    for(int i=0;i<3;i++){
        cout<<"At shop "<<i+1<<" number of cups"<<endl;
        for(int j=0;j<7;j++){
            cout<<chaiSales[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}