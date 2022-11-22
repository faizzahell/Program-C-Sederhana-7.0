#include <iostream>
#include <cmath>
#define phi 3.1415926535897
using namespace std;

float volume;

void hasilProgram() {
	cout << endl << "========================================================" << endl << endl;
	cout << "        ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~         " << endl;
  cout << "       :        Hasil Operasi Kalkulator       :        " << endl;
  cout << "        ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~         " << endl << endl;
}

void kubus (float a){
	cout << "  Masukkan panjang sisi Kubus  =  "; cin>> a;
	volume = pow(a,3);

	hasilProgram();

	cout << "  Volume Kubus  =  " << volume << endl;
}

void balok (float a, float b, float c){
	cout << "  Masukkan panjang Balok  =  "; cin >> a;
	cout << "  Masukkan lebar Balok    =  "; cin >> b;
	cout << "  Masukkan tinggi Balok   =  "; cin >> c;
	volume = a * b * c;
	
	hasilProgram();

	cout << "  Volume Balok  =  " << volume << endl;
}

void tabung (float a, float b){
	cout << "  Masukkan jari-jari Tabung  =  "; cin >> a;
	cout << "  Masukkan tinggi Tabung     =  "; cin >> b;
	volume = phi * (pow(a,2) * b);

	hasilProgram();

	cout << "  Volume Tabung  =  " << volume << endl;
}

void kerucut (float a, float b){
	cout << "  Masukkan jari-jari Alas Kerucut  =  "; cin >> a;
	cout << "  Masukkan tinggi Kerucut          =  "; cin >> b;
	volume = (phi * (pow(a,2) * b))/3;
	
	hasilProgram();

	cout << "  Volume Kerucut  =  " << volume << endl;
}

void prisma_segitiga (float a, float b, float c){
	cout << "  Masukkan panjang alas Prisma Segitiga  =  "; cin >> a;
	cout << "  Masukkan tinggi alas Prisma Segitiga   =  "; cin >> b;
	cout << "  Masukkan tinggi Prisma Segitiga        =  "; cin >> c;
	volume = ((a * b)/2) * c;
	
	hasilProgram();

	cout << "  Volume Prisma Segitiga  =  "<< volume << endl;
}

void limas_segitiga (float a, float b, float c){
	cout << "  Masukkan panjang alas Limas Segitiga  =  "; cin >> a;
	cout << "  Masukkan tinggi alas Limas Segitiga   =  "; cin >> b;
	cout << "  Masukkan tinggi Limas Segitiga        =  "; cin >> c;
	volume = (((a * b)/2) * c) /3;
	
	hasilProgram();

	cout << "  Volume Limas Segitiga  =  "<< volume << endl;
}

void limas_segiempat (float a, float b, float c){
	cout << "  Masukkan panjang permukaan Limas Segiempat  =  "; cin>> a;
	cout << "  Masukkan lebar permukaan Limas Segiempat    =  "; cin >> b;
	cout << "  Masukkan tinggi Limas Segiempat             =  "; cin >> c;
	volume = ((a * b) * c) /3;

	hasilProgram();

	cout << "  Volume Limas Segiempat  =  " << volume << endl;
}

int main() {
	int pilihan;
	float a, b, c;
	string lanjutkan;

	cout << "========================================================" << endl;
	cout << "------   Program Menghitung Volume Bangun Rang   ------" << endl;
	cout << "========================================================" << endl << endl;

	cout << "        ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~         " << endl;
  cout << "       :       Opsi Pilihan Bangun Ruang       :        " << endl;
  cout << "        ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~         " << endl << endl;

	cout << "  Pilihan jenis bangun ruang  :" << endl << endl;
	cout << "  1. Kubus " << endl;
	cout << "  2. Balok " << endl;
	cout << "  3. Tabung " << endl;
	cout << "  4. Kerucut " << endl;
	cout << "  5. Prisma Segitiga " << endl;
	cout << "  6. Limas Segitiga "<< endl;
	cout << "  7. Limas Segiempat " << endl << endl;

	lanjutkan:

	cout << "========================================================" << endl << endl;
	cout << "  Masukkan kode pilihan bangun ruang  :  "; cin >> pilihan; 
	cout << endl << "========================================================" << endl << endl;
	
	switch (pilihan) {
		case 1 : kubus(a); 
		break;
		
		case 2 : balok(a,b,c); 
		break;
		
		case 3 : tabung(a,b); 
		break;
		
		case 4 : kerucut(a,b); 
		break;
		
		case 5 : prisma_segitiga(a,b,c); 
		break;
		
		case 6 : limas_segitiga(a,b,c); 
		break;
		
		case 7 : limas_segiempat (a,b,c); 
		break;
		
		default : 
		cout << endl;
		cout << "========================================================" << endl;
		cout << "-------  Kode pilihan yang anda masukkan SALAH!  -------" << endl;
		cout << "========================================================" << endl << endl;
	 	break;
	}

	penggunaan:
	 	
	cout << endl << "========================================================" << endl << endl;
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
