#include <iostream>
using namespace std;
float calculator(char, float);
main()
{
float itemprice;
char vehiclecode;
float finalprice;
cout<<"Enter the vehicle type code (M, E, S, V, T): "<<endl;
cin>> vehiclecode;
cout<<"Enter the price of the vehicle: "<<endl;
cin>> itemprice;
finalprice= calculator(vehiclecode, itemprice);
cout<<"The final price of a vehicle of type "<<vehiclecode <<" after adding the tax is "<< "$"<<finalprice<<endl;
return 0;
}
float calculator(char vehiclecode, float itemprice)
{
float taxamount;
float final;
if(vehiclecode=='M')
{
  taxamount=itemprice*(6.0/100.0);
}
if(vehiclecode=='E')
{
 taxamount=itemprice*(8.0/100.0);
}
if(vehiclecode=='S')
{
 taxamount=itemprice*(10.0/100.0);
}
if(vehiclecode=='V')
{
 taxamount=itemprice*(12.0/100.0);
}
if(vehiclecode=='T')
{
 taxamount=itemprice*(15.0/100.0);
}
 final=itemprice+taxamount;
 return final;
}
