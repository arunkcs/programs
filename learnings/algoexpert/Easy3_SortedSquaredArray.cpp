#include <vector>
using namespace std;

vector<int> sortedSquaredArray(vector<int> array) {
	vector<int> squares;

	for (int num : array) {
		squares.push_back(pow(num, 2));
	}
	
	sort(squares.begin(), squares.end());

  return squares;
}