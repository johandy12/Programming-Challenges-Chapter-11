#include <iostream>
#include <string>

using namespace std;

struct weather{
 int rainfall;
 int highTemperature;
 int lowTemperature;
 float averageTemperature;
};

enum month {January, February, March, April, May, June, July, August, September, October, November, December};

int main(){
 weather monthly[12];
 float totalTemperature;
 int totalRainfall = 0;
 int highest, lowest;
 
 for (int start= January; start<December; start++){
  
  cout << "Rainfall : ";
  cin >> monthly[start].rainfall;
 
  cout << "High Temperature : ";
  cin >> monthly[start].highTemperature;
  
  cout << "Low Temperature : ";
  cin >> monthly[start].lowTemperature;
  cout << endl;
 
  totalRainfall = totalRainfall + monthly[start].rainfall;
  
  
  totalTemperature = monthly[start].highTemperature + monthly[start].lowTemperature;
  monthly[start].averageTemperature = totalTemperature / 2;
  
  cout << "The average monthly temperatures : " << monthly[start].averageTemperature << endl << endl;
 
 }
  highest = -101;
  for (int i=January; i<December; i++){
   if (monthly[i].highTemperature > highest){
    highest = monthly[i].highTemperature;
   }
  }
 lowest = 141;
  for (int i=January; i<December; i++){
   if (monthly[i].lowTemperature < lowest){
    lowest = monthly[i].lowTemperature;
 	}
 }
 
 cout << endl << "The highest temperature for the year : " << highest;
 cout << endl << "The lowest temperature for the year  : " << lowest;
 cout << endl << "Total Rainfall for the year : " << totalRainfall;
 
 return 0;
}
