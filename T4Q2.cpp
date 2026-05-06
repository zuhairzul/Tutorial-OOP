
#include <iostream> 
using namespace std; 
class Temperature  
{ 
private: 
    double tempCel;
    double tempFar;

public: 
    Temperature() {
        tempCel = 0;
        tempFar = 32;
    }; 

    Temperature (char type, double value){
    
    if (type == 'C' || type == 'c')
    {
        tempCel = value;
        tempFar = (9.0 / 5.0) * value + 32;
    }
    else if (type == 'F' || type == 'f')
    {
        tempFar = value;
        tempCel = (value - 32) * 5.0 / 9.0;
    }
    else
    {
        tempCel = 0;
        tempFar = 32;
    }
    };
    
    double getCels() {  
    return tempCel;
    };

    double getFar() {
    return tempFar;
    };

    void equal(Temperature other) {
    tempCel = other.tempCel;
    tempFar = other.tempFar;
    };
};

int main() 
{ 
    Temperature t1('C',100),t2('F',100); 
    
    cout<<"t1 = "<<t1.getCels()<<" C\n"; 
    cout<<"t1 = "<<t1.getFar()<<" F\n"; 
    
    cout<<"t2 = "<<t2.getCels()<<" C\n"; 
    cout<<"t2 = "<<t2.getFar()<<" F\n"; 
    
    t1.equal(t2);   
    cout<<"After assigning t2 to t1"<<endl; 
    
    cout<<"t1 = "<<t1.getCels()<<" C\n"; 
    cout<<"t1 = "<<t1.getFar()<<" F\n"; 
    
    return 0;
}
