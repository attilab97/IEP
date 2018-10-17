#include "dreptunghi.hpp"
#include <iostream>
Dreptunghi::Dreptunghi(float latine, float lungime)
{
    l = latine;
    L = lungime;
}
float Dreptunghi::arie()
{
    return l*L;
}
