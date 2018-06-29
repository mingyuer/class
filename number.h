#ifndef NUMBER_H
#define NUMBER_H
#include<iostream>

using namespace std;
class Number{
public:
virtual void print();
virtual Number add(const Number&);
virtual Number mul(const NUmber&);

};

class RealNumber:public Number{
public:
RealNumber(double n=0){
value=n;
}
void print(){
cout<<value<<endl;
}
RealNumber add(const RealNumber& other){
value+=other.value;
return *this;
}
RealNumber mul(const RealNumber& other){
value*=other.value;
return *this;
}
double value;
};
class IntegerNumber:public RealNumber{
public:
IntegerNumber(int n=0){
value=n;
}
IntegerNumber(const RealNumber& num){
value=int(num.value);
}
};
class ComplexNumber:public Number{
public:
ComplexNumber(double a=0,double b=0){
a=a;
b=b;
}
void print(){
if(b>=0)
cout<<a<<"+"<<b<<"i"<<endl;
else
cout<<a<<"-"<<b<<"i"<<endl;
}
ComplexNumber add(const ComplexNumber& other){
a+=other.a;
b+=other.b;
return *this;
}
ComplexNumber mul(const ComplexNumber& other){
a=a*other.a-b*other.b;
b=a*other.b+b*other.a;
return *this;
}
double a;
double b;
};
#endif
