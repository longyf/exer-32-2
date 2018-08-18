#ifndef PRINT_H
#define PRINT_H
#include <iostream>
#include "BinaryTreeNode.h"
#include <queue>
using namespace std;
void print(BinaryTreeNode *pRoot) {
	if (pRoot == nullptr)
		return;

	queue<BinaryTreeNode *> nodes;
	nodes.push(pRoot);
	int nextLevel = 0;
	int toBePrinted = 1;//这个初始值是为根节点准备的。
	while(!nodes.empty()) {
		BinaryTreeNode *pNode = nodes.front();
		printf("%d", pNode->m_nValue);
		if (pNode->m_pLeft != nullptr) {
			nodes.push(pNode->m_pLeft);
			++nextLevel;
		}
		if (pNode->m_pRight != nullptr) {
			nodes.push(pNode->m_pRight);
			++nextLevel;
		}
		nodes.pop();
		--toBePrinted;
		if (toBePrinted == 0) {
			printf("\n");
			toBePrinted = nextLevel;
		}
	}
	printf("\n");
}

void deleteNode(BinaryTreeNode *pNode) {
	delete pNode;
	pNode = nullptr;
}

#endif
