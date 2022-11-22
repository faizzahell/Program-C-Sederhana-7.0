#include <iostream>
using namespace std;

float matrikA [2][2]; 
float matrikB [2][2]; 
float matrikC [2][2];
float jumlah, hasil, det;
int pilihan, baris, kolom, kali;
string lanjutkan; 

void hasilProgram() {
	cout << endl << "========================================================" << endl << endl;
	cout << "        ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~         " << endl;
  cout << "       :        Hasil Operasi Kalkulator       :        " << endl;
  cout << "        ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~         " << endl << endl;
}

void determinan () {
	for (int baris = 1; baris <= 2; baris++) {
		for (int kolom = 1; kolom <= 2; kolom++) {
			cout << "  Elemen Matriks A [" << baris << "][" << kolom << "]  =  ";
			cin >> matrikA [baris][kolom];
		}
	}
	hasil = (matrikA [1][1] * matrikA [2][2]) - (matrikA [1][2] * matrikA [2][1]);

	hasilProgram();

	cout << "  =>  Hasil determinan matriks  =  " << hasil;
	cout << endl;
}

void transpos() {
	for (int baris = 1; baris <= 2; baris++) {
		for (int kolom = 1; kolom <= 2; kolom++) {
			cout << "  Elemen Matriks A [" << baris << "][" << kolom << "]  =  "; 
			cin >> matrikA [baris][kolom]; 
		}
	}

	cout << endl;
	cout<<"  =>  Matriks A  = \n\n";

	for (int baris = 1; baris <= 2; baris++) {
		for (int kolom = 1; kolom <= 2; kolom++) {
			cout << "\t" << matrikA [baris][kolom]; 
		}
		cout << endl;
	}

	hasilProgram();

	cout << "  =>  Transpose Matriks A = \n\n";

	for (int baris = 1; baris <= 2; baris++) {
		for (int kolom = 1; kolom <= 2; kolom++) {
			cout << "\t" << matrikA [kolom][baris];
		}
		cout << endl;	
	}
}

void invers() {
	for (int baris = 1; baris <= 2; baris++) {
		for (int kolom = 1; kolom <= 2; kolom++) {
			cout << "  Elemen Matriks A [" << baris << "][" << kolom << "]  =  "; 
			cin >> matrikA [baris][kolom];
		}
	}

	det = (matrikA [1][1] * matrikA [2][2]) - (matrikA [1][2] * matrikA [2][1]);

	matrikB [1][1] = matrikA [2][2] / det;
	matrikB [1][2] = -matrikA [1][2] / det;
	matrikB [2][1] = -matrikA [2][1] / det;
	matrikB [2][2] = matrikA [1][1] / det;

	hasilProgram();

	cout << "  =>  Invers Matriks A  = \n\n";

	for (int baris = 1; baris <= 2; baris++) {
		for (int kolom = 1; kolom <= 2; kolom++) {
			cout << "\t" << matrikB [baris][kolom]; 
		}
		cout << endl;
	}
}

void penjumlahan() {
	for (int baris = 1; baris <= 2; baris++) {
		for (int kolom = 1; kolom <= 2; kolom++) {
			cout << "  Elemen Matriks A [" << baris << "][" << kolom << "]  =  ";
			cin >> matrikA [baris][kolom];
		}
	}

	cout << "\n  =>  Matriks A  = \n\n"; 

	for (int baris = 1; baris <= 2; baris++) {
		for (int kolom = 1; kolom <= 2; kolom++) {
			cout << "\t" << matrikA [baris][kolom];
		}
		cout << endl;
	} 
	cout << endl;

	for (int baris = 1; baris <= 2; baris++) {
		for (int kolom = 1; kolom <= 2; kolom++) {
			cout << "  Elemen Matriks B [" << baris << "][" << kolom << "]  =  "; 
			cin >> matrikB [baris][kolom]; 
		}
	}

	cout << "\n  =>  Matriks B  = \n\n";

	for (int baris = 1; baris <= 2; baris++) {
		for (int kolom = 1; kolom <= 2; kolom++) {
			cout << "\t" << matrikB [baris][kolom];
		}
		cout << endl;
	} 
	cout << endl;

	hasilProgram();

	cout << "  Matriks A + Matriks B = Matriks C\n\n";
	cout << "  =>  Matriks C = \n\n";

	for (int baris = 1; baris <= 2; baris++) {
		for (int kolom = 1; kolom <= 2; kolom++) {
			matrikC [baris][kolom] = matrikA [baris][kolom] + matrikB [baris][kolom];
			cout << "\t" << matrikC [baris][kolom];
		}
		cout << endl;	
	}
}

