/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <string>
#include <cstring>
using namespace std;
class CepTelefonu {
public:
	char model[30];
	float fiyat;
	bool aramaDurumu;
	CepTelefonu() {
		aramaDurumu=false;
		cout<<"--> bir telefonu nesnesi oluEturuldu (YAPICI METOT calisti)."<<endl;
		cout<<"       arama durumu baslangicta:"<<aramaDurumu<<endl;
	}
	~CepTelefonu() {
		aramaDurumu=false;
		cout<<"--> bir telefonu nesnesi oluEturuldu (YIKICI METOT calisti)."<<endl;
		cout<<"       arama durumu baslangicta:"<<aramaDurumu<<endl;
	}
	void aramabaslat(string m) {
	aramaDurumu =true;
	string modelstr(model);
	cout<<modelstr<<" ile "<<m<<"aramaya baslandi..."<<endl;
}
};


int main() {
	cout<<"###main basladi###"<<endl;
	CepTelefonu benimTelefonum;
	strcpy(benimTelefonum.model,"iphone 17 pro max");
	benimTelefonum.fiyat=120000,
	benimTelefonum.aramabaslat("Annem");
	cout<<"Telefonun fiyatD1:"<<benimTelefonum.fiyat<<endl;
	cout<<"### MAD0N fonksiyonu Bitiyor ###"<<endl;

	return 0;
}