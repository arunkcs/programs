// Algoexpert solution

#include <vector>
#include <unordered set> 
using namespace std; 

// 0(n) time 1 0(n) s: 

vector<int> twoNumberSum(vector<int> array, int targetsum) { 
    unordered_set<int> nums;
	for (int num : array) {
	    int potentialMatch = targetsum - num; 
		if (nums.find(potentialMatch) != nums.end()) { 
		    return vector<int>{potentialMatch, num}; 
		} 
		else { 
		    nums.insert(num); 
		}
	}
	return {};
}

// My solution

#include <vector>
using namespace std;

vector<int> twoNumberSum(vector<int> array, int targetSum) {
  // Write your code here.	
	for (auto i = array.begin(); i!= array.end(); i++)
	{
		for (auto j = array.begin(); j != array.end(); j++)
		{
			if (i == j)
				continue;
			if (*i + *j == targetSum)
			{				
				return vector<int> {*i, *j};
			}
		}
	}
  return {};
}