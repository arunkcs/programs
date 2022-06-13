using namespace std;

// This is the class of the input root. Do not edit it.
class BinaryTree {
public:
  int value;
  BinaryTree *left;
  BinaryTree *right;

  BinaryTree(int value) {
    this->value = value;
    left = nullptr;
    right = nullptr;
  }
};

void branchSumsHelper(BinaryTree *root, vector<int> &branchSum, int runningSum);

vector<int> branchSums(BinaryTree *root) {
	vector<int> branchSum;
	branchSumsHelper(root, branchSum, 0);
	return branchSum;
}

void branchSumsHelper(BinaryTree *root, vector<int> &branchSum, int runningSum) {
	if(root == nullptr) {
	  return;
	}
	int sum = runningSum + root->value;
	if (root->left == nullptr && root->right == nullptr) {
	  branchSum.push_back(sum);
	  return;
	}
	branchSumsHelper(root->left, branchSum, sum);
	branchSumsHelper(root->right, branchSum, sum);
}