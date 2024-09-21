#include<iostream>
using namespace std;
main()
{
int fkg , vegkg;
float fprice , vegprice , total ;




cout << "Enter vegitable price per kg(in coins): ";
cin >> vegprice;



cout << "Enter friut price per kg(in coins): ";
cin >> fprice;

cout << "enter total kg of fruits:  ";
cin >> fkg;




cout << "enter total kg of vegitables:  ";
cin >> vegkg;



total = (fprice*fkg)+(vegprice*vegkg);
total  = total/1.94;


cout <<"your toatal earning in RPs = " << total;




}