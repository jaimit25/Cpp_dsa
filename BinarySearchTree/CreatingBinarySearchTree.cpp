#include <iostream>
#include <stdlib.h>
#include <bits/stdc++.h>
using namespace std;

struct Node
{
	Node *lchild;
	int data;
	Node *rchild;
};

Node *Rsearch(Node *p, int key)
{
	
}

bool Search(int key)
{

	return false;
}

void Inorder(Node *p)
{
	if (p)
	{
		Inorder(p->lchild);
		cout << p->data << " ";
		Inorder(p->rchild);
	}
}

int main()
{

	return 0;
}