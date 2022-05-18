#ifndef SIMULARE_COLOCVIU_PCT_INFORMARE_H
#define SIMULARE_COLOCVIU_PCT_INFORMARE_H

#include <bits/stdc++.h>
#include "generator.h"

class pct_informare:public ID_generator {
private:
    std::string strada;
    int numar;
    int sector;
    std::vector<int> linii_tr;
    std::string nume_statie;
    static int id;
public:
    pct_informare(std::string, int, int, std::vector<int>, std::string);

    virtual ~pct_informare();

    pct_informare(const pct_informare&);

    const std::string &getStrada() const;

    void setStrada(const std::string &strada);

    int getNumar() const;

    void setNumar(int numar);

    int getSector() const;

    void setSector(int sector);

    const std::vector<int> &getLiniiTr() const;

    void setLiniiTr(const std::vector<int> &liniiTr);

    const std::string &getNumeStatie() const;

    static void setNumeStatie(const std::string &numeStatie);

    void operator= (pct_informare k) {
        nume_statie = k.nume_statie;
        strada = k.strada;
        numar = k.numar;
        sector = k.sector;
        linii_tr = k.linii_tr;
    }

    void afisare_statie() {
        std::cout << "Statia " << getNumeStatie() << "\n";
        std::cout << "Strada: " << getStrada() << "\n";
        std::cout << "Numar: " << getNumar() << "\n";
        std::cout << "Sector: " << getSector() << "\n";
        std::cout << "Lista autobuze : ";
        for (auto i : getLiniiTr())
            std::cout << i << " ";
        std::cout << '\n' << id << '\n';
    }

    virtual void afis() {
        afisare_statie();
        std::cout << "\n";
    }

    friend std::ostream& operator<<(std::ostream &out, pct_informare &k) {
        k.afis();
        return out;
    }

    friend std::istream& operator>>(std::istream &in, pct_informare &k) {
        int n, x;
        in >> k.nume >> k.strada >> k.numar >> k.sector >> n;
        for (int i = 0; i < n; i++) {
            std::cin >> x;
            k.lista.push_back(x);
        }
    }
};
#endif
