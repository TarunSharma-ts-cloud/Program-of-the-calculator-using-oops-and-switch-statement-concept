// program of the calculator using oops and swith conept//
#include <iostream>
using namespace std;

class Calculator
{
private:    
    int a,x,z;
public:
 void input()
 {
     cout<<"Enter the first number";
     cin>>a;
     cout<<"Enter the second number";
     cin>>x;
 }
 void add()
 {
     z=a+x;
     cout<<"Addition of two number is "<<z<<endl;
 }
 void sub()
 {
     z=a-x;
     cout<<"Subtraction of two number is "<<z<<endl;
 }
 void mul()
 {
     z=a*x;
     cout<<"Multiplication of two number is "<<z<<endl;
 }
 void div()
 {
     if(x==0){
         cout<<"Invalid";
     }
     else{
     z=a/x;
    cout<<"Divison of two number is "<<z<<endl;
     } 
 }     
void mod()
{ 
    if(x==0){
        cout<<"Invalid";
    }
    else { 
        z=a%x;
        cout<<"Modulus of two number is "<<z<<endl;
          }
}          
};


int main () {
Calculator cal;
int c;
cal.input();
cout<<"\n  press 1. for Addition";
cout<<"\n  press 2. for Subtration";
cout<<"\n  press 3. for Multiplication";
cout<<"\n  press 4. for Divison";
cout<<"\n  press 5. for Modulus";
cout<<"\n  Enter your choice operator";
cin>>c;
switch(c) 
{ 
    case 1:
       cal.add();
       break;
    case 2:
        cal.sub();
        break;
    case 3:
        cal.mul();
        break;
    case 4:
        cal.div();
        break;
    case 5:
        cal.mod();
        break;
    default:
    cout<<"Invalid choice";
}
return 0;
}
    