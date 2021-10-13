#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter your choice\n";
    cout<<"1: Date        2: Month         3: Year       4: Time\n"; 
    cin>>n;
    switch(n){
        case 1: cout<<"Date is 13th\n";
        break;
        
        case 2: cout<<"Month is October\n";
        break;
        
        case 3: cout<<"Year is 2021\n";
        break;
        
        case 4: cout<<"Time is 9:50\n";
        break;
    }
}
