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
	int playerTotal= player[1].scored + player[2].scored + player[3].scored + player[4].scored + player[5].scored
	 				+ player[6].scored + player[7].scored + player[8].scored + player[9].scored + player[10].scored
					+ player[11].scored + player[12].scored;
	
	cout << "Total Points Earned by the Team: " << playerTotal << endl;
	
	int highestPoints= player[0].scored;
	string highestName= player[0].name;
	int highestNumber= player[0].number;
	
	for (int check = 0; check <=11; check++) {
		if (player[check].scored > highestPoints) {
			highestPoints= player[check].scored;
			highestName= player[check].scored;
			highestNumber= player[check].scored;
		}
	}
	
	cout << "Player who earned the most point is: " << highestName << endl << "Number: " << highestNumber;
}
