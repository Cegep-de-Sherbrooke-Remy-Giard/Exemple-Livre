#include <iostream>
#include "Livre.h"

using namespace std;


Livre::Livre(string titre, string auteur, float prix) {
	this->initialiser(titre, auteur, prix);
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