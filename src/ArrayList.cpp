/**
* @ B191210004
* @ Konsoldan girilen sayının ödevde istenen şekilde faktöriyelinin hesaplanması ve dosyaya yazılması.
* @ 1.Öğretim A grubu
* @ 1.Ödev
* @ 28.07.2022
* @ Mustafa Melih TÜFEKCİOĞLU
*/

#include "ArrayList.hpp"

		void ArrayList::reserve( int newCapacity)   //ArrayList'e yeni bir eleman ekleneceği zaman array listin kapasitesini kontrol eden ve gerekirse arttıran fonksiyon.
		{
			 if(capacity>=newCapacity) return;
			  int *tmp = new int[newCapacity];
			 for(int j=0;j<length;j++) tmp[j]= items[j];
			 if(items != NULL) delete [] items;
			 items = tmp;
			 capacity = newCapacity;
		}
	
		ArrayList::ArrayList()						 //ArrayList nesnesi oluşturulduğunda ilk çalışan kurucu fonksiyon ve başlangıç değerlerinin atandığı yer.
		{
			length = 0;
			capacity=0;
			items = NULL;
		}		

		int& ArrayList::elementAt(int i)  								//İstenen indexteki elemanı döndüren fonksiyon.
		{
			return items[i]; 
		}

		void ArrayList::insert(int i,const int& item)  							//Array liste eleman eklenmek istediğinde kullanılan fonksiyon.
		{
			
			if(length >= capacity) reserve(max(1,2*capacity));  				// array listin kapasitesinin kontrol edildiği ve yetersiz alan varsa kapasitesinin arttırıldığı kısım.
			for(int j=length-1;j>=i;j--) items[j + 1] = items[j]; 				//elemanların eklendiği kısım.
			items[i] = item;													// dışardan gelen elemanın gerekli yere eklendiği yer.
			length++;															//ekleme işlemi bitince ayrıca tutulan dizi uzunluğu arttırılır.
		}

		
		ArrayList::~ArrayList() 								//oluşturalan nesne yılkıldığı zaman çalışan kod kısmı.Bellekte kullanılan alanları serbest bırakır.
		{
			if(items != NULL) delete [] items;
		}


