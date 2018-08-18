#ifndef MY_PRINT_H
#define MY_PRINT_H
#include <iostream>
#include <queue>
#include "BinaryTreeNode.h"
using namespace std;

void print(BinaryTreeNode *pNode) {
	if (pNode == nullptr)
		return;

	queue<BinaryTreeNode *> nodes;
	int nextLevel = 0;
	int toBePrinted = 1;
	nodes.push(pNode);
	while (!nodes.empty()) {
		BinaryTreeNode *pTemp = nodes.front();
		cout<<pTemp->m_nValue<<" ";
		nodes.pop();

		if (pTemp->m_pLeft != nullptr) {
			nodes.push(pTemp->m_pLeft);
			nextLevel++;
		}
		if (pTemp->m_pRight != nullptr) {
			nodes.push(pTemp->m_pRight);
			nextLevel++;
		}
		toBePrinted--;
		if (toBePrinted == 0) {
			toBePrinted = nextLevel;
			nextLevel = 0;
			cout<<endl;
		}
	}
	cout<<endl;
}

void deleteNode(BinaryTreeNode *pNode) {
	delete pNode;
	pNode = nullptr;
}
#endif
