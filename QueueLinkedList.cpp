//	Nama : Naufal Ariful Amri
//	NPM	 : 140810180009 

#include <iostream>
using namespace std ;

struct data {
	int info ;
	data* next ;
};

typedef data* list ;
typedef data* pointer ;

struct queue {
	list head ;
	list tail ;
};

void create (queue& q) {
	q.head = NULL ;
	q.tail = NULL ;
}

void elemen (pointer& pBaru, queue& q) {
	pBaru = new data ;
	cout << ":: " ; cin >> pBaru->info ;
	pBaru->next = NULL ;
}

void enqueue (pointer& pBaru, queue& q) {
	if (q.head == NULL && q.tail == NULL) {
		q.head = pBaru ;
		q.tail = pBaru ;
	}
	else {
		q.tail->next = pBaru ;
		q.tail = pBaru ;
	}
}

void dequeue (pointer& pHapus, queue& q){
	if (q.head == NULL && q.tail == NULL){
		cout << "Tidak ada data\n" ;
	}
	else if (q.head->next == NULL) {
		pHapus = q.head ;
		q.head->next = NULL ;
	}
	else {
		pHapus = q.head ; 
		q.head = q.head->next ;
		pHapus->next = NULL ;
		
	}
}


void traversal (queue q){
	while (q.head != NULL){
		cout << q.head->info << endl ;
		q.head = q.head->next ;
	}
}


int main () {
	queue q ;
	pointer p ;
	
	create(q) ;
	
	dequeue (p,q) ;
	for (int i = 0 ; i < 4 ; i++) {
		elemen(p,q) ;
		enqueue(p,q) ;
	}
	dequeue (p,q) ;
	traversal (q) ;
}

















