#include<iostream>
using namespace std;
main()
{
int n , mints, t ;
cout << "enter total number of minutes..";
cin >> mints;

cout << "enter number of frames per second.. ";
cin >> n;

t = mints*60*n;

cout << "total number of frames = " << t ;

 

}