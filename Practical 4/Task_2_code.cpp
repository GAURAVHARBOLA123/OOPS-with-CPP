#include<iostream>
namespace std1{
	void add(int a, int b){
	std::cout<<"Sum = "<<a + b<<std::endl;
}
}

namespace std2{
	void add(float a, float b){
	std::cout<<"Sum = "<<a + b<<std::endl;
}
}

int main(){
	using std1 :: add;
	add(12, 5);
	using std2 :: add;
	//add(40.5, 67.2);
}
