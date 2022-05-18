#ifndef SIMULARE_COLOCVIU_STATIE_H
#define SIMULARE_COLOCVIU_STATIE_H

#include <bits/stdc++.h>

class statie {
private:
    bool inside;
    std::string type;
    int nr_ord;
    std::vector<int> linii;
public:
    statie(bool, std::string, int, std::vector<int>);

    virtual ~statie();

    statie(const statie&);

    bool isInside() const;

    void setInside(bool inside);

    const std::vector<int> &getLinii() const;

    void setLinii(const std::vector<int> &linii);

    int getNrOrd() const;

    void setNrOrd(int nrOrd);

    const std::string &getType() const;

    void setType(const std::string &type);
};

#endif //SIMULARE_COLOCVIU_STATIE_H
