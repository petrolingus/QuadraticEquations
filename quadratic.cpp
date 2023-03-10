#include "quadratic.h"

namespace quadratic {

    std::pair<double, double> calculate(double a, double b, double c) {
        double d = b * b - 4 * a * c;
        double x1 = -b + sqrt(d) / (2 * a);
        double x2 = -b - sqrt(d) / (2 * a);
        return std::make_pair(x1, x2);
    }

} // quadratic