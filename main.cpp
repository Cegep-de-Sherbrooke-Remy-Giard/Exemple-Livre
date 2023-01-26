#include <iostream>
#include "Livre.h"

using namespace std;

int main() 
{
  setlocale(LC_ALL, "french"); 

  Livre bonheurOccasion = Livre("Bonheur d'occasion", "Gabrielle Roy", 24.99);

  cout << "Titre: ";
  bonheurOccasion.afficherTitre();
  cout << endl;

  cout << "Prix: ";
  bonheurOccasion.afficherPrix();
  cout << endl;

  system("pause");

  return 0;
}