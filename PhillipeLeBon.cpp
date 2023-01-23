#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    srand(time(0)); // initialisation de la fonction rand()
    int joueur1 = 0, joueur2 = 0; // positions des joueurs
    while (joueur1 < 316 && joueur2 < 316) {
        // tour du joueur 1
        int nombre = rand() % 4 + 2; // generation d'un nombre aleatoire entre 2 et 5
        if (joueur1 + nombre <= 316) {
            joueur1 += nombre;
            cout << "Joueur 1 est maintenant sur la marche " << joueur1 << endl;
        }else {
            cout << "Joueur 1 tombe sur une marche superieure à 316, tour annule" << endl;
        }
        if (joueur1 >= 316) {
            cout << "Joueur 1 a gagne" << endl;
            break;
        }
        // tour du joueur 2
        nombre = rand() % 4 + 2; // generation d'un nombre aleatoire entre 2 et 5
        if (joueur2 + nombre <= 316) {
            joueur2 += nombre;
            cout << "Joueur 2 est maintenant sur la marche " << joueur2 << endl;
        }else {
            cout << "Joueur 2 tombe sur une marche superieure à 316, tour annule" << endl;
        }
        if (joueur2 >= 316) {
            cout << "Joueur 2 a gagne" << endl;
            break;
        }
    }
    return 0;
}
