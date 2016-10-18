#include <iostream>
#include <string>

using namespace std;

struct weather{
 int rainfall;
 int highTemperature;
 int lowTemperature;
 float averageTemperature;
};

int main(){
 weather monthly[12];
 float totalTemperature;
 int totalRainfall = 0;
 int highest, lowest;
 
 for (int x=0; x<12; x++){
  
  cout << "Total Rainfall : ";
  cin >> monthly[x].rainfall;
 
  cout << "High Temperature : ";
  cin >> monthly[x].highTemperature;
  
  cout << "Low Temperature : ";
  cin >> monthly[x].lowTemperature;
  cout << endl;
 
  totalRainfall = totalRainfall + monthly[x].rainfall;
  
  
  totalTemperature = monthly[x].highTemperature + monthly[x].lowTemperature;
  monthly[x].averageTemperature = totalTemperature / 2;
  
  cout << "The average monthly temperatures : " << monthly[x].averageTemperature << endl << endl;
 
 }
  highest = -101;
  for (int i=0; i<12; i++){
   if (monthly[i].highTemperature > highest){
    highest = monthly[i].highTemperature;
   }
  }
 lowest = 141;
  for (int i=0; i<12; i++){
   if (monthly[i].lowTemperature < lowest){
    lowest = monthly[i].lowTemperature;
 	}
 }
 
 cout << endl << "The highest temperature for the year : " << highest;
 cout << endl << "The lowest temperature for the year  : " << lowest;
 cout << endl << "Total Rainfall for the year : " << totalRainfall;
 
 return 0;
}
