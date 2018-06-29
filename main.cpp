#include "number.h"
int main(){
RealNumber r1(3.5);
RealNumber r2(4.6);
RealNumber sum_r=r1.add(r2);
RealNumber pro_r=r1.mul(r2);
r1.print();r2.print();
sum_r.print();
pro_r.print();
IntegerNumber i1(2);
IntegerNumber i2(3);
IntegerNumber sum_i=i1.add(i2);
IntegerNumber pro_i=i1.mul(i2);
i1.print();i2.print();
sum_i.print();
pro_i.print();
ComplexNumber c1(1,2.5);
ComplexNumber c2(2.1,2);
ComplexNumber sum_c=c1.add(c2);
ComplexNumber pro_c=c1.mul(c2);
c1.print();c2.print();
sum_c.print();
pro_c.print();
return 0;
}
