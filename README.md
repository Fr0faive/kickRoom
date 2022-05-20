# Tentang Repo ini
Repo ini bertujuan untuk menyimpan tugas Looping

## Social Media
* [Instagram](https://www.instagram.com/fai.kryz/)
* [Facebook](https://www.facebook.com/FaikarMochT)

## KickRoom
Program kick otomatis dari room yang tidak sesuai ketentuan
### Compiler Online :
[KickRoom](https://onlinegdb.com/sOV5BFAp9A)

### Source Code : 
```
#include <iostream>
using namespace std;

struct wpn_data {
    int id;
    string nama_user;
    string nama_wpn;
    string tipe_wpn;
};

int main() {
	// Sebuah program scan room game di mana penggunaan senjata Shotgun tidak diperkenankan
	cout << "=== Don't Use Shotgun Weapon ==="<<endl;
    wpn_data wpn[] {
        {
            1,
            "Andhika",
            "AK-47",
            "AssaultRifle",
        },
        {
            2,
            "Faiz",
            "P90",
            "SubMachineGun",
        },
        {
            3,
            "Grennz",
            "M1887",
            "Shotgun",
        },
        {
            4,
            "Freedy",
            "L115A1",
            "SniperRifle",
        },
        {
            5,
            "Lorenz",
            "Glock",
            "SecondaryRifle",
        }
    };
    
    for (int i=0; i<5;i++) {
        if (wpn[i].tipe_wpn == "Shotgun") {
            cout << "User " << wpn[i].nama_user << " di-kick karena telah menggunakan Shotgun";
	    break;
        }
        cout << "User " << wpn[i].nama_user << ", menggunakan " << wpn[i].nama_wpn << ", tipe " << wpn[i].tipe_wpn << endl;
    }
}
```
![image](https://user-images.githubusercontent.com/105912788/169553896-6814b208-87ee-49cb-ad21-ad65fe7ae38a.png)

## Pemilihan tiket kereta
Filter Harga tiket sesuai input pengguna (Daerah Bandung)

### Compiler Online :
[Tiket Kereta](https://onlinegdb.com/aVCwmVQ_lP)

### Source Code : 
```
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
```
![image](https://user-images.githubusercontent.com/105912788/169557785-790bcc03-27f9-456c-9b47-4b5d15013f7b.png)

