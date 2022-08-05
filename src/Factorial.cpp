/**
* @ B191210004
* @ Konsoldan girilen sayının ödevde istenen şekilde faktöriyelinin hesaplanması ve dosyaya yazılması.
* @ 1.Öğretim A grubu
* @ 1.Ödev
* @ 28.07.2022
* @ Mustafa Melih TÜFEKCİOĞLU
*/

#include "Factorial.hpp"
#include "ArrayList.hpp"
#include <fstream>
	
	
	int Factorial::multiply(int x, ArrayList *array, int numberLenght)  //Girilen sayının faktoriyelinin hesaplandığı kısım.
	{
		int elde=0;
		
		for (int i=0; i<numberLenght; i++)						//array listin her bir index'inde tutulan sayıyla çarpılması gereken sayının 
		{								  						//basamak toplamının çarpıldığı ve tek basamak haline getirilerek ilgi indexe yazıldığı ve 	
			int prod = array->elementAt(i) * x + elde;  		//yazıldıktan sonra eldeninn diğer basamağa aktarıldığı bölüm. 
			array->elementAt(i) = prod % 10;					//Tüm hesaplama bu fonksiyonda yapılmaktadır.
			elde = prod/10;
		}
	
		while (elde)
		{
			array->insert(numberLenght,elde%10);
			elde = elde/10;
			numberLenght++;
		}
		return numberLenght;
	}
	
	void Factorial::factorial(int n)  
	{
		ArrayList *array=new ArrayList();  // Bir ArrayList oluşturulur.
		array->insert(0,1);				   //ArrayList in ilk elemanına 1 atanır.
		
		int size=1;						   
		int basamakToplam=0;
		for (int x=2; x<=n; x++){    	  // İstenen şekilde faktöriyel hesaplamak için çapılacak sayını basamaklarının toplandığı döngü.
		
			string xUzunluk = to_string(x);
			int temp=x;
			for(int j=0;j<xUzunluk.length();j++)
			{
				basamakToplam += temp%10;
				temp = temp/10;

			}
			size =multiply(basamakToplam, array, size);  	// Bulunan basak toplamı , array list , ve boyutun esas hesaplamaların yapılacağı yere gönderildiği kısım.
			basamakToplam=0;		
		}
		
		cout << "Sonuc Dosyaya Yazildi.";					
		
		ofstream MyFile("Sonuc.txt"); 		// Hesaplama bitince sonucu yani array listin içinde tuttuğu sayıları dosyaya yazan kod kısmı.
		for (int i=size-1; i>=0; i--){
			MyFile << array->elementAt(i);
		}
		
		delete array;
	}
	
	



