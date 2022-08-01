#ifndef ARRAYLIST_HPP
#define ARRAYLIST_HPP

using namespace std;

class ArrayList{
	private:
		int *items;
		int length;
		int capacity;
		void reserve(int newCapacity)
		{
			 if(capacity>=newCapacity) return;
			 int *tmp = new int[newCapacity];
			 for(int j=0;j<length;j++) tmp[j]= items[j];
			 if(items != NULL) delete [] items;
			 items = tmp;
			 capacity = newCapacity;
		}
	public:
		ArrayList()
		{
			length = 0;
			capacity=0;
			items = NULL;
		}
		int size() const
		{
			return length;
		}
		bool isEmpty() const
		{
			return size() == 0;
		}
		int indexOf(const int& item)
		{
			for(int i=0;i<length;i++){
				if(items[i] == item)return i;
			}
			throw "No Such Element ";
		}
		int &elementAt(int i) 
		{
			if(i<0 || i>=length);
			return items[i]; 
		}
		void remove(const int& item) 
		{
			for(int i=0;i<length;i++){
				if(items[i] == item){
					removeAt(i);
					return;
				}
			}
			throw "No such falan filan";
		}
		void removeAt(int i) 
		{
			if(i<0 || i>=length) throw "No such falan filan";
			for(int j=i+1;j<length;j++) items[j - 1] = items[j];
			length--;
		}
		void add(const int& item)
		{			
			insert(length,item);				
		}
		void insert(int i,const int& item) 
		{
			if(i<0 || i>length) throw "No bound"; 
			if(length >= capacity) reserve(max(1,2*capacity)); 
			for(int j=length-1;j>=i;j--) items[j + 1] = items[j];
			items[i] = item;
			length++;					
		}
		const int& first() 
		{
			if(length == 0) "List is empty"; 
			return items[0];
		}
		const int& last() {
			if(length == 0) "List is empty"; 
			return items[length-1];
		}
		void clear()
		{
			length = 0;
		}
		friend ostream& operator<<(ostream& screen,ArrayList& right){
			screen<<endl;
			for(int i=0;i<right.length;i++){
				screen<<right.items[i];
				if(i+1!=right.length)screen<<" || ";
			}
			return screen;
		}
		~ArrayList()
		{
			if(items != NULL) delete [] items;
		}
};

#endif