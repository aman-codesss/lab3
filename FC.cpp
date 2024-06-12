#include<iostream>
using namespace std;
class Celcius{
    private:
    float temp_c;
    public:
    float toFahrenheit( ){
        return (float) 9/5*temp_c+32;
    }
    float getTemp(){
        return temp_c;
    }
    Celcius(float c){
        temp_c = c;
    }
};
class Fahrenheit{
    private:
    float temp_f;
    public:
    float toCelcius(){
        return (float)5/9*(temp_f-32);
    }
    float getTemp(){
        return temp_f;
    }
    Fahrenheit(float f){
        temp_f = f;
    }
};
int main(){
    Celcius c(37.0);
    Fahrenheit f(-40.0);
   
   //printing
   cout<<c.getTemp()<<" C = "<<c.toFahrenheit()<<" F"<<endl;
   cout<<f.getTemp()<<" F = "<<f.toCelcius()<<" C"<<endl;

}
