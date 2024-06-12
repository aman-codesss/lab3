#include<iostream>
using namespace std;
class primeOrNot{
    private:
    int num;

    public:
    bool isPrime(){
        if (num<0) return false;
        for(int i=2;i<num;i++){
            if(num%i==0) return false;
        }
        return true;
    }
    primeOrNot(int n){
        num = n;
    }

};
int main(){
    int n;
    char ch;
    do{
    cout<<"Enter a number: "<<endl;
    cin>>n;
    primeOrNot p(n);
    if(p.isPrime()){
        cout<<"Prime"<<endl;
    }
    else{
        cout<<"Not prime"<<endl;
    }
    cout<<"Want more (y/n)?"<<endl;
    cin>>ch;
    }while(ch=='y' || ch=='Y');
}