#include <iostream>
#include <string.h>
using namespace std;
class NComplex{
    private: 
        float re,im;      	
    public:
        NComplex(float re, float im);
        NComplex adunare(NComplex c);
        NComplex scadere (NComplex c);
        string toString();
};