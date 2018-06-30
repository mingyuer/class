#ifndef NUMBER_H
#define NUMBER_H
#include<iostream>

using namespace std;
class Number{
public:
Number(){};
virtual void print(){};
virtual Number add(const Number&){};
virtual Number mul(const Number&){};

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
return RealNumber(value+other.value);

}
RealNumber mul(const RealNumber& other){
return RealNumber(value*other.value);
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
ComplexNumber(double a1,double b1){
a=a1;
b=b1;
}
void print(){
if(b>=0)
cout<<a<<"+"<<b<<"i"<<endl;
else
cout<<a<<"-"<<b<<"i"<<endl;
}
ComplexNumber add(const ComplexNumber& other){
return ComplexNumber(a+other.a,b+other.b);

}
ComplexNumber mul(const ComplexNumber& other){
return ComplexNumber(a*other.a-b*other.b,a*other.b+b*other.a);

}
double a;
double b;
};
#endif
