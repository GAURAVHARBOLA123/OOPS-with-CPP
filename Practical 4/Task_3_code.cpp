#include<iostream>
namespace std1{
	void add(int a, int b){
	cout<<"Sum = "<<a + b<<endl;
}
}

namespace std2{
	void add(float a, float b){
	cout<<"Sum = "<<a + b<<endl;
}
}

int main(){
	add(5,3);
	add(12.2, 13.3);
}
