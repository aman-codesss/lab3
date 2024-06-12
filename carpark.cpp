//Create a class called carpark that has int data member for car id, int data member for charge/hour, and float data member for the parked time. Make functions to set data members and show the charges and parked hours of the corresponding car id. Make functions for setting and showing the data members. Member function should be called from other functions.
#include<iostream>
using namespace std;
class carpark{
    private:
    int car_id,rate;
    float t_hour;
    public:
    void setDetails(int id,int r, float h){
        car_id = id;
        rate=r;
        t_hour=h;
    }
    void showDetails(){
        cout<<"Car id: "<<car_id<<endl;
        cout<<"Parked hours: "<<t_hour<<endl;
        cout<<"Rate:"<<rate<<endl;
        cout<<"Charge: "<<rate*t_hour<<endl;
    }

};
void carAbouts(carpark &c){
    c.setDetails(1,200,5.3);
    c.showDetails();
}
int main(){
carpark c;
carAbouts(c);

}