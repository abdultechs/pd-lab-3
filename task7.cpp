#include<iostream>
using namespace std;
main()
{
string name ;
int atickets, ctickets;
float total, remaining ,percentage,donation, p1, p2;

cout <<"Enter name of movie:  ";
cin >> name;

cout << "enter number of adult tickets sold: ";
cin >> atickets;

cout << "enter number of child tickets sold: ";
cin >> ctickets;

cout << "enter the price of adult tickets: $";
cin >> p1;


cout << "enter the price of child tickets : $";
cin >> p2;


cout << "Enter the percentage of donation:  ";
cin >> percentage;


total = (atickets*p1)+(ctickets*p2);
donation = total*(percentage/100);
remaining = total-donation;

cout << "Movie Nnme: " << name<<endl;
cout << "total amount = $" << total<<endl; 
cout << "donation to chairity by " <<percentage <<"% = $" << donation <<endl;
cout << "remaining amount = $" <<remaining<<endl;




 
  

}