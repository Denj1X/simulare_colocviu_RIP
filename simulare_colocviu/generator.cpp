#include <bits/stdc++.h>
#include "generator.h"

ID_generator::ID_generator() {}

int ID_generator::getId() {
    return id++;
}

int ID_generator::id = 0;