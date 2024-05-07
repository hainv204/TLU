#include <bits/stdc++.h>
using namespace std;
// Dinh nghia cau truc node
struct TNode
{
	int Data;	   // gia tri
	TNode *pLeft;  // con tro quan li cay con ben trai
	TNode *pRight; // con tro quan li cay con ben phai
};
// Dinh nghia cau truc cay
struct BTree
{
	TNode *root; // con tro toi nut goc
};
// Ham khoi tao
void BTreeInit(BTree &tree)
{
	tree.root = NULL;
}
// Tao Node
TNode *CreateNode(int d)
{
	TNode *pNode = new TNode;
	pNode->Data = d;
	pNode->pLeft = pNode->pRight = NULL;
}
// Kiem tra xem cay rong hay khong
bool BTreeIsEmpty(BTree &tree)
{
	return tree.root == NULL;
}
// Ham them Node vao cay
void InsertNode(BTree &tree, int d)
{
	TNode *pNode = CreateNode(d);
	if (tree.root == NULL)
	{
		tree.root = pNode;
	}
	else
	{
		TNode *tmp = tree.root;
		TNode *parent = NULL; // con tro tro toi nut cha,ban dau gan bang NULL vi chua co cha nao
		while (tmp != NULL)
		{
			parent = tmp;
			if (tmp->Data > pNode->Data) // cha >con
				tmp = tmp->pLeft;
			else
				tmp = tmp->pRight;
		}
		if (parent->Data > pNode->Data)
			parent->pLeft = pNode;
		else
			parent->pRight = pNode;
	} 
}
/*Ham duyet cay nhi phan tim kiem*/
// Duyet theo thu tu truoc
void PreOrder_NLR(TNode *root)
{
	if (root != NULL)
	{
		cout << root->Data << " ";
		PreOrder_NLR(root->pLeft); 
		PreOrder_NLR(root->pRight);
	}
}
// Duyet theo thu tu sau
void PostOrder_LRN(TNode *root)
{
	if (root != NULL)
	{
		PostOrder_LRN(root->pLeft);
		PostOrder_LRN(root->pRight);
		cout << root->Data << " ";
	}
}
// Duyet theo thu tu giua
void InOrder_LNR(TNode *root)
{
	if (root != NULL)
	{
		InOrder_LNR(root->pLeft);
		cout << root->Data << " ";
		InOrder_LNR(root->pRight);
	}
}
// Ham dem Node
int CountNode(TNode *root)
{
	if (root == NULL)
		return 0;
	else
		return 1 + CountNode(root->pLeft) + CountNode(root->pRight);
}
// Ham dem Node co du 2 con
int CountNode2(TNode *root)
{
	if (root == NULL)
		return 0;
	if ((root->pLeft != NULL) && (root->pRight != NULL))
		return 1 + CountNode2(root->pLeft) + CountNode2(root->pRight);
}
// Ham dem Node la
int CountLeaf(TNode *root)
{
	if (root != NULL)
	{
		if (root->pLeft == NULL & root->pRight == NULL)
			return 1;
		else
			return CountLeaf(root->pLeft) + CountLeaf(root->pRight);
	}
	else
		return 0;
}
// Ham tinh chieu cao
int max(int a, int b)
{
	return a > b ? a : b;
}
int Height(TNode *root)
{
	if (root == NULL)
		return 0;
	else
		return 1 + max(Height(root->pLeft), Height(root->pRight));
}
// Tim gia tri co trong cay hay khong
TNode *Search(TNode *root, int d)
{
	if ((root == NULL) || (root->Data == d))
		return root;
	else if (d < root->Data)
		Search(root->pLeft, d);
	else if (d > root->Data)
		Search(root->pRight, d);
}
/*Tim max,min trong cay*/
// Tim max
int MaxTree(TNode *root)
{
	if (root == NULL)
		return INT_MIN;
	if (root->pRight == NULL)
	{
		return root->Data;
	}
	else
	{
		return MaxTree(root->pRight);
	}
}
// Tim min
int MinTree(TNode *root)
{
	if (root == NULL)
		return INT_MAX;
	if (root->pLeft == NULL)
	{
		return root->Data;
	}
	else
	{
		return MinTree(root->pLeft);
	}
}

/*Xoa nut max,min cua cay*/
// Xoa max
void DelMax(TNode *&root)
{
	if (root == NULL)
		return;
	if (root->pRight == NULL)
	{
		TNode *left = root->pLeft;
		delete root;
		root = left;
	}
	else
	{
		DelMax(root->pRight);
	}
}
// Xoa min
void DelMin(TNode *&root)
{
	if (root == NULL)
		return;
	if (root->pLeft == NULL)
	{
		TNode *right = root->pRight;
		delete root;
		root = right;
	}
	else
	{
		DelMin(root->pLeft);
	}
}
// Xoa rong cay
void DelNode(TNode *&root)
{
	if (root == NULL)
		return;
	DelNode(root->pLeft);
	DelNode(root->pRight);
	delete root;
	root = NULL;
}
int main()
{
	BTree tree;
	BTreeInit(tree);
	// 1.Tao ra mot cay co 9 nut
	InsertNode(tree, 8);
	cout<<"Dia chi cua nut goc(8):"<<tree.root<<endl;//dia chi nut goc o day luon luon la nut 8
	InsertNode(tree, 10);
	InsertNode(tree, 5);
	InsertNode(tree, 4);
	InsertNode(tree, 6);
	InsertNode(tree, 9);
	InsertNode(tree, 15);
	InsertNode(tree, 1);
	InsertNode(tree, 2);
	/*2.Duyet theo thu tu truoc,sau,giua*/
	// Duyet cay theo thu tu truoc
	cout << "Duyet cay theo thu tu truoc: ";
	PreOrder_NLR(tree.root);
	// Duyet cay theo thu tu sau
	cout << "\nDuyet cay theo thu tu sau: ";
	PostOrder_LRN(tree.root);
	// Duyet cay theo thu tu giua
	cout << "\nDuyet cay theo thu tu giua: "; // se thanh day sap xep ma ta khong can sd day sap xep nao
	InOrder_LNR(tree.root);
	// 3,4.Kiem tra gia tri d co trong cay khong
	int d;
	cout << "\nNhap gia tri can tim: ";
	cin >> d;
	if (Search(tree.root, d))
		cout << "Tim thay gia tri " << d << " trong cay";
	else
		cout << "Gia tri khong co trong cay";
	// Dem Node
	cout << "\nSo nut tren cay: " << CountNode(tree.root);
	// 5.Dem Node la
	cout << "\nSo nut la tren cay: " << CountLeaf(tree.root);
	// 6.Dem Node co du 2 con
	cout << "\nSo nut co du 2 con: " << CountNode2(tree.root);
	// 6.Xoa rong cay
	DelNode(tree.root);

	cout << endl;
	system("PAUSE"); // dung man hinh
	return 0;
}
