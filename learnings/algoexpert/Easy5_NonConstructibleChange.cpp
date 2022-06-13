#include <vector>
using namespace std;

int nonConstructibleChange(vector<int> coins) {	
	int currentChangeCreated = 0;	
	sort(coins.begin(), coins.end());
	
	for (int coin : coins) {
		if (coin > currentChangeCreated + 1) {
			return currentChangeCreated + 1;
		}
		currentChangeCreated += coin;
	}

  return currentChangeCreated + 1;
}