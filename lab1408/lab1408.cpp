#include <iostream>
using namespace std;
class Gym {
public:
    int waga, obGryd, obPlechi, obBiceps, obTalia, obNogi, obStegna, obIkru;
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
        cout << "obem plecheu: " << obPlechi << endl;
        cout << "obem bicepsa: " << obBiceps << endl;
        cout << "obem talii: " << obTalia << endl;
        cout << "obem Nog: " << obNogi << endl;
        cout << "obem stegon: " << obStegna << endl;
        cout << "obem ikr: " << obIkru << endl;
        
    }
};
int main()
{
    
}
