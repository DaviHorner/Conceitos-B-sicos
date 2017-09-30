#include <iostream>
using namespace std;

int main(){
	float Dolar,Euro,Libra,Sal_Real,Sal_Dolar,Sal_Euro,Sal_Libra;
	Dolar = 2.13;
	Euro = 2.84;
	Libra = 3.34; 
	cin >> Sal_Real;
	Sal_Dolar = Sal_Real/Dolar;
	Sal_Euro = Sal_Real/Euro;
	Sal_Libra = Sal_Real/Libra;
	cout<<Sal_Dolar<<endl;
	cout<<Sal_Euro<<endl;
	cout<<Sal_Libra<<endl;
} 



