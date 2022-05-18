#include <bits/stdc++.h>
#include "statie.h"
#include "pct_informare.h"
#include "generator.h"

template <typename T, typename Q>
class Pret : public pct_informare {
    int pret = 2;
    char nume_statia1[15], nume_statia2[15];

    std::string ns1, ns2;
    void nume1() {
        strcpy(nume_statia1, typeid(T).name());
        while (nume_statia1[0] >= '0' && nume_statia1[0] <= '9')
            strcpy(nume_statia1, nume_statia1 + 1);
        ns1 = nume_statia1;
    }

    void nume2() {
        strcpy(nume_statia2, typeid(Q).name());
        while (nume_statia2[0] >= '0' && nume_statia2[0] <= '9')
            strcpy(nume_statia2, nume_statia2 + 1);
        ns2 = nume_statia2;
    }

public:
    int calatorie(T s1, Q s2) {
        nume1();nume2();
        std::cout << "Pretul calatoriei intre statia de tip " << ns1 <<", " << s1.nume << " si statia de tip " << ns2 << ", " << s2.nume << " este: ";
        if (ns1 == ns2 && ns1 == "SU") {
            int ok = 0;
            for (auto i : s1.lista)
                if (find (s2.lista.begin(), s2.lista.end(), i) != s2.lista.end()) {
                    ok = 1;
                }
            if (ok == 1)
                return pret + pret * 0.15;
            else
                return pret;
        }
        else if (ns1 == ns2 && ns1 == "SE") {
            int ok = 0;
            for (auto i : s1.lista)
                if (find (s2.lista.begin(), s2.lista.end(), i) != s2.lista.end())
                    ok = 1;
            if (ok == 0)
                return pret + pret * 0.2;
            else
                return pret + pret * 0.25;
        }
        else if (ns1 != ns2)
        {
            int ok = 0;
            for (auto i : s1.lista)
                if (find (s2.lista.begin(), s2.lista.end(), i) != s2.lista.end())
                {
                    ok = 1;
                }
            if (ok == 0)
                return pret + pret * 0.3;
            else
                return pret + pret * 0.4;
        }
    }
};

template<typename T>
class Autobuz : public pct_informare {
    std::vector<T> autobuze;
public:

    void adaugare(T k) {
        autobuze.push_back(k);
    }

    void trece(int x) {
        std::vector<int>::iterator it;
        for (it = autobuze.begin(); it != autobuze.end(); it++) {
            ///eroare de tip
            ///Member reference base type 'int' is not a structure or union
            if (find((*it).statii.begin(), (*it).statii.end(), x) != (*it).statii.end())
                std::cout << (*it).nume << " ";
        }
    }
};

///nu am finalizat header si cpp-ul de statie RIP
int main() {
    pct_informare a("Izvor", "SgMaj", 123, 6, {601, 336}, "Palatul"), b("ggg", "ddd", 22, 2, {601, 222}, "Da");
    Autobuz<pct_informare> k;
    std::cout << a;
    Pret<///>;
    cout << "";
    return 0;s
    ///yup iau 1 in ritmul acesta
}
