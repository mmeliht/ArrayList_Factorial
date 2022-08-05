#include <iostream>
#include "Factorial.hpp"
#include <ctime>
using namespace std;



int main(){

	int sayi;
	cout<<"hesaplanacak sayiyi giriniz: ";
	cin>>sayi;
	
	time_t tarih = time(NULL);
   cout << ctime(&tarih);
	
	Factorial factorial;
	factorial.factorial(sayi);
	
	time_t tarih1 = time(NULL);
    cout <<endl<< ctime(&tarih1);
   
	
	cout<<endl;
	return 0;
	
}
