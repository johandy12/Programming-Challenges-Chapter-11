#include <iostream>
#include <string>

using namespace std;

struct companyDiv{
 string divName;
 unsigned int sales1;
 unsigned int sales2;
 unsigned int sales3;
 unsigned int sales4;
 float totalSales;
 float averageSales;
};
 
int main(){
 companyDiv div[4];
 string nameDiv[4] = {"East", "West", "North", "South"};
 
 for (int x=0; x<=3; x++){
 cout << nameDiv[x] << endl << endl;
 cout << "First-Quarter Sales  : ";
 cin >> div[x].sales1;
 cout << "Second-Quarter Sales : ";
 cin >> div[x].sales2;
 cout << "Third-Quarter Sales  : ";
 cin >> div[x].sales3;
 cout << "Fourth-Quarter Sales : ";
 cin >> div[x].sales4;
 cout << endl;
 
 div[x].totalSales =  div[x].sales1 + div[x].sales2 + div[x].sales3 + div[x].sales4;
 div[x].averageSales = div[x].totalSales / 4;
 cout << "Total Annual Sales : " << div[x].totalSales;
 cout << endl << "Average Quarterly Sales : " << div[x].averageSales << endl;
 cout << endl << endl;
 }
 
 return 0;
}
