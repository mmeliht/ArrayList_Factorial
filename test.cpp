#include <iostream>
#include "Factorial.cpp"

using namespace std;



int main(){

	int sayi;
	cout<<"hesaplanacak sayiyi giriniz: ";
	cin>>sayi;
	
	Factorial factorial;
	factorial.factorial(sayi);
	
	cout<<endl;
	
}
