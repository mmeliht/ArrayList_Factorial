/**
* @ B191210004
* @ Konsoldan girilen sayının ödevde istenen şekilde faktöriyelinin hesaplanması ve dosyaya yazılması.
* @ 1.Öğretim A grubu
* @ 1.Ödev
* @ 28.07.2022
* @ Mustafa Melih TÜFEKCİOĞLU
*/

#include <iostream>
#include "Factorial.hpp"
#include <ctime>
using namespace std;



int main(){

	int sayi;									//Hesaplanması istenen sayı için tanımlanan değişken
	cout<<"hesaplanacak sayiyi giriniz: ";		//Hesaplanacak sayının ekrandan alınması için ekrana yazılan mesaj.
	cin>>sayi;									//Hesaplanacak sayıyı ekrandan alan kısım.
	
	
	
	Factorial factorial;						//Ekrandan girilen sayının istenen şekilde faktöriyelinin hesaplanamsı için oluşturulan classtan oluşturulan nesne
	factorial.factorial(sayi);					//Class'taki fonksiyonların çalışması için ekrandan alınan sayının fonksiyonlara gönderildiği kısım.
	
	
   
	
	cout<<endl;
	return 0;
	
}
