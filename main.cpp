#include <iostream>
#include "BinaryTreeNode.h"
//#include "print.h"
#include "myPrint.h"
using namespace std;
int main() {
	BinaryTreeNode *pNode1 = new BinaryTreeNode(8);
	BinaryTreeNode *pNode2 = new BinaryTreeNode(6);
	BinaryTreeNode *pNode3 = new BinaryTreeNode(10);
	BinaryTreeNode *pNode4 = new BinaryTreeNode(5);
	BinaryTreeNode *pNode5 = new BinaryTreeNode(7);
	BinaryTreeNode *pNode6 = new BinaryTreeNode(9);
	BinaryTreeNode *pNode7 = new BinaryTreeNode(11);

	pNode1->m_pLeft = pNode2;
	pNode1->m_pRight = pNode3;
	pNode2->m_pLeft = pNode4;
	pNode2->m_pRight = pNode5;
	pNode3->m_pLeft = pNode6;
	pNode3->m_pRight = pNode7;

	print(pNode1);

	deleteNode(pNode1);
	deleteNode(pNode2);
	deleteNode(pNode3);
	deleteNode(pNode4);
	deleteNode(pNode5);
	deleteNode(pNode6);
	deleteNode(pNode7);

	return 0;
}
