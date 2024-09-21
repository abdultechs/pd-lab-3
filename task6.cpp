#include<iostream>
using namespace std;
main()
{
float size , cost , area, costppound, costpft;

cout << "Enter the size of bag in pounds:  ";
cin >> size;

cout << "Enter the cost of one bag:  $";
cin >> cost;

cout << "Enter the area covered by one bag:  ";
cin >> area;

costppound = cost/size;
costpft = cost/area;

cout <<"cost of fertilizer per pound is $" <<costppound <<endl;
cout <<"cost of fertilizer per square feet is $" <<costpft;

 
  

}