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
   // One more problem with this approach is that this may cause ambiguity resolution. Like here, greet function is inherited two times by two base classes. So compiler gets confused to call which one.
   derived d;
   d.greet();
}
