#pragma once

class Livre
{
private:
  std::string _titre;
  std::string _auteur;
  float _prix;

public:
  Livre(std::string titre, std::string auteur, float prix);

  void initialiser(std::string titre, std::string auteur, float prix);
  void afficherTitre();
  void afficherPrix();
};
