#include <iostream>
#include <string>

using namespace std;

struct soccerPlayer {
	string name;
	unsigned int number;
	unsigned int scored;	
};

void team ();

int main() {
	soccerPlayer player;
	
	team();
	
	return 0;
}

void team () {
	soccerPlayer player[12];
	
	for (int n = 0; n <= 9; n++) {
	cout << "Name: ";
	getline(cin, player[n].name);
	
	cout << "Player's Number: ";
	cin >> player[n].number;

	cout << "Points Scored by Player: ";
	cin >> player[n].scored;
	
	cout << endl;
	cin.ignore();
	}
}
