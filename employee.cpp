//Assume that an object represents an employee report that contains information like employee id, total bonus, total overtime in a particular year. Use an array of objects to represent n employees' reports. Write a program that displays the report. Use setpara() member function to set report attributes by passing the arguments and member function displayreport() to show the report according to the parameter passed. Display the report in the following format.

// An employee with ... ... ... has received Rs ... ... ...as a bonus

// and

// had worked ... ... ... hours as overtime in the year ... ... ...

#include<iostream>
#include<vector>
using namespace std;
class emp{
    private:
    int id, hrs,year;
    float bonus;
    public:
    void setPara(int _id,float b, int h,int y) {
        id=_id;
        hrs =h;
        year=y;
        bonus=b;
    }
    void displayReport(){
        cout<<"An employee with id "<<id<<" has recieved Rs "<<bonus<< " as a bonus and had worked "<<hrs<<" hours as overtime in the year "<<year<<endl;
    }

};
int main(){
    int n;
    int id,hrs,year;
    float bonus;
    cout<<"Total employees: "<<endl;
    cin>>n;
    vector<emp> v(n);
    for(int i=0;i<n;i++){
        cout<<"Enter details for employee "<<i+1<<endl;
        cout<<"Enter id, bonus, overtime & year: "<<endl;
        cin>>id;
        cin>>bonus;
        cin>>hrs;
        cin>>year;
        v[i].setPara(id,bonus,hrs,year);

    }
    //printing
    for(int i=0;i<n;i++){
     v[i].displayReport();   
    }

}