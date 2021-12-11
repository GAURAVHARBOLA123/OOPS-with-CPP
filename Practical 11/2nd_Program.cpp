#include<iostream>
using namespace std;
class Mammals{
   public:
   void printdata_mammal(){
   	cout<<"I am Mammal"<<endl;
   }	
};

class MarineAnimals{
   public:
   void printdata_marineanimal(){
   	cout<<"I am a Marine Animal"<<endl;
   }
};

class BlueWhale : public Mammals , public MarineAnimals{
   public:
   void printdata_bluewhale(){
   	cout<<"I belong to both categories: Mammals as well as Marine Animals"<<endl;
   } 
};

int main(){
   // Calling mammals by its object.
   Mammals m;
   m.printdata_mammal();
   // Calling marine animals by its object.
   MarineAnimals ma;
   ma.printdata_marineanimal();
   // Calling blue whale by its object.
   BlueWhale bw;
   bw.printdata_bluewhale();
   // Calling mammals and marine animals by blue whale object.
   bw.printdata_mammal();
   bw.printdata_marineanimal();
}
