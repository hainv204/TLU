
// Thuc hanh Vector

#include <iostream>

using namespace std;

typedef int T;

struct Vector {
    int size;
    int capacity;
    T * array;
};

// Khoi tao vector
void vecInit(Vector & vec, int initCapacity = 16);

// Huy vector
void vecDestroy(Vector & vec);

// Sao chep vector
void vecCopy(Vector & vec, Vector & vec2);

// Lay kich thuoc vector
int  vecGetSize(Vector & vec);

// Kiem tra vector rong
bool vecIsEmpty(Vector & vec);

// Lay phan tu
T vecGetElem(Vector & vec, int index);

// Cap nhat phan tu
void vecSetElem(Vector & vec, int index, T newValue);

// Tang dung luong vector
void vecExpand(Vector & vec, int newCapacity);

// Chen vao cuoi vector
void vecPushBack(Vector & vec, T newElement);

// Chen vao giua vector
void vecInsert(Vector & vec, int pos, T newElement);

// Xoa phan tu cuoi vector
void vecPopBack(Vector & vec);

// Xoa tat ca cac phan tu
void vecClear(Vector & vec);

// Xoa phan tu o giua vector
void vecErase(Vector & vec, int pos);

// YEU CAU THUC HANH
//   Khai bao cac ham thuc hien cac viec sau:
//     1. Lay dung luong cua vector
//     2. Cat bo phan dung luong du thua cua vector
//     3. In tat ca cac phan tu cua vector len man hinh
//     4. Tim kiem tuan tu tren vector
//     5. Tim kiem nhi phan tren vector (gia su vector da sap xep tang dan)
//     6. Xoa cac phan tu nam o cac vi tri tu pos1 den pos2 tren vector

// VIET CODE CUA BAN O DAY...

int main()
{
	// Khai bao bien vector
	Vector vec;	

	// Khoi tao vector
	vecInit(vec);

	// Chen mot so phan tu vao cuoi vector
	vecPushBack(vec, 4); // 4
	vecPushBack(vec, 8); // 4 8
	vecPushBack(vec, 3); // 4 8 3
	vecPushBack(vec, 9); // 4 8 3 9
	vecPushBack(vec, 5); // 4 8 3 9 5
	
	// YEU CAU THUC HANH
	//   Viet code goi cac ham da viet de lam cac viec sau:
	//     1. In dung luong cua vector len man hinh
    //     2. Cat bo phan dung luong du thua cua vector
    //     3. In kich thuoc va dung luong cua vector xem co bang nhau hay khong
    //     4. In tat ca cac phan tu cua vector len man hinh
    //     5. Tim kiem tuan tu tren vector
    //     6. Tim kiem nhi phan tren vector (hay tao mot vector khac
	//        chua cac phan tu sap xep tang dan)
	//     7. Xoa cac phan tu nam o cac vi tri tu pos1 den pos2 tren vector
	
	// VIET CODE CUA BAN O DAY...
	
	// Huy vector
	vecDestroy(vec);
	
	return 0;
}

void vecInit(Vector & vec, int initCapacity) {
    vec.size = 0;
    vec.capacity = initCapacity;
    vec.array = new T[vec.capacity];
}

void vecDestroy(Vector & vec) {
    delete[] vec.array;
}

void vecCopy(Vector & vec, Vector & vec2) {
    if (&vec != &vec2) {
        vec.size = vec2.size;
        vec.capacity = vec2.capacity;
        delete[] vec.array;
        vec.array = new T[vec.capacity];
    
        for (int i = 0; i < vec.size; i++)
            vec.array[i] = vec2.array[i];
    }
}

int vecGetSize(Vector & vec) {
    return vec.size;
}

bool vecIsEmpty(Vector & vec) {
    return (vec.size == 0);
}

T vecGetElem(Vector & vec, int index) {
    return vec.array[index];
}

void vecSetElem(Vector & vec, int index, T newValue) {
    vec.array[index] = newValue;
}

void vecExpand(Vector & vec, int newCapacity) { 
    if (newCapacity <= vec.size)
        return;
    
    T * old = vec.array;
    vec.array = new T[newCapacity];
    for (int i = 0; i < vec.size; i++)
        vec.array[i] = old[i];
    
    delete[] old;
    
    vec.capacity = newCapacity;
}

void vecPushBack(Vector & vec, T newElement) {
    if (vec.size == vec.capacity)
        vecExpand(vec, 2 * vec.capacity);
    
    vec.array[vec.size] = newElement;

    vec.size++;
}

void vecInsert(Vector & vec, int pos, T newElement) {
    if (vec.size == vec.capacity)
        vecExpand(vec, 2 * vec.capacity);

    for (int i = vec.size; i > pos; i--)
        vec.array[i] = vec.array[i - 1];

    vec.array[pos] = newElement;

    vec.size++;
}

void vecPopBack(Vector & vec) {
    vec.size--;
}

void vecClear(Vector & vec) {
    vec.size = 0;
}

void vecErase(Vector & vec, int pos) {
    for (int i = pos; i < vec.size - 1; i++)
        vec.array[i] = vec.array[i + 1];

    vec.size--;
}

// YEU CAU THUC HANH
//   Dinh nghia cac ham thuc hien cac viec sau:
//     1. Lay dung luong cua vector
//     2. Cat bo phan dung luong du thua cua vector
//     3. In tat ca cac phan tu cua vector len man hinh
//     4. Tim kiem tuan tu tren vector
//     5. Tim kiem nhi phan tren vector (gia su vector da sap xep tang dan)
//     6. Xoa cac phan tu nam o cac vi tri tu pos1 den pos2 tren vector

// VIET CODE CUA BAN O DAY...

