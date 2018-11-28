#include <iostream>
#include <string.h>
#include <sstream>
#include <math.h>

using namespace std;
class Complex{
    private: 
        float re,im,r;   	
public:
    Complex(float re, float im)
    {
        this->re = re;
        this->im = im;
        this->r=sqrt(re*re + im*im);
    }
    Complex adunare(Complex c)
    {
        float re_nou = this->re + c.re;
        float im_nou = this->im + c.im;
        Complex c_nou(re_nou, im_nou);
        return c_nou;
    }
    Complex scadere(Complex c)
    {
        float re_nou = this->re - c.re;
        float im_nou = this->im - c.im;
        Complex c_nou(re_nou, im_nou);
        return c_nou;
    }
    string toString()
    {
        stringstream ss;
        ss<<"Nr. complex: "<<this->re<<"+"<<this->im<<"i"<<" r="<<this->r;
        return ss.str();
    }
    Complex& operator=(const Complex& rhs) 
    {
        if (this == &rhs)
        {
            cout<<"RAMURA 1"<<endl;
            return *this;
        }
        cout<<"RAMURA 2"<<endl;
        this->re=rhs.re;
        this->im=rhs.im;
        //am adaugat r si trebuie sa il copiez si pe el
        this->r=rhs.r;
        return *this;
    }
    Complex& operator+=(const Complex& rhs) 
    {
        this->re+=rhs.re;
        this->im+=rhs.im;
        //am adaugat r si trebuie sa il copiez si pe el
        this->r=sqrt(this->re * this->re + this->im * this->im);
        return *this;
    }
    Complex& operator-=(const Complex& rhs) 
    {
        this->re-=rhs.re;
        this->im-=rhs.im;

        //am adaugat r si trebuie sa il copiez si pe el
        this->r=sqrt(this->re * this->re + this->im * this->im);
        return *this;
    }

};
class ComplexN : public Complex{
    public:
        float x;
    public:
        ComplexN(float re, float im,float x):Complex(re,im)
        {
            this->x = x;
        }

        ComplexN& operator=(const ComplexN& rhs) 
        {
            if (this == &rhs)
            {
                cout<<"RAMURA 1"<<endl;
                return *this;
            }
            Complex::operator=(rhs);
            cout<<"RAMURA 2"<<endl;
            this->x=rhs.x;
            return *this;
        }
};

int main() 
{

    Complex c1(4,3),c2(1,-1);
    ComplexN cn(1,1,3), cn2(2,2,4);
    //c1+=c2;
    cn = cn2;
    cout<<cn.toString()<<endl;
    cout<<cn2.toString()<<endl;
    return 0; 
}
