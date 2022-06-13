//My solution

#include <vector>
using namespace std;

bool isValidSubsequence(vector<int> array, vector<int> sequence) {
  int seq_index = 0;
  for (int num : array) {
		if (num == sequence[seq_index]) {
			seq_index++;
		}
	}

	if (sequence.size() == seq_index)
		return true;

  return false;
}