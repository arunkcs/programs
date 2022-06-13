using namespace std;

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

int nodeDepthsHelper(BinaryTree *root, int *currentSum, int level);

int nodeDepths(BinaryTree *root) {  
	int sum = 0;
	nodeDepthsHelper(root, &sum, 0);
	return sum;
}

int nodeDepthsHelper(BinaryTree *root, int *currentSum, int level) {
    if (root == nullptr) {
		return *currentSum;
	}
	*currentSum += level;
	nodeDepthsHelper(root->left, currentSum, level+1);
	nodeDepthsHelper(root->right, currentSum, level+1);	
	return *currentSum;
}
