#include "ArrayList.hpp"

		void ArrayList::reserve( int newCapacity)
		{
			 if(capacity>=newCapacity) return;
			  int *tmp = new int[newCapacity];
			 for(int j=0;j<length;j++) tmp[j]= items[j];
			 if(items != NULL) delete [] items;
			 items = tmp;
			 capacity = newCapacity;
		}
	
		ArrayList::ArrayList()
		{
			length = 0;
			capacity=0;
			items = NULL;
		}		

		int& ArrayList::elementAt(int i) 
		{
			if(i<0 || i>=length);
			return items[i]; 
		}

		void ArrayList::insert(int i,const int& item) 
		{
			if(i<0 || i>length) throw "No bound"; 
			if(length >= capacity) reserve(max(1,2*capacity)); 
			for(int j=length-1;j>=i;j--) items[j + 1] = items[j];
			items[i] = item;
			length++;					
		}

		ostream& operator<<(ostream& screen,ArrayList& right){
			screen<<endl;
			for(int i=0;i<right.length;i++){
				screen<<right.items[i];
				if(i+1!=right.length)screen<<" || ";
			}
			return screen;
		}
		ArrayList::~ArrayList()
		{
			if(items != NULL) delete [] items;
		}


