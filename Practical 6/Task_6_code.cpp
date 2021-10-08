#include<iostream>
#include<string>
using namespace std;
int main(){
string str = "Hello";
cout<<"Orignal string is :\n";
cout<<str<<endl;
cout<<&str<<endl;
str[0] = 'J';
cout<<&str<<endl;
cout<<str<<endl;
return 0;
}