void perkalian() {
	for (baris = 1; baris <= 2; baris++) {
		for (kolom = 1; kolom <= 2; kolom++) {
			cout << "  Elemen Matriks A [" << baris << "][" << kolom << "]  =  ";
			cin >> matrikA [baris][kolom];
		}
	}

	cout << endl;	
	cout << "  =>  Matriks A  = \n\n";

	for (baris = 1; baris <= 2; baris++) {
		for (kolom = 1; kolom <=2 ; kolom++) {
			cout << "\t" << matrikA [baris][kolom]; 
		}
		cout << endl;	
	} 
	cout << endl;

	for (baris = 1; baris <= 2; baris++) {
		for (kolom = 1; kolom <= 2; kolom++) {
			cout << "  Elemen Matriks B [" << baris << "][" << kolom << "]  =  "; 
			cin >> matrikB [baris][kolom]; 
		}
	}

	cout << endl;	
	cout << "  =>  Matriks B  = \n\n"; 

	for (baris = 1; baris <= 2; baris++) {
		for (kolom = 1; kolom <= 2; kolom++) {
			cout << "\t" << matrikB [baris][kolom]; 
		}
		cout << endl;
	}

	hasilProgram();

	cout << "  Matriks A * Matriks B = Matriks C\n\n";
	cout << "  =>  Matriks C = \n\n";		

	for (int baris = 1; baris <= 2; baris++) {
		for (int kolom = 1; kolom <= 2; kolom++) {
			for (int kali = 1; kali <= 2; kali++) {
				hasil = hasil + matrikA [baris][kali] * matrikB [kali][kolom]; 
			}
			matrikC [baris][kolom] = hasil; 
			hasil = 0; 
		}
		cout << endl; 
	}

	for (int baris = 1; baris <= 2; baris++) {
		for (int kolom = 1; kolom <= 2; kolom++) {
			cout << "\t" << matrikC [baris][kolom]; 
		}
		cout << endl;
	}
}

void kuadrat() {
	for (baris = 1; baris <= 2; baris++) {
		for (kolom = 1; kolom <= 2; kolom++) {
			cout << "  Elemen Matriks A [" << baris << "][" << kolom << "]  =  ";
			cin >> matrikA [baris][kolom]; 
		}
	}

	cout << endl;
	cout << "  =>  Matriks A  = \n\n"; 
	for (baris = 1; baris <= 2; baris++) {
		for (kolom = 1; kolom <= 2; kolom++) {
			cout << "\t" << matrikA [baris][kolom]; 
		}
		cout << endl;	
	}

	cout << endl;
	cout << "  =>  Matriks Kuadrat  = \n";

	for (int baris = 1; baris <= 2; baris++) {
		for (int kolom = 1; kolom <= 2; kolom++) {
			for (int kali = 1; kali <= 2; kali++) {
				hasil = hasil + matrikA [baris][kali] * matrikA [kali][kolom]; 
			}
			matrikB [baris][kolom] = hasil; 
			hasil = 0; 
		}
		cout << endl; 
	}

	for (int baris = 1; baris <= 2; baris++) {
		for (int kolom = 1; kolom <= 2; kolom++) {
			cout << "\t" << matrikB [baris][kolom]; 
		}
		cout<<endl; 
	}
}

int main() {
	cout << "========================================================" << endl;
	cout << "---------   Program Kalkulator Matriks 2 x 2   ---------" << endl;
	cout << "========================================================" << endl << endl;

	cout << "        ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~         " << endl;
  cout << "       :   Operasi Program Kalkulator Matriks  :        " << endl;
  cout << "        ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~         " << endl << endl;

	cout << "  Program kalkulator sederhana  :" << endl << endl;
	cout << "  1. Determinan" << endl;
	cout << "  2. Tranpose" << endl;
	cout << "  3. Invers" << endl;
	cout << "  4. Penjumlahan" << endl;
	cout << "  5. Perkalian" << endl;
	cout << "  6. Kuadrat" << endl << endl;

	lanjutkan:

	cout << "========================================================" << endl << endl;
	cout << "  Masukkan kode pilihan  :  "; cin >> pilihan; 
	cout << endl << "========================================================" << endl << endl;

	
	switch (pilihan){
		case 1 : determinan(); 
		break;
		
		case 2 : transpos(); 
		break;
		
		case 3 : invers(); 
		break;
		
		case 4 : penjumlahan(); 
		break;
		
		case 5 : perkalian(); 
		break;
		
		case 6 : kuadrat(); 
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
