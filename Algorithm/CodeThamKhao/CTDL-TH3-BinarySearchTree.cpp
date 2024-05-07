// Thuc hanh cay nhi phan tim kiem

#include <iostream>
#include <string>

using namespace std;

// Kieu cua cac nut tren cay (chua thong tin ve mot sinh vien).
struct Node
{
	int maSV;     // Ma sinh vien
	string hoTen; // Ho ten sinh vien
	Node * left;  // Con tro toi nut con trai
	Node * right; // Con tro toi nut con phai
};

// Cay nhi phan tim kiem (chua thong tin sinh vien)
struct SVTree
{
	Node * root; // Con tro toi nut goc cua cay
};

// Ham khoi tao cay (ban dau cay rong)
void treeInit(SVTree & tree);

// Ham huy (xoa het cac nut tren cay)
void treeDestroy(SVTree & tree);

// Kiem tra cay co rong hay khong
bool treeIsEmpty(SVTree & tree);

// Xoa het cac nut tren cay
void treeMakeEmpty(SVTree & tree);

// Xoa rong cay (t la goc cua cay)
void treeMakeEmpty(Node * & t);

// Chen mot sinh vien moi vao cay
void treeInsert(SVTree & tree, int maSV, string hoTen);

// Chen mot sinh vien moi vao cay (t la goc cua cay)
void treeInsert(int maSV, string hoTen, Node * & t);

// Tim sinh vien theo ma SV
Node * treeSearch(SVTree & tree, int maSV);

// Tim sinh vien theo ma SV (t la goc cua cay)
Node * treeSearch(int maSV, Node * t);

// YEU CAU THUC HANH
//   1. Khai bao cac ham duyet cay theo thu tu truoc, giua va sau
//   2. Khai bao cac ham dem so nut, so nut la va so nut co du 2 con

// VIET CODE CUA BAN O DAY
// ...

int main()
{
	SVTree tree;
	
	treeInit(tree);
	
	// YEU CAU THUC HANH
	//   1. Viet code chen chen 7-8 sinh vien vao cay
	//   2. Viet code tim sinh vien theo ma sinh vien:
	//       - Neu tim thay, in ho ten sinh vien len man hinh
	//       - Neu khong tim thay, thong bao khong tim duoc
	//   3. Viet code duyet cay theo thu tu truoc, giua va sau
	//   4. Viet code dem so nut, so nut la va so nut co du 2 con
	//   5. Viet code xoa rong cay
	//   6. Viet code kiem tra xem cay da rong hay chua
	
	// VIET CODE CUA BAN O DAY
	// ...
	
	treeDestroy(tree);
	
	return 0;
}

void treeInit(SVTree & tree)
{
	tree.root = NULL;
}

void treeDestroy(SVTree & tree)
{
	treeMakeEmpty(tree);
}

bool treeIsEmpty(SVTree & tree)
{
	return (tree.root == NULL);
}

void treeMakeEmpty(SVTree & tree)
{
	treeMakeEmpty(tree.root);
}

void treeMakeEmpty(Node * & t)
{
	if (t == NULL)           // Cay da rong roi thi thoat ra
		return;
	
	treeMakeEmpty(t->left);  // Xoa rong cay con trai
	treeMakeEmpty(t->right); // Xoa rong cay con phai
	delete t;			     // Xoa nut goc
	t = NULL;                // Khi cay rong thi phai cho t bang NULL
}

void treeInsert(SVTree & tree, int maSV, string hoTen)
{
	treeInsert(maSV, hoTen, tree.root);
}

void treeInsert(int maSV, string hoTen, Node * & t)
{
	if (t == NULL) // Cay dang rong thi nut moi se thanh nut goc
	{
		t = new Node;
		t->maSV = maSV;
		t->hoTen = hoTen;
		t->left = NULL;
		t->right = NULL;
	}
	else if (maSV < t->maSV)
		treeInsert(maSV, hoTen, t->left);
	else if (maSV > t->maSV)
		treeInsert(maSV, hoTen, t->right);
	else
		; // Ma SV da ton tai, khong lam gi ca
}

Node * treeSearch(SVTree & tree, int maSV)
{
	return treeSearch(maSV, tree.root);
}

Node * treeSearch(int maSV, Node * t)
{
	if (t == NULL)
		return NULL;
	
	if (maSV < t->maSV)
		return treeSearch(maSV, t->left);
	else if (maSV > t->maSV)
		return treeSearch(maSV, t->right);
	else
		return t;
}

// YEU CAU THUC HANH
//   1. Dinh nghia cac ham duyet cay theo thu tu truoc, giua va sau
//   2. Dinh nghia cac ham dem so nut, so nut la va so nut co du 2 con

// VIET CODE CUA BAN O DAY
// ...

