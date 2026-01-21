#include "salle.h"

Salle::Salle(const std::string& nom, TypeSalle typeSalle)
    : nom_(nom), typeSalle_(typeSalle) {}

std::string Salle::getNom() const
{
    return nom_;
}   

TypeSalle Salle::getTypeSalle() const
{
    return typeSalle_;
}


void Salle::ajouterMateriel(Materiel* materiel) {
    inventaire_.push_back(materiel);
}

std::string Salle::typeSalle_choisi(TypeSalle t) const {
    switch(t) {
        case TypeSalle::cours: return "Cours";
        case TypeSalle::informatique: return "Informatique";
        case TypeSalle::technique: return "Technique";
        default: return "Inconnu";
    }
}
void Salle::afficherInventaire() const {
    std::cout << "Inventaire de la salle " << nom_ << " :" << std::endl;
    for (const auto& materiel : inventaire_) {
        std::cout << "- " << materiel->getNom() << " (Type: " << materiel->typeMateriel_choisi(materiel->getTypeMateriel()) << ")" << std::endl;
    }
}



