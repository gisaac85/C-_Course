#include <iostream>
#include<ctime>
#include<cstdlib>
#include<string>
#include"Cars.h"

using namespace std;

int main() {
    
    double avg=0;
    double total=0;
    int times=0;
    double number;
    
    cout<<"Enter your First Number: "<<endl;
    cin >> number;
    while(number!=-1){
        total=total+number;
        times++;
        cout << "Enter Next number: "<<endl;
        cin >> number;
    }
    avg=total/times;
    cout<<"You entered "<<times<<" numbers!"<<endl;
    cout<<"Your Total= "<<total<<endl;
    cout<<"Your Average= "<<avg<<endl;
    
    return 0; 
}
