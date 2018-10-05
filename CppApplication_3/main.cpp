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
   
    myCar.setCarModel("Mazda");
    myCar.setCarMaxSpeed(220);
    cout << myCar.getCarModel();
    cout << myCar.getCarMaxSpeed();
    return 0; 
}
