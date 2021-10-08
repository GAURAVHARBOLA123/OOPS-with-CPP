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
	std1::add(5,3.2);
	std2::add(12.4, 13);
}
