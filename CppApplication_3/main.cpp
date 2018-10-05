#include <iostream>
#include<ctime>
#include<cstdlib>
#include<string>

using namespace std;

class Cars{
public:
        
    void setCarModel(string carModelName){
        carModel=carModelName;
    };
    string getCarModel(){
      return carModel;  
    };
    
     void setCarMaxSpeed(int carMaxSpeed){
        maxSpeed=carMaxSpeed;
    };
    int getCarMaxSpeed(){
      return maxSpeed;  
    };
    
private:
    string carModel;
    int maxSpeed;
};
int main() {
    
    Cars myCar;
    
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
    return 0; 
}
