#include <iostream>
#include <string>
#include "Materiel.h"
#include "date.h"
#include "salle.h"
//#include "poste_travail.h"





int main() {
// creation materiel
    Materiel m1("Dell OptiPlex", TypeMateriel::poste_travail);
    Materiel m2("Ecran Samsung", TypeMateriel::ecran);
    Materiel m3("Switch Cisco", TypeMateriel::materiel_reseau);

// creation salles
    Salle salle1("Salle 101", TypeSalle::informatique);
    Salle salle2("Salle 202", TypeSalle::technique);
    Salle salle3("Salle 303", TypeSalle::cours);
// ajouter materiel aux salles
    salle1.ajouterMateriel(&m1);
    salle3.ajouterMateriel(&m2);
    salle2.ajouterMateriel(&m3);

  // afficher inventaire des salles  
    salle1.afficherInventaire();
    salle2.afficherInventaire();
    salle3.afficherInventaire();

// reservation materiel
    std::cout << m1 << std::endl;
    Date dateDebut(15, 6, 2024);
    Date dateFin(20, 6, 2024);
    m1.reserver_materiel("Dell OptiPlex", dateDebut, dateFin);

    return 0;

}
 