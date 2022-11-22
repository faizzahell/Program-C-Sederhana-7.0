#include <iostream>
#include <cmath>
using namespace std;

// daftar fungsi oprasi program kalkulator sederhana
 
void penjumlahan (float a, float b){
	 float penjumlahan = a + b;
	 cout << endl << "  Hasil dari program penjumlahan " << "adalah :" << endl;
	 cout << "  =>  " << a << " + " << b << "  =  " << penjumlahan << endl << endl;
	}	

void pengurangan (float a, float b){
	float pengurangan = a - b;
	cout << endl << "  Hasil dari program pengurangan " << "adalah :" << endl;
	cout << "  =>  " << a << " - " << b << "  =  " << pengurangan << endl << endl;
	}

void perkalian (float a, float b){
	float perkalian = a * b;
	cout << endl << "  Hasil dari program perkalian " << "adalah :" << endl;
	cout << "  =>  " << a << " x " << b << "  =  " << perkalian << endl << endl;
	}

void pembagian (float a, float b){
	float pembagian = a / b;
	cout << endl << "  Hasil dari program pembagian " << "adalah :" << endl;
	cout << "  =>  " << a << " : " << b << "  =  " << pembagian << endl << endl;
	}

void kuadrat (float a){
	float kuadrat = pow(a, 2);
	cout << endl << "  Hasil dari program kuadrat " << "adalah :" << endl;
	cout << "  =>  " << a << " ^2  =  " << kuadrat << endl << endl;
	}

void trigonometri (float a){
 
	float radius = a / 180 * 3.14;
	float hasil_sin = sin(radius);
	float hasil_cos = cos(radius);
	float hasil_tan = tan(radius);
	cout << endl;
	cout << "  =>  Hasil sin "<< a << "  =  " << hasil_sin << endl;
	cout << "  =>  Hasil cos "<< a << "  =  " << hasil_cos << endl;
	cout << "  =>  Hasil tan "<< a << "  =  " << hasil_tan << endl << endl;
}

// tampilan menunjukan hasil program

void hasil() {
	cout << endl << "========================================================" << endl << endl;
	cout << "        ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~         " << endl;
  cout << "       :        Hasil Operasi Kalkulator       :        " << endl;
  cout << "        ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~         " << endl << endl;
}


int main() {
	string lanjutkan;
	float a, b, c;
	int pilihan;
	
	cout << "========================================================" << endl;
	cout << "-----------   Program Kalkulator Sederhana   -----------" << endl;
	cout << "========================================================" << endl << endl;

	cout << "        ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~         " << endl;
  cout << "       :       Operasi Program Kalkulator      :        " << endl;
  cout << "        ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~         " << endl << endl;

	cout << "  Program kalkulator sederhana  :" << endl << endl;
	cout << "  1. Penjumlahan" << endl;
	cout << "  2. Pengurangan" << endl;
	cout << "  3. Perkalian" << endl;
	cout << "  4. Pembagian" << endl;
	cout << "  5. Kuadrat" << endl;
	cout << "  6. Trigonometri Dasar (sin, cos, tan)" << endl << endl;

	lanjutkan:

	cout << "========================================================" << endl << endl;
	cout << "  Masukkan pilihan kode  :  "; cin >> pilihan; 
	cout << endl << "========================================================" << endl << endl;
	
	switch (pilihan){
		case 1 : 
		cout << "  Masukkan bilangan pertama  :  "; cin >> a; 
		cout << "  Masukkan bilangan kedua    :  "; cin >> b;
		hasil();
		penjumlahan(a,b); break;
		
		case 2 : 
		cout << "  Masukkan bilangan pertama  :  "; cin >> a; 
		cout << "  Masukkan bilangan kedua    :  "; cin >> b;
		hasil();
		pengurangan(a,b);
		break;
		
		case 3 :  
		cout << "  Masukkan bilangan pertama  :  "; cin >> a; 
		cout << "  Masukkan bilangan kedua    :  "; cin >> b;
		hasil();
		perkalian(a,b);
		break;
		
		case 4 :  
		cout << "  Masukkan bilangan pertama  :  "; cin >> a; 
		cout << "  Masukkan bilangan kedua    :  "; cin >> b;
		hasil();
		pembagian(a,b);
		break;
		
		case 5 : 
		cout << "  Masukkan bilangan  :  "; cin >> a; 
		hasil();
		kuadrat(a);
		break;
		
		case 6 :
		cout << "  Masukkan besar sudut	:  "; cin >> a; 
		hasil();
		trigonometri(a); 
		break;
		
		default : 
		cout << endl;
		cout << "========================================================" << endl;
		cout << "-------  Kode pilihan yang anda masukkan SALAH!  -------" << endl;
		cout << "========================================================" << endl << endl;
		break;
	}

	penggunaan:

	cout << "========================================================" << endl << endl;
	cout << "  Melanjutkan penggunaan kalkulator ? (y/n)  :  "; cin >> (lanjutkan);
	cout << endl;
	cout << "========================================================" << endl << endl;

	if (lanjutkan == "y" || lanjutkan == "Y") {
		goto lanjutkan;
	} else if (lanjutkan == "n" || lanjutkan == "N") {
		cout << endl;
		cout << "========================================================" << endl;
		cout << "-------------   PROGRAM KALKULATOR SELESAI  ------------" << endl;
		cout << "========================================================" << endl << endl;
	} else {
		cout << endl;
		cout << "========================================================" << endl;
		cout << "-------  Kode pilihan yang anda masukkan SALAH!  -------" << endl;
		cout << "========================================================" << endl << endl;
		goto penggunaan;
	}

	cout << "source code dari : Faizahel Joasa Ariesta" << endl;

	return 0;
}
