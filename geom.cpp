#include<iostream>
#include<cmath>
using namespace std;
const float pi= 3.14;
class circle{

private:
float r;
public:
float getP(){
return 2*pi*r;
}
float getA(){
    return pi*r*r;
}
float getR(){
    return r;
}
//constructor function
circle(float rad): r{rad} {}


};
class rectangle{
private:
float l,b;
public:
float getL(){
    return l;
}
float getB(){
    return b;
}
float getP(){
    return 2*(l+b);
}
float getA(){
    return l*b;
}
rectangle(float x,float y): l{x},b{y} {}

};
class triangle{
  
private:
float a,b,c;

public:
float getSideA(){
    return a;
}
float getSideB(){
    return b;
}
float getSideC(){
    return c;
}
float getP(){
    return a+b+c;
}
float getA(){
    float s = (a+b+c)/2;
    return sqrt(s*(s-a)*(s-b)*(s-c));
}
triangle(float x,float y,float z): a{x},b{y},c{z} {}

};
int main(){
circle c(5);
rectangle r(2,5);
triangle t(3,4,5);

cout<<c.getR()<<endl;
cout<<r.getL()<<" "<<r.getB()<<endl;
cout<<t.getSideA()<<" "<<t.getSideB()<<" "<<t.getSideC()<<endl;

cout<<endl;

cout<<"circle: "<<c.getP()<<" "<<c.getA()<<endl;
cout<<"recatangle: "<<r.getP()<<" "<<r.getA()<<endl;
cout<<"triangle: "<<t.getP()<<" "<<t.getA()<<endl;
}