#include <iostream>
using namespace std;
class Gym {
public:
    int waga, obGryd, obPlechi, obBiceps, obTalia, obNogi, obStegna, obIkru;
    Gym(int w, int og, int op, int ob, int ot, int on, int os, int oi) {
        waga = w;
        obGryd = og;
        obPlechi = op;
        obBiceps = ob;
        obTalia = ot;
        obNogi = on;
        obStegna = os;
        obIkru = oi;
    }
    void zapolnit() {
        cout << "waga? (dont say kilo ok?)" << endl;
        cin >> waga;
        cout << "obem grydeu?" << endl;
        cin >> obGryd;
        cout << "obem plecheu?" << endl;
        cin >> obPlechi;
        cout << "obem bicepsa?" << endl;
        cin >> obBiceps;
        cout << "obem talii?" << endl;
        cin >> obTalia;
        cout << "obem Nog?" << endl;
        cin >> obNogi;
        cout << "obem stegon?" << endl;
        cin >> obStegna;
        cout << "obem ikr?" << endl;
        cin >> obIkru;
    }
    void foto() {
        cout << "123" << endl;
    }
    void galereya() {
        cout << "321" << endl;
    }
    void koment() {
        string a;
        int b;
        cout << "bysch koment dobovlat? (1 - da, 0 - net)" << endl;
        cin >> b;
        if (b == 1) {
            cout << "wwedi koment: ";
            cin >> a;
        }
        else {
            cout << "ny kak hosch" << endl;
        }
    }
    void info() {
        cout << "waga: " << waga << endl;
        cout << "obem grydeu: " << obGryd << endl;
        cout << "obem plecheu: " << obPlechi << endl;
        cout << "obem bicepsa: " << obBiceps << endl;
        cout << "obem talii: " << obTalia << endl;
        cout << "obem Nog: " << obNogi << endl;
        cout << "obem stegon: " << obStegna << endl;
        cout << "obem ikr: " << obIkru << endl;
        
    }
    void choice() {
        int ab = 1;
        while (ab != 0) {
            cout << "che hosch? \n 1 - zapolnit \n 2 - foto \n 3 - galereya \n 4 - koment \n 5 - info \n 0 - exit" << endl;
            cin >> ab;
            switch (ab)
            {
            case 1:
                zapolnit();
                break;
            case 2:
                foto();
                break;
            case 3:
                galereya();
                break;
            case 4:
                koment();
                break;
            case 5:
                info();
                break;
            case 0:
                cout << "exit" << endl;
                break;
            default:
                cout << "takogo nety" << endl;
                break;
            }
        }
    }
};
int main(){
    Gym man1(0, 0, 0, 0, 0, 0, 0, 0);
    man1.choice();
}
