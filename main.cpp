#include <iostream>
#include <string>
#include "Materiel.h"
#include "date.h"
#include "salle.h"
//#include "poste_travail.h"





int main() {
    Materiel m1("Dell OptiPlex", TypeMateriel::poste_travail);

    // reservation materiel
    std::cout << m1 << std::endl;
    Date dateDebut(15, 6, 2024);
    Date dateFin(20, 6, 2024);
    m1.reserver_materiel("Dell OptiPlex", dateDebut, dateFin);


    Salle salle1("Salle 101", TypeSalle::informatique);
    salle1.ajouterMateriel(&m1);
    salle1.afficherInventaire();

    return 0;

}
 