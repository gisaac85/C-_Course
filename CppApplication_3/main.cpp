#include <iostream>
#include<ctime>
#include<cstdlib>
#include<string>

using namespace std;

class Cars{
public:
    string carModel;
    int maxSpeed;
    void printProps(){
        cout<<"Your Car is: "<<carModel<<" and its max speed= "<<maxSpeed;
    };
};
int main() {
    
    Cars myCar;
    myCar.carModel="Honda";
    myCar.maxSpeed=200;
    myCar.printProps();
    return 0; 
}
