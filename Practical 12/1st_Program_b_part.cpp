#include<iostream>
using namespace std;
// If A class has Private members.
class A{
   int a;
   void printdata(){
   	a = 15;
   	cout<<"Value of a = "<<a<<endl;
   }
};

class B : public A{};

// If A class has Public members.
//class A{
  // public:
   //int a;
   //void printdata(){
   //	a = 15;
   //	cout<<"Value of a = "<<a<<endl;
   //}
//};

//class B : public A{};

//If A class has Protected members.
//class A{
   //protected:
   //int a;
   //void printdata(){
   //	a = 15;
   //	cout<<"Value of a = "<<a<<endl;
  // }
//};

//class B : public A{};

int main(){
   // Private members of base class can't be inherited in dervied class. This will generate an error.
   B b;
   b.printdata();
   
   // Public members of base class are inherited in derived class if visibility mode is public. This will not generate an error.
   //B b;
   //b.printdata();
   
   // Protected members of base class are inherited in derived class but can't be accessed from outside. This will generate an error.
   //B b;
   //b.printdata();
}
