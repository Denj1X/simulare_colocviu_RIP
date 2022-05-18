#include <bits/stdc++.h>
#include "pct_informare.h"

pct_informare::pct_informare(std::string str, int nr, int sct, std::vector<int> lnt, std::string nms):
    strada(str), numar(nr), sector(sct), linii_tr(lnt), nume_statie(nms) {
    this->id = getId();
}

pct_informare::pct_informare(const pct_informare &xd) {
    this->strada = xd.strada;
    this->numar = xd.numar;
    this->linii_tr = xd.linii_tr;
    this->nume_statie = xd.nume_statie;
    this->sector = xd.sector;
    this->id = xd.id;
}

pct_informare::~pct_informare() {

}

const std::string &pct_informare::getStrada() const {
    return strada;
}

void pct_informare::setStrada(const std::string &strada_) {
    pct_informare::strada = strada_;
}

int pct_informare::getNumar() const {
    return numar;
}

void pct_informare::setNumar(int _numar) {
    pct_informare::numar = _numar;
}

int pct_informare::getSector() const {
    return sector;
}

void pct_informare::setSector(int _sector) {
    pct_informare::sector = _sector;
}

const std::vector<int> &pct_informare::getLiniiTr() const {
    return linii_tr;
}

void pct_informare::setLiniiTr(const std::vector<int> &liniiTr) {
    linii_tr = liniiTr;
}

const std::string &pct_informare::getNumeStatie() const {
    return nume_statie;
}

void pct_informare::setNumeStatie(const std::string &numeStatie) {
    nume_statie = numeStatie;
}
