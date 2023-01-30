#include <iostream>
#include "Livre.h"

using namespace std;

Livre& lireLivre(Livre& livre) {
	cout << "Appel a fonction lireLivre()";
	return livre;
}

int main() 
{
  setlocale(LC_ALL, "french"); 

  Livre bonheurOccasion("Bonheur d'occasion", "Gabrielle Roy", 24.99);

  cout << "Titre: ";
  bonheurOccasion.afficherTitre();
  cout << endl;

  cout << "Prix: ";
  bonheurOccasion.afficherPrix();
  cout << endl;

  Livre copie = bonheurOccasion;
  {
	  Livre livreRecu = lireLivre(bonheurOccasion);
  }

  system("pause");

  return 0;
}
