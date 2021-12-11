#include<iostream>
using namespace std;
class base{
   int a;
   public:
   void setdata1(int num){
   	 a = num;
   }
   void printdata1(){
   	cout<<"Value of a = "<<a<<endl;
   }
};

class derived : public base{
   int b;
   public:
   void setdata2(){
   	b = 10;
   }
   void printdata2(){
   	cout<<"Value of b = "<<b<<endl;
   }
};

int main(){
   derived d;
   d.setdata1(12);
   d.printdata1();
   d.setdata2();
   d.printdata2();
}

