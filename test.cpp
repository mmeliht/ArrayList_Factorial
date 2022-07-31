#include <iostream>
#include "ArrayList.hpp"
#include <ctime>
using namespace std;

int multiply(int x, ArrayList *array, int numberLenght)
{
	int elde=0;
	
	for (int i=0; i<numberLenght; i++)
	{
		long int prod = array->elementAt(i) * x + elde;
		array->elementAt(i) = prod % 10;
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
	
void factorial(int n)
{
		ArrayList *array=new ArrayList();
		array->insert(0,1);
		
		int size=1;
		int basamakToplam=0;
		for (int x=2; x<=n; x++){
		
			string xUzunluk = to_string(x);
			int temp=x;
			for(int j=0;j<xUzunluk.length();j++)
			{
				basamakToplam += temp%10;
				temp = temp/10;

			}
			size = multiply(basamakToplam, array, size);
			basamakToplam=0;
		
		}
		
		cout << "Factorial of given number is \n";
		
		for (int i=size-1; i>=0; i--){
			cout << array->elementAt(i);
		}
		
		delete array;
}

int main(){

	int sayi;
	cout<<"hesaplanacak sayiyi giriniz: ";
	cin>>sayi;
	
	 time_t tarih = time(NULL);
	 cout << ctime(&tarih);
	
	factorial(sayi);
	
	cout<<endl;
	time_t tarih2 = time(NULL);
	 cout << ctime(&tarih2);
	
}
