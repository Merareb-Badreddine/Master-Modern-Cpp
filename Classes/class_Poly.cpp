#include "class_Poly.hpp" 

  poly :: Poly() {} 
  poly :: Poly(int order , float coeffs []) : order(order), coeffs(coeffs) {} 
  poly :: ~Poly() { delete [] coeffs ; } // Destructor


void Poly::show(ostream& out = cout) const { // We set cout as default value for output
    out << "\nMy order is: " << order << endl;
    for (int i = 0; i < order; i++) {
        out << coeffs[i] << "x^" << i;
        if (i != order - 1) cout << " + ";
    }
    out << "\n\n";
}


float Poly::compute(float x) const {
    float result = 0;
    for (int i = 0; i < order; i++) {
        result += coeffs[i] * pow(x, i); // السطر المشار إليه باللون الأصفر
    }
    return result;
}


void Poly::operator=(Poly const& poly) {
    cout << "\nOverloaded assignment operator invoked!\n";
    order = poly.order;
    coeffs = new float[order];
    for (int i = 0; i < order; i++) {
     coeffs[i] = poly.coeffs[i]; 
   }  
}
 


// Line 36: Member function to add 1 to all coefficients
void Poly::add_1_to_all_coeffs() {
    for (int i = 0; i < order; i++) coeffs[i]++;
}

// Line 39: Overloaded addition operator (Free function or friend)
Poly operator+(Poly const & poly1, Poly const & poly2) {
    int new_order = max(poly1.order, poly2.order);
    float* new_coeffs = new float[new_order];

    for (int i = 0; i < new_order; i++) {
        if (i < poly1.order && i < poly2.order) {
            new_coeffs[i] = poly1.coeffs[i] + poly2.coeffs[i];
        }
        else if (i < poly1.order) {
            new_coeffs[i] = poly1.coeffs[i];
        }
        else if (i < poly2.order) {
            new_coeffs[i] = poly2.coeffs[i];
        }
    }
    // السطر الأخير:
    return Poly(new_order, new_coeffs);
}


ostream& operator<<(ostream& out, Poly const & poly) {
    poly.show(out);
    return out;
}
