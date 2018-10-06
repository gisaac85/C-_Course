#include <iostream>
#include <string>
#include "Cars.h"

using namespace std;
Cars::Cars() {
    cout<<"I am a cons Banana"<<endl;
};
Cars::setSpeed(int n){
    carMaxSpeed=n;
};
Cars::getSpeed(){
    return carMaxSpeed;
};

