#include <iostream>
#include<ctime>
#include<cstdlib>
#include<string>
#include"Cars.h"

using namespace std;

int main() {
    
    int number;
    int n=1;
    int myNumbers[5] = { }; 
    int total=0;
    
    while(n<=5){
        cout << "Enter a number: "<<endl;
        cin >> number;
        myNumbers[n]={number};
        total=total+number;
        n++;
    }
    cout << "Your Numbers are: ";
    for(int k=0;k<5;k++){
        cout<<myNumbers[k]<<"\t";
   }
    
    cout << "\nThe Total Sum of your numbers= "<<total;
   
    return 0; 
}
