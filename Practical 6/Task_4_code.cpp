#include<bits/stdc++.h>
using namespace std;
int main(){
int l1, l2, n, count = 0;
string s1;
string s2;
cout<<"Enter 1st string\n";
getline(cin, s1);
fflush(stdin);
cout<<"Enter 2nd string\n";
getline(cin, s2);
l1 = s1.length();
l2 = s2.length();
if(l1 == l2){
	for(int i = 0; i < l1; i++){
		if(s1[i] != s2[i]){
			count++;
		}
	}
	if(count>0){
		cout<<"Strings are not equal\n";
	}
	else{
		cout<<"Strings are equal\n";
	}
}
else{
n = l1 - l2;
cout<<"Strings are not equal\n";
cout<<"When the first string is compared with the second return value\n"<<n;
}
}
