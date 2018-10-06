#include <iostream>
#include<ctime>
#include<cstdlib>
#include<string>
#include"Cars.h"

using namespace std;

int main() {
    
    Cars myCar;
    myCar.setSpeed(180);
    cout << myCar.getSpeed();

    /*
      string cModel;
    int mSpeed;
    
    cout << "Enter Your Car Model: ";
    cin >>cModel;
    myCar.setCarModel(cModel);
   
    cout << "Enter Car Max Speed: ";
    cin >>mSpeed;
    myCar.setCarMaxSpeed(mSpeed);
    
    cout << "Your Car Model is: "<<myCar.getCarModel();
    cout << " And Its max Speed= "<< myCar.getCarMaxSpeed();
    */
   
    return 0; 
}
