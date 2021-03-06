/*
    Author:  Justin Nguyen
    Created: 6/5/2016
*/

#include <iostream>
#include "struct_defs.h"

Fraction pass_by_value(Fraction frac) {
	frac.numerator = 42;
	return frac;
}

Fraction* pass_by_reference(Fraction* frac_ptr) {
	frac_ptr -> numerator = 3.14;
	return frac_ptr;
}

int main() {
	Fraction frac {1.2, 2.0};

	pass_by_value(frac);
	std::cout << frac.numerator << "\n";
	frac = pass_by_value(frac);
	std::cout << frac.numerator << "\n";
	
	pass_by_reference(&frac);
	std::cout << frac.numerator << "\n";
	Fraction* ptr = pass_by_reference(&frac);
	ptr -> denominator = 16.123;
	std::cout << frac.denominator << "\n";
}
