#include <iostream>
#include <string.h>
#include <sstream>
#include "ncomplex.h"
NComplex::NComplex(float re, float im)
{
    this->re = re;
    this->im = im;
}
NComplex NComplex::adunare(NComplex c)
{
    float re_nou = this->re + c.re;
    float im_nou = this->im + c.im;
    NComplex c_nou(re_nou, im_nou);
    return c_nou;
}
NComplex NComplex::scadere(NComplex c)
{
    float re_nou = this->re - c.re;
    float im_nou = this->im - c.im;
    NComplex c_nou(re_nou, im_nou);
    return c_nou;
}
string NComplex::toString()
{
	stringstream ss;
	ss<<"Nr. complex: "<<this->re<<"+"<<this->im<<"i";
	return ss.str();
}