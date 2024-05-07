#include <bits/stdc++.h>
using namespace std;
// Dinh nghia cau truc Node
struct Node
{
    int data;
    Node *pLeft;
    Node *pRight;
    int height;
};
// Dinh nghia cay avl
struct AVLTree
{
    Node *root;
};
// Ham khoi tao
void AVLTreeInit(AVLTree &tree)
{
    tree.root = NULL;
}
// Chieu cao cua nut
int height(Node *root)
{
    return root == NULL ? -1 : root->height;
}
// Tao Node
Node *CreateNode(int d)
{
    Node *pNode = new Node;
    pNode->data = d;
    pNode->pLeft = pNode->pRight = NULL;
    pNode->height=0;
    return pNode;
}
//Phep xoay don 1,4
void SingleRotation(Node*&k2){
    Node *k1=k2->pLeft;
    k2->pLeft=k1->pRight;
    k1->pRight=k2;
    k2->height=max(height(k2->pLeft),height(k2->pRight))+1;
    k1->height=max(height(k1->pLeft),k2->height)+1;
    k2=k1;
}
//Phep xoay kep 2,3
void DoubleRotation(Node *&k3){
    SingleRotation(k3->pLeft);
    SingleRotation(k3);
}
//Ham can bang chen/xoa
void balance(Node *&root){
    if(root==NULL) return;
    if(height(root->pLeft)-height(root->pRight)>1){
        if(height(root->pLeft->pLeft)>=height(root->pLeft->pRight))
        SingleRotation(root);
        else
        DoubleRotation(root);
    }else if(height(root->pRight)-height(root->pLeft)>1){
        if(height(root->pRight->pRight)>=height(root->pRight->pLeft))
            SingleRotation(root);
        else
            DoubleRotation(root);
}
root->height=max(height(root->pLeft),height(root->pRight))+1;
}
// Chen nut vao cay
void InsertAVLTree(Node *&root, int d)
{
    Node *pNode = CreateNode(d);
    if (root == NULL)
    {
        root = pNode;
    }
    else if (d < root->data)
            InsertAVLTree(root->pLeft, d);
    else if (d > root->data)
            InsertAVLTree(root->pRight, d);
  balance(root);
}
//Duyet cay
void PreOrder_AVL(Node *root)
{
	if (root != NULL)
	{
		cout << root->data << " ";
		PreOrder_AVL(root->pLeft); 
		PreOrder_AVL(root->pRight);
	}
}
int main()
{
AVLTree tree;
AVLTreeInit(tree);
InsertAVLTree(tree.root,3);
InsertAVLTree(tree.root,2);
InsertAVLTree(tree.root,1);
InsertAVLTree(tree.root,4);
//InsertAVLTree(tree.root,6);

PreOrder_AVL(tree.root);
    system("pause");
    return 0;
}