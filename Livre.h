#pragma once

class Livre
{
private:
	std::string _titre;
	std::string _auteur;
	float _prix;

public:
	Livre(const Livre& source); // constructeur de copie
	Livre(std::string titre, std::string auteur, float prix); // constructeur avec paramètres
	~Livre(); // destructeur

	void initialiser(std::string titre, std::string auteur, float prix);
	void afficherTitre();
	void afficherPrix();
};
