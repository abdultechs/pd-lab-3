#include<iostream>
using namespace std;
main()
{

float sq,w,h;
int n,nw; 
//n= number of square meters you can paint
//nw= number of walls that can be painted

cout << "Enter the number of sqaure meter that be painted:   ";
cin >> n;

cout << "Enter the width of wall:   ";
cin >> w;

cout << "Enter the height of wall:   ";
cin >> h;

sq = w*h;

nw = n/sq;

cout <<"number of walls that can painted:  " << nw ;




 

}