#include<iostream>
using namespace std;

struct node
{
	int val;
	struct node* left;
	struct node* right;

	node(int data)
	{
		val = data;
		left = nullptr;
		right = nullptr;
	}
};

struct node* root = nullptr;

// best way to right <<
#define newNode(val)(new node(val))
#define getLeftChild(node)(node##->left) //## node->left
#define getRightChild(node)(node##->right) //## node->right
#define getVal(node)(node##->val) //## node->val
// << best way to right

void addNodeToTree(struct node* startNode, struct node* newNode)
{
	if (root == nullptr)
	{
		root = newNode;
		return;
	}
	
	if (newNode->val < startNode->val)
	{
		// add to left side of tree
		if (startNode->left == nullptr)
		{
			startNode->left = newNode;
			return;
		}
		addNodeToTree(startNode->left, newNode);
	}

	if (newNode->val > startNode->val)
	{
		// add to right side of tree
		if (startNode->right == nullptr)
		{
			startNode->right = newNode;
			return;
		}
		addNodeToTree(startNode->right, newNode);
	}
	
}


void buildTreeFromArray(int* arrayOfValues, int size)
{
	cout << "build Tree From Array \n";
	for (int i = 0; i < size; i++)
	{
		addNodeToTree(root, new node(arrayOfValues[i])); // new node(arrayOfValues[i]) = newNode(arrayOfValues[i])
	}
}

void printTreeInc(struct node* node)
{
	if (node == nullptr)
		return;
	printTreeInc(node->left); // node->left = getLeftChild(node)
	cout << node->val << "\t"; // node->val = getVal(node)
	printTreeInc(node->right); // node->right = getRightChild(node)
}
void printTreeDec(struct node* node)
{
	if (node == nullptr)
		return;
	printTreeDec(node->right);
	cout << node->val << "\t";
	printTreeDec(node->left);
}

void clearTree(struct node* node)
{
	if (node == nullptr)
		return;
	
	clearTree(node->left);
	clearTree(node->right);
	cout << "delete: " << node->val << endl;
	if (node == root) // إرجاع الروت نود لما كانت عليه قبل بناء الشجرة
		root = nullptr;
	delete node;
}

int main_7()
{
	// binary tree
	buildTreeFromArray(new int[] {5, 3, 2, 4, 9, 7, 10}, 7);

	cout << "print tree in increasing order \n";
	printTreeInc(root);

	cout << "\nprint tree in decreasing order \n";
	printTreeDec(root);

	cout << "\nclear all tree \n";
	clearTree(root);
	

	printTreeInc(root);



	system("pause");
	return 0;
}