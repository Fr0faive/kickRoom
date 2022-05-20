#KickRoom

```#include <iostream>
using namespace std;

struct wpn_data {
    int id;
    string nama_user;
    string nama_wpn;
    string tipe_wpn;
};

int main() {
    wpn_data wpn[] {
        {
            1,
            "Andhika"
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
    
    for (int i=0; i<=5;i++) {
        if (wpn[i].tipe_wpn == "Shotgun") {
            cout << "User dengan nama : " << wpn[i].nama_user << endl << "Telah menggunakan Shotgun";
            break;
        }
        cout << "User " << wpn[i].nama_user << " menggunakan " << wpn[i].nama_wpn << "tipe " << wpn[i].tipe_wpn << endl;
    }
}```
