#include<iostream>
using namespace std;
class base{
   int a;
   public:
   base(int num){
   	a = num;
   }
   void printdata1(){
   	cout<<"Value of a = "<<a<<endl;
   }
};

class derived : public base{
   int b;
   public:
   derived(int num1, int num2) : base(num1){
   	b = num2;
   }
   void printdata2(){
   	cout<<"Value of b = "<<b<<endl;
   }
};
int main(){
   derived d(10, 20);
   d.printdata1();
   d.printdata2();
}
