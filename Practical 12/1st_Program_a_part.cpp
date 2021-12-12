#include<iostream>
using namespace std;
// If A class has Private members.
//class A{
   //int a;
   //void printdata(){
   //	a = 30;
   //	cout<<"Value of a = "<<a<<endl;
  // }
//};

//class B : public A{
   //public:
   //void printdata2(){
   //	cout<<"Entered class B function"<<endl;
   //	printdata();
  // }
//};

// If A class has Public members.
//class A{
   //public:
   //int a;
   //void printdata(){
   //	a = 30;
   //	cout<<"Value of a = "<<a<<endl;
  // }
//};

//class B : public A{
   //public:
   //void printdata2(){
   //	cout<<"Entered class B function"<<endl;
   //	printdata();
  // }
//};

// If A class has Protected members.
class A{
   protected:
   int a;
   void printdata(){
   	a = 30;
   	cout<<"Value of a = "<<a<<endl;
   }
};

class B : public A{
   public:
   void printdata2(){
   	cout<<"Entered class B function"<<endl;
   	printdata();
   }
};

int main(){
   // Private Members of base class can't be inherited. This will generate error.
   //B b;
   //b.printdata2();
   
   // Public Members of base class are inherited in derived class. This will not generate an error.
   //B b;
   //b.printdata2();
   
   //Protected Members of base class are inherited but it can't be accessed from outside. Here it wil not generate error since we are calling class B and class B is calling A.
   B b;
   b.printdata2();   
}
