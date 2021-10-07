#include<iostream>
using namespace std;
int main(){
	short s;
	s = 12;
	cout << "Short data type size "<<sizeof(short)<<endl;
    cout << "Short Variable size "<<sizeof(s)<<endl;
	
	int a;
	a = 100;
	cout << "Integer data type size "<<sizeof(int)<<endl;
    cout << "Integer Variable size "<<sizeof(a)<<endl;
	
	long l;
	l = 134245;
	cout << "Long data type size "<<sizeof(long)<<endl;
    cout << "Long Variable size "<<sizeof(l)<<endl;
	
	float f;
	f = 12.22;
	cout << "Float data type size "<<sizeof(float)<<endl;
    cout << "Float Variable size "<<sizeof(f)<<endl;
	
	double d;
	d = 12.34625;
	cout << "Double data type size "<<sizeof(double)<<endl;
    cout << "Double Variable size "<<sizeof(d)<<endl;
	
	char c;
	c = 'G';
	cout << "Character data type size "<<sizeof(char)<<endl;
    cout << "Character Variable size "<<sizeof(c)<<endl;
	
	bool b;
	b = 1;
	cout << "Boolean data type size "<<sizeof(bool)<<endl;
    cout << "Boolean Variable size "<<sizeof(b)<<endl;
	
	long double ld;
	ld = 1234.44255;
	cout << "Long Double data type size "<<sizeof(long double)<<endl;
    cout << "Long Double Variable size "<<sizeof(ld)<<endl;
	
	wchar_t w;
	w = L'A';
	cout << "Wide Character data type size "<<sizeof(wchar_t)<<endl;
    cout << "Wide Character Variable size "<<sizeof(w)<<endl;
}
