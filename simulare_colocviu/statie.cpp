#include <bits/stdc++.h>
#include "statie.h"

statie::statie(bool inside_, std::string type_, int nr, std::vector<int> lin) :
    inside(inside_), type(type_), nr_ord(nr), linii(lin) {}

statie::~statie() {

}

statie::statie(const statie &) {

}

bool statie::isInside() const {
    return inside;
}

void statie::setInside(bool inside) {
    statie::inside = inside;
}

const std::vector<int> &statie::getLinii() const {
    return linii;
}

void statie::setLinii(const std::vector<int> &linii) {
    statie::linii = linii;
}

int statie::getNrOrd() const {
    return nr_ord;
}

void statie::setNrOrd(int nrOrd) {
    nr_ord = nrOrd;
}

const std::string &statie::getType() const {
    return type;
}

void statie::setType(const std::string &type) {
    statie::type = type;
}


