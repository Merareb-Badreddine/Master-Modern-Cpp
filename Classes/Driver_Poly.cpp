#include "class Poly.hpp"

using namespace std;

int main()
{
    int order;
    cout << "Please enter the order: ";
    cin >> order;
    cout << "Please enter the " << order << " coefficients, space-separated: ";
    float* coeffs = new float[order];
    for (int i = 0; i < order; i++) cin >> coeffs[i];

    Poly poly1(order, coeffs);

    cout << "\n---------------- Poly #1: ----------------------\n" << poly1; // Same as poly.show()

    int x;
    cout << "Enter X value to compute: ";
    cin >> x;
    cout << "Result: " << poly1.compute(x) << endl;

    int order2 = 3;
    float coeffs2[] = { 4.0f, 5.0f, 4.0f };
    Poly poly2(order2, coeffs2);

    cout << "\n---------------- Poly #2: ----------------------\n" << poly2;

    Poly poly3;
    poly3 = poly1 + poly2;

    cout << "\n---------------- Poly #3 (after #3 = #1 + #2): ----------------------\n" << poly3;
    // ... (The rest of the code is not fully visible, but this is what is clearly visible)
}
