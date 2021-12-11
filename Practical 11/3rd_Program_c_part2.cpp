#include<iostream>
using namespace std;
class base1{
   public:
   int a;
   void greet(){
   	cout<<"Good Morning from Base1 class"<<endl;
   }
};

class base2{
   public:
   int a;
   void greet(){
   	cout<<"Good Morning from Base2 class"<<endl;
   }
};


class derived : public base1 , public base2{};

int main(){
   // This ambiguity resolution can be solved using scope resolution operator(::).
   derived d;
   d.base2::greet();
}
