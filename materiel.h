#ifndef MATERIEL_H
#define MATERIEL_H
#include <string>
#include <iostream>
#include "date.h"

enum class TypeMateriel { poste_travail, petit_materiel,ecran, connectique, materiel_reseau, materiel_specifique };

class Materiel {
private:
    std::string nom_;
    TypeMateriel typeMateriel_;

public:
    Materiel(const std::string& nom, TypeMateriel typeMateriel);
    std::string getNom() const;
    TypeMateriel getTypeMateriel() const;
    std::string typeMateriel_choisi(TypeMateriel t) const;

    void reserver_materiel(const std::string& nom, const Date& dateDebut, const Date& dateFin);


    friend std::ostream& operator<<(std::ostream& os, const Materiel& materi);

};
#endif