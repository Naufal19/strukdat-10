//	Nama : Naufal Ariful Amri
//	NPM	 : 140810180009 

#include <iostream>
using namespace std ;

struct simpul {
	int info ;
	simpul* right ;
	simpul* left ;
};

typedef simpul* tree ;
typedef simpul* pointer ;

void create (tree& root){
	root = NULL ;
}

void elemen (pointer& isi){
	isi = new simpul ;
	cout << ":: " ; cin >> isi->info ;
	isi->left = NULL ;
	isi->right = NULL ;
}

void insertbst (pointer& isi, tree& root) {
	if (root == NULL){
		root = isi ;
	}
	else if (root->info > isi->info) {
		insertbst (isi,root->left) ;
	}
	else if (root->info < isi->info) {
		insertbst (isi,root->right) ;
	}
	else {
		cout << "sudah ada\n" ;
	}
} 

void post_order (tree& root){
	if (root!= NULL) {
		post_order (root->left) ;
		post_order (root->right) ;
		cout << root->info << " " ;
	}
}

void pre_order (tree& root){
	if (root!= NULL) {
		cout << "(" ;
		cout << root->info << " " ;
		pre_order (root->left) ;
		pre_order (root->right) ;
		cout << ")" ;
	}
}

void in_order (tree& root){
	if (root!= NULL) {
		in_order (root->left) ;
		cout << root->info << " " ;
		in_order (root->right) ;
	}
}
int main (){
	int x ,y ;
	char a ;
	pointer isi ;
	tree root ;
	
	
	do {
		// insert
		cout << "Input jumlah data :: " ; cin >> x ;  
		create(root) ;
		for (int i = 0 ; i < x ; i++) {
			elemen(isi) ;
			insertbst (isi,root) ;
		}
		system("cls") ;
			cout << "1.Post Order\n" ;
			cout << "2.Pre Order\n" ;
			cout << "3.In Order\n" ;
			cout << "99. exit\n" ;		
		
		do {
			cout << ": " ; cin >> y ;
			switch (y) {
			case 1 :
				post_order(root) ;
				cout << endl ;		
				break ;
			case 2 :
				pre_order (root) ;
				cout << endl ;
				break ;
			case 3 :
				in_order (root) ;
				cout << endl ;
				break ;
			case 99 :
				break ;
			default :
				cout << "INPUT SALAH\n" ; 
			}		
		} while (y != 99 ) ;
		
		cout << "Maun input ulang ?? " ; cin >> a ;
	} while (a != 'n' || a != 'N') ;

	
}






