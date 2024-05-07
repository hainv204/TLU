
// Cau truc du lieu danh sach lien ket don

#include <iostream>
using namespace std;

typedef int T;

struct Node {
    T elem;
    Node * next;
};

struct List {
    Node * head;
};

// Khoi tao danh sach
void listInit(List & list);

// Huy danh sach
void listDestroy(List & list);

// Kiem tra danh sach rong
bool listIsEmpty(List & list);

// Lay phan tu dau danh sach
T listFront(List & list);

// Chen vao dau danh sach
void listPushFront(List & list, T e);

// Xoa phan tu dau danh sach
void listPopFront(List & list);

int main()
{
	// Khai bao bien danh sach
	List list;	

	// Khoi tao danh sach
	listInit(list);	

	// Chen mot so phan tu vao dau danh sach
	listPushFront(list, 4); // 4
	listPushFront(list, 8); // 8 -> 4
	listPushFront(list, 3); // 3 -> 8 -> 4
	listPushFront(list, 9); // 9 -> 3 -> 8 -> 4
	listPushFront(list, 5); // 5 -> 9 -> 3 -> 8 -> 4

	// In phan tu dau danh sach
	cout << "Phan tu dau: " << listFront(list) << endl;

	// Xoa phan tu dau danh sach
	listPopFront(list); // 9 -> 3 -> 8 -> 4

	// In cac phan tu trong danh sach
	Node * p = list.head;
	while (p != NULL)
	{
		cout << p->elem << " ";
		p = p->next;
	}
	cout << endl;
	
	// Kiem tra danh sach rong
	cout << "Danh sach dang rong? ";
	cout << (listIsEmpty(list) ? "YES" : "NO") << endl;
	
	// Huy danh sach
	listDestroy(list);
	
	return 0;
}

void listInit(List & list) {
    list.head = NULL;
}

void listDestroy(List & list) {
    while (!listIsEmpty(list))
        listPopFront(list);
}

bool listIsEmpty(List & list) {
    return (list.head == NULL);
}

T listFront(List & list) {
    return list.head->elem;
}

void listPushFront(List&list, T e) {
    Node * v = new Node;
    v->elem = e;
    v->next =list.head;
	list.head = v;
}

void listPopFront(List & list) {
    Node * old = list.head;
    list.head = list.head->next;
    delete old;
}

