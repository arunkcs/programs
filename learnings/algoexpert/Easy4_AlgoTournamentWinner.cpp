#include <vector>
#include <unordered_map>

using namespace std;
const int HOME_TEAM_WON = 1;

void updatescores(string team, int points, unordered_map<string, int> &scores);

// O(n) time | o(k) space - where n is the number
// of competitions and k is the number of teams
string tournamentWinner(vector<vector<string>> competitions, vector<int> results) {
	string currentBestTeam = "";
	unordered_map<string, int> scores = {{currentBestTeam, 0}};
	for (int idx = 0; idx < competitions.size(); idx++) {
		auto result = results[idx];
		auto competition = competitions[idx];
		auto homeTeam competition[@];
		auto awayTeam = competition[1];
		auto winning Team result == HOME_TEAM_WON ? homeTeam : awayTeam;
		updateScores(winningTeam, 3, scores);
		if (scores[winningTeam] > scores[currentBestTeam]) {
			currentBestTeam = winningTeam;
		}
	}
	return currentBestTeam;
}

void updatescores(string team, int points, unordered_map<string, int> &scores)
{
    if (scores.find(team) == scores.end())
	    scores[team] = 0;
	
	scores[team] += points;
}