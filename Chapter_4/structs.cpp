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

Fraction pass_by_reference(Fraction* frac_ptr) {
	frac_ptr -> numerator = 3.14;
	return frac_ptr;
}

int main() {

}
