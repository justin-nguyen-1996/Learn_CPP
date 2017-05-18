/*
    Author:  Justin Nguyen
    Created: 5/30/2016
*/

#include <cmath>

int approxEqual(double a, double b, double absEpsilon, double relEpsilon) {
    /* comparison toward absolute epsilon
           used for comparing numbers near zero */
    double diff = fabs(a - b);
    if (diff <= absEpsilon) { return true; }

    /* comparison toward relative epsilon
           used as a backup comparison */
    double greater = ((diff > 0) ? a : b);
    return (diff <= greater * relEpsilon);
}

    
