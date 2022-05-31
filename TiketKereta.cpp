#include <iostream>
using namespace std;

struct tiket_kai {
	string stasiun;
	string kereta;
	string kode;
	int harga;
};

int main () {
	// Pencarian tiket kereta termurah Kiaracondong - PasarSenen
	tiket_kai tiket[] {
		{
			"Cimahi(CMII)",
			"Serayu",
			"305",
			63000,
		},
		{
			"Cicalengka(CCL)",
			"Cikuray",
			"7047B",
			45000,
		},
		{
			"KiaraCondong(KAC))",
			"Cikuray",
			"7047B",
			45000,
		},
		{
			"Bandung(BD)",
			"Cikuray",
			"7047B",
			45000,
		},
		{
			"Cimahi(CMI)",
			"Cikuray",
			"7047B",
			45000,
		},
		{
			"KiaraCondong(KAC)",
			"Serayu",
			"301",
			63000,
		},
		{
			"Cimahi(CMI)",
			"Serayu",
			"301",
			63000,
		},
		{
			"KiaraCondong(KAC)",
			"Serayu",
			"305",
			63000,
		},
	};
	int batasMaksimal;
	cout << "Masukkan harga maksimal yang ingin dicari : ";
	cin >> batasMaksimal;
	
	cout << "Berikut tiket termurah sesuai harga maksimal : "<<endl;
	for (int i=0;i<8;i++) {
		if (tiket[i].harga > batasMaksimal) {
			continue;
		}
		cout << "Stasiun : " << tiket[i].stasiun << endl
			 << "Kereta  : " << tiket[i].kereta << endl
			 << "Kode    : " << tiket[i].kode << endl
			 << "Harga   : " << tiket[i].harga << endl << endl;
	}
	return 0;
}
