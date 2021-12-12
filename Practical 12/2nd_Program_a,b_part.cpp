#include<iostream>
using namespace std;
class parent{
   public:
   parent(){
   	cout<<"Parent class constructor called"<<endl;
   }
   
   ~parent(){
	cout<<"Parent class destructor called"<<endl;   	
   }
};

class child : public parent{
   public:
   child(){
      cout<<"Child class constructor called"<<endl;
   }
   
   ~child(){
      cout<<"Parent class destructor called"<<endl;
   }
};
int main(){ 
   child c;
}
