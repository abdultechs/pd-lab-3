#include<iostream>
using namespace std;
main()
{
float ivelocity, fvelocity, time ,acc;
cout << "enter the value of initial velocity (m/s)..";
cin >> ivelocity;
cout << "enter the value of acceleration(m/s^2)..";
cin >> acc;
cout << "enter the value of time..(sec)";
cin >> time;

fvelocity = (acc*time)+ivelocity;
cout << "final velocity = " << fvelocity << " m/s";
 

}