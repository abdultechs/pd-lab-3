#include<iostream>
using namespace std;
main()
{

int n,n1,n2,n3,n4;
cout << "enter any four digit number number:  ";
cin >> n;
n1=n%10;
n=n/10;
n2=n%10;
n=n/10;
n3=n%10;
n=n/10;
n4=n%10;
n=n/10;

cout << "sum of digits of numbers is: "<<n1+n2+n3+n4 ;

 

}