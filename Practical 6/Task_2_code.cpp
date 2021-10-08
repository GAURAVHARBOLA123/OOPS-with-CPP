#include<iostream>
#include<string>
using namespace std;
int main(){
string s;
int n, j, count = 0;
cout<<"Enter a string\n";
getline(cin, s);
n = s.length();
j= n - 1;
for(int i=0; i <= n/2; i++){
if(s[i] != s[j]){
		count++;
	}
	j--;
}
if(count > 0){
cout<<"NOT A PALLINDROME\n";
}
else{
cout<<"IT IS A PALLINDROME\n";
}
return 0;
}

