#ifndef DATE_H
#define DATE_H

class Date {
private:
    int jour_;
    int mois_;
    int annee_;

    bool estValide() const;

public:
    Date(int jour, int mois, int annee );

    int getJour() const;
    int getMois() const;
    int getAnnee() const;

    void afficher() const;
};

#endif
