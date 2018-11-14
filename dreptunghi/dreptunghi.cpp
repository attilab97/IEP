#include "dreptunghi.h"
#include <iostream>
Dreptunghi::Dreptunghi(float latime, float lungime):l(latime),L(lungime)
{
    l = latime;
    L = lungime;
}
float Dreptunghi::arie()
{
    return l*L;
}
