#ifndef POSTE_TRAVAIL_H
#define POSTE_TRAVAIL_H
#include "materiel.h"


class PosteTravail : public Materiel {
private:
    std::string SE_;

public:

    std::string getSE() const;
    PosteTravail(const std::string& nom, TypeMateriel t, const std::string& SE);

    void afficherDetails() const;
};
#endif
