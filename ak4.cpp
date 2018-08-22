# include <iostream>
using namespace std;
int main()
{
int days, weeks, year;
int inputtedDays;
cout <<"convert days in  year, weeks and days\n";
cout <<"input days in integers ";
cin >> inputtedDays;
year = (inputtedDays)/365;
weeks = (inputtedDays%365)/7;
days = (inputtedDays%365)%7;
cout <<" number of year is - "<< year << endl;
cout <<" number of weeks is - "<< weeks << endl;
cout <<" number of days is - "<< days << endl;
return 0;
}
