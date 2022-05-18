#ifndef SIMULARE_COLOCVIU_GENERATOR_H
#define SIMULARE_COLOCVIU_GENERATOR_H

#include <bits/stdc++.h>

class ID_generator {
private:
    static int id;
public:
    ID_generator();

    virtual ~ID_generator() = default;

    static int getId();
};
#endif //SIMULARE_COLOCVIU_GENERATOR_H
