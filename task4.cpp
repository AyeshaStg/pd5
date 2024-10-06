#include <iostream>
#include <string>
using namespace std;
int projecttimecalculation(int, int, int);
main()
{
int days;
int n_hours;
int workers;
int result;
cout<<"Enter the needed hours: "<<endl;
cin>> n_hours;
cout<<"Enter the days that the firm has: "<<endl;
cin>> days;
cout<<"Enter the number of all workers: "<<endl;
cin>> workers;
projecttimecalculation(n_hours, days, workers);
return 0;
}
int projecttimecalculation(int n_hours, int days, int workers)
{
int difference;
int t_hours;
int t_days;
int w_hours;
t_days=days*10;
w_hours=t_days-(t_days*0.1);
t_hours=w_hours*workers;
difference=n_hours-t_hours;
if(n_hours>t_hours)
{
difference=n_hours-t_hours; 
cout<<"Not enough time "<<difference<<" hours are needed.";
}
if(n_hours<t_hours)
{
difference=t_hours-n_hours;
cout<<"Yes!"<<difference<<" hours left.";
}
}




