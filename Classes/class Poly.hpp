#ifndef POLY_H
#define POLY_H

using namespace std ;

#include <iostream>
#include <cmath> // For std::pow in compute (though you might have your own pow)

class Poly {

private:
    int order;
    float* coeffs;

public:
    // Constructors & Destructor
    Poly(); 
    Poly(int order , float coeffs []); 
    ~Poly(); // Destructor

     // Member Functions
    void show(ostream& out) const;
    float compute(float x) const;
    void add_1_to_all_coeffs();

    // Operator Overloading
    friend Poly operator+(Poly const& , Poly const&); 

  }; 

   Poly operator+(Poly const& poly1, Poly const& poly2); 
   ostream& operator<<(ostream& out, Poly const&  poly);
    

#endif // POLY_H
