#include <bits/stdc++.h>
using namespace std;
int main(){
string s1, s2;
char a, b;
int x, d;
cout<<"Enter 1st strings\n";
getline(cin, s1);
fflush(stdin);
cout<<"Enter 2nd strings\n";
getline(cin, s2);
x = s1.compare(s2);
cout<<x<<endl;
cout<<"Enter two characters\n";
cin>>a>>b;
d = (int)a-(int)b;
cout<<d;
return 0;
}
