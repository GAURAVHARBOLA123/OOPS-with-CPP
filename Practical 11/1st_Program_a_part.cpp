#include<iostream>
using namespace std;
class base{
   int a;
   public:
   void setdata1(int num1){
   	 a = num1;
   }
   void printdata1(){
   	cout<<"Value of a = "<<a<<endl;
   }
};

class derived : public base{
   int b;
   public:
   void setdata2(int num2){
   	setdata1(23);
   	printdata1();
   	b = num2;
   }
   void printdata2(){
   	cout<<"Value of b = "<<b<<endl;
   }
};

int main(){
   derived d;
   d.setdata2(25);
   d.printdata2();
}

