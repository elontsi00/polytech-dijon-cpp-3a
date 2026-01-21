#include "materiel.h"
#include <iostream>

Materiel::Materiel(const std::string& nom, TypeMateriel typeMateriel)
    : nom_(nom), typeMateriel_(typeMateriel) {}

std::string Materiel::getNom() const {
    return nom_;
}
TypeMateriel Materiel::getTypeMateriel() const {
    return typeMateriel_;
}
std::string Materiel::typeMateriel_choisi(TypeMateriel t) const {
    switch(t) {
        case TypeMateriel::poste_travail:return "Poste de travail";
        case TypeMateriel::petit_materiel: return "Petit materiel";
        case TypeMateriel::ecran: return "Ecran";
        case TypeMateriel::connectique: return "Connectique";
        case TypeMateriel::materiel_reseau: return "Materiel reseau";
        case TypeMateriel::materiel_specifique: return "Materiel specifique";
        default: return "Inconnu";
    }
}

std::ostream& operator<<(std::ostream& os, const Materiel& materi) {
    os << "Materiel: " << materi.nom_ << ", Type: " << materi.typeMateriel_choisi(materi.typeMateriel_);
    return os;
}

void Materiel::reserver_materiel(const std::string& nom, const Date& dateDebut, const Date& dateFin) {
    if(nom == getNom()) {
        std::cout << "Le materiel " << nom << " est reserve du ";
            dateDebut.afficher();
            std::cout << " au ";
            dateFin.afficher();
        }
    else {
        std::cout << "Le materiel " << nom << " n'est pas disponible." << std::endl;
    }


}