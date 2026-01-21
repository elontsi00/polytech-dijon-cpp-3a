#include "Date.h"
#include <iostream>

Date::Date(int jour, int mois, int annee) : jour_(jour), mois_(mois), annee_(annee) {
    if (!estValide()) {
        std::cout << "Date invalide !" << std::endl;
        jour_ = mois_ = annee_ = 0;
    }
}

bool Date::estValide() const {
    if (annee_ < 0 || mois_ < 1 || mois_ > 12 || jour_ < 1 || jour_ > 31)
        return false;

    if ((mois_ == 4 || mois_ == 6 || mois_ == 9 || mois_ == 11) && jour_ > 30)
        return false;

    if (mois_ == 2) {
        bool bissextile = (annee_ % 4 == 0 && annee_ % 100 != 0) || (annee_ % 400 == 0);
        if ((bissextile && jour_ > 29) || (!bissextile && jour_ > 28))
            return false;
    }
    return true;
}

int Date::getJour() const { return jour_; }
int Date::getMois() const { return mois_; }
int Date::getAnnee() const { return annee_; }

void Date::afficher() const {
    std::cout << jour_ << "/" << mois_ << "/" << annee_ << std::endl;
}
