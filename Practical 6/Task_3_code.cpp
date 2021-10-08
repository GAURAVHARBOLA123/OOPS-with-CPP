#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
int n;
string s1, s2;
cout<<"Enter a string\n";
getline(cin, s1);
n = s1.length();
string:: reverse_iterator rit;
cout<<"Reversing string by reverse_iterator"<<endl;
for(rit = s1.rbegin(); rit != s1.rend(); rit++){
s2 = s2 + *rit;
}
cout<<s2<<endl;
cout<<"Reversing string by reverse method"<<endl;
reverse(s1.begin(), s1.end());
cout<<s1<<endl;
}
