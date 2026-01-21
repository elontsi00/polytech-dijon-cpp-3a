#include "poste_travail.h"

PosteTravail::PosteTravail(const std::string& nom, TypeMateriel t, const std::string& SE)
    : Materiel(nom, t), SE_(SE) {}

std::string PosteTravail::getSE() const {
    return SE_;
}


void PosteTravail::afficherDetails() const {
    std::cout << getNom() << ", Type: " << typeMateriel_choisi(getTypeMateriel()) << ", Systeme d'exploitation: " << SE_ << std::endl;
}

