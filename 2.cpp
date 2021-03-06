#include <iostream>
#include <string>

using namespace std;

struct nameData {
	string title;
	string director;
	int dateReleased;
	int runningTime;
	double productionCost;
	double firstYearRevenue;
	double total;
}; 

void movieData (nameData, nameData);

int main () {
	nameData movies1;
	nameData movies2;
	
	movieData (movies1, movies2);

	
	return 0;
}

void movieData (nameData movie1, nameData movie2) {
	
		nameData movie[]= {movie1, movie2};
		
		for (int n = 0; n <= 1; n++) {	
		movie[0].title= "Batman";
		movie[1].title= "Superman";
		cout << "Title: " << movie[n].title << endl;
		
		movie[0].director= "Justin";
		movie[1].director= "Johandy";
		cout << "Director: " << movie[n].director << endl;
		
		movie[0].dateReleased= 2015;
		movie[1].dateReleased= 2008;
		cout << "Year Released: " << movie[n].dateReleased << endl;
		
		movie[0].runningTime= 130;
		movie[1].runningTime= 90;
		cout << "Running Time (in minutes): " << movie[n].runningTime << endl;
		
		movie[0].productionCost= 150;
		movie[1].productionCost= 100;
		cout << "Movie's Production Cost: $" << movie[n].productionCost << endl;
		
		movie[0].firstYearRevenue= 200;
		movie[1].firstYearRevenue= 50;
		cout << "First Year Revenue: $" << movie[n].firstYearRevenue << endl;
		
		movie[0].total= movie[0].firstYearRevenue - movie[0].productionCost;
		movie[1].total= movie[1].firstYearRevenue - movie[1].productionCost;
		cout << "Total: $" << movie[n].total;
		
		cout << endl << endl;
	}
}
