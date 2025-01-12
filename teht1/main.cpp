#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int game(int maxnum, int &arvaustenlkm);

int main() {
    int maxnum;
    int arvaustenlkm = 0;

    cout << "Aseta numero, jonka arvaus voi maksimissaan olla." << endl;
    cin >> maxnum;
    game(maxnum, arvaustenlkm);

    cout << "Arvaukset: " << arvaustenlkm << endl;

    return 0;
}

int game(int maxnum, int& arvaustenlkm) {
    srand(time(0));
    int satunnaisluku = rand() % maxnum+1;
    int arvaus;

    cout << "Arvaa satunnainen luku." << endl;
    cin >> arvaus;
    arvaustenlkm += 1;

    while(arvaus != satunnaisluku){
        if(arvaus < satunnaisluku) {
            cout << "Luku on suurempi. Arvaa uudestaan." << endl;
        }
        else if(arvaus > satunnaisluku) {
            cout << "Luku on pienempi. Arvaa uudestaan." << endl;
        }
        cin >> arvaus;
        arvaustenlkm += 1;
    }

    cout << "Oikea vastaus!" << endl;
}
