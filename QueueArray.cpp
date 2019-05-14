//	Nama : Naufal Ariful Amri
//	NPM	 : 140810180009 

#include <iostream>
using namespace std ;

const int maximal = 25 ;

struct queue {
	int info[maximal] ;
	int head ;
	int tail ;
};

void create (queue& q) {
	q.head = 0 ;
	q.tail = -1 ;
}

void insertqueue (queue& q, int& x) {
	cout << " : " ; cin >> x ;
	if (q.tail == maximal-1) {
		cout << "FULL\n" ;
	}
	else {
		q.tail += 1 ;
		q.info[q.tail] = x ;
	}
}

void deletequeue (queue& q , int& x) {
	if (q.tail < q.head) {
		cout < "KOSONG\n" ;
	}
	else {
		x = q.info[q.head] ;
		for (int i = q.head ; i < q.tail ; i++) {
			q.info[i] = q.info[i+1] ;
		}
		q.tail -= 1 ;
	}
}

void traversal (queue &q) {
	for (int i = q.tail ; i >= q.head ; i-- ) {
		cout << q.info[i] << endl ;
	}
}


int main () {
	queue q ;
	int x ;
	
	create (q) ;
	
	
	for (int i = 0 ; i < 10 ; i++) {
		insertqueue (q,x) ;
	}
	cout << "delete queue 2 kali\n" ; 
	deletequeue (q,x) ;
	deletequeue (q,x) ;
	
	traversal (q) ;	
}






