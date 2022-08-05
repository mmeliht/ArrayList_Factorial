/**
* @ B191210004
* @ Konsoldan girilen sayının ödevde istenen şekilde faktöriyelinin hesaplanması ve dosyaya yazılması.
* @ 1.Öğretim A grubu
* @ 1.Ödev
* @ 28.07.2022
* @ Mustafa Melih TÜFEKCİOĞLU
*/

#ifndef ARRAYLIST_HPP
#define ARRAYLIST_HPP

#include <iostream>
using namespace std;

class ArrayList{
	private:
		int *items;
		int length;
		int capacity;
		void reserve(int);
		
	public:
		ArrayList();
		
		int &elementAt(int);
		
		void insert(int,const int& );
			
		~ArrayList();
		
};
#endif 
