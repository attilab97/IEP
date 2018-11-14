// A safe array example.
#include <iostream>
#include <cstdlib>
using namespace std;
const int SIZE = 3;

class Vect {
    int v[SIZE];
  public:
    Vect() 
    {
      register int i;
      for(i=0; i<SIZE; i++) 
        v[i] = i;
    }
    int &operator[](int i);
};

// Provide range checking for atype.
int &Vect::operator[](int i)
{
  if(i<0 || i> SIZE-1) {
    cout << "\nIndex value of ";
    cout << i << " is out-of-bounds.\n";
    exit(1);
}
  return v[i];
}

int main() {
Vect ob;
  cout << ob[2];  // displays 2
  cout << " ";
  ob[2] = 25;  // [] appears on left
  cout << ob[2];  // displays 25
  ob[3] = 44; // generates runtime error, 3 out-of-range
return 0; }
