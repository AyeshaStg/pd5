#include <iostream>
#include <iomanip>
using namespace std;
float pyramid(int length, int width, int height);
main()
{
int length;
int width;
int height;
string unit;
float Volume;
cout<<"Enter the length of the pyramid:"<<endl;
cin>> length;
cout<<"Enter the width of the pyramid:"<<endl;
cin>> width;
cout<<"Enter the height of pyramid: "<<endl;
cin>> height;
cout<<"Enter the desired output unit(milimeters, centimeters, meters, kilometers): "<<endl;
cin>>unit;
Volume = pyramid(length, width, height);
cout << Volume << endl;
if (unit=="centimeters")

{
   Volume=Volume*100;
}
if (unit=="kilometers")
{
Volume=Volume/1000;
}
if (unit=="milimeters")
{
Volume=Volume*1000;
}
cout<<"The volume of the pyramid is: " <<fixed<<setprecision(6)<<Volume  <<" cubic "<<unit<<endl;
return 0;
}
float pyramid(int length, int width, int height)
{
float volume;
volume=(length*width*height)/3;
return volume;
}





