#include <iostream>
#include<ctime>
#include<cstdlib>

using namespace std;

int dividedBy(int x,int y);

int main() {
    
    int x;
    int y;
    cout << "$$ DIVEDED X BY Y $$\n=============================="<<endl;
    cout << "\nEnter a first number: ";
    cin >> x;
     cout << "\nEnter a second number: ";
     cin >>y;
     
    dividedBy(x,y);
  
    return 0; 
}

int dividedBy(int x,int y){
    if(y==0){
        cout<<"Divide By 0 is NOT possible!";
    }
    else{
    int res=x/y;
    cout<<x<<"/"<<y<<"="<<res;
    }
}