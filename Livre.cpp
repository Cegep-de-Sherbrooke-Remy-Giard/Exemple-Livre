#include <iostream>
#include "Livre.h"

using namespace std;

Livre::Livre(const Livre& source) {
	cout << "Constructeur de copie: " << source._titre << endl;

	_prix = source._prix;
	_titre = source._titre;
	_auteur = source._auteur;
}

Livre::~Livre() {
	cout << "Je vais auto-détruire le livre" << endl;
}

Livre::Livre(string titre, string auteur, float prix) {
	initialiser(titre, auteur, prix);
}

void Livre::initialiser(string titre, string auteur, float prix) {
  _titre = titre;
  _auteur = auteur;
  _prix = prix;
}

void Livre::afficherPrix() {
  cout << _prix;
}

void Livre::afficherTitre() {
  cout << _titre;
}