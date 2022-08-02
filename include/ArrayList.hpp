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
			
		friend ostream& operator<<(ostream& ,ArrayList& );
			
		~ArrayList();
		
};
#endif 
