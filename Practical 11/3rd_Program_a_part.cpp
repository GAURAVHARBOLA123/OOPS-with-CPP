#include<iostream>
using namespace std;
class base{
   public:
   int a;
   void printdata1(){
   	cout<<"Value of a = "<<a<<endl;
   }
};

class derived1 : public base{
   public:
   int b;
   void printdata2(){
   	cout<<"Value of b = "<<b<<endl;
   }
};

class derived2 : public base{
   public:
   int c;
   void printdata3(){
   	cout<<"Value of c = "<<c<<endl;
   }
};

class derived : public derived1 , public derived2{
   public:
   int d;
   void printdata4(){
   	cout<<"Value of d = "<<d<<endl;
   }
};

int main(){
   // This is diamond problem in which, while using multiple inheritance the data member a of class base is inherited twice in class derived via derived1 and derived2. To solve this problem we use virtual base classes.
   derived d;
   d.a = 10;
   d.printdata1();
}
