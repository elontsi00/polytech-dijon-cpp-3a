#ifndef SALLE_H
#define SALLE_H
#include <string>
#include <iostream>
#include "materiel.h"
#include <vector>

enum class TypeSalle { cours, informatique, technique };

class Salle {
private:
    std::string nom_;
    TypeSalle typeSalle_;
    std::vector<Materiel*> inventaire_;

public:

    Salle(const std::string& nom, TypeSalle typeSalle);
    std::string getNom() const;
    TypeSalle getTypeSalle() const;
    
    std::string typeSalle_choisi(TypeSalle t) const;
    
    void ajouterMateriel(Materiel* materiel);
    void afficherInventaire() const;

};
#endif