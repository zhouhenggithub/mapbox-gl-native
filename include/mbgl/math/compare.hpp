#pragma once

#include <cfloat>
#include <cmath>

namespace mbgl {
namespace util {

//template <typename T,
//          typename = std::enable_if<std::is_floating_point<T>::value>>
bool fuzzyEqual(double a, double b) {
    double diff = ::fabs(a - b);
    a = ::fabs(a);
    b = ::fabs(b);
    double min = b > a ? a : b;
    return diff * 1e12 <= min;
}

bool fuzzyEqual(float a, float b) {
    float diff = ::fabs(a - b);
    a = ::fabs(a);
    b = ::fabs(b);
    float min = b > a ? a : b;
    return diff * 1e5 <= min;
}

bool fuzzyIsNull(double a) {
    return ::fabs(a) <= 1e-12;
}

bool fuzzyIsNull(float a) {
    return ::fabs(a) <= 1e-5;
}

} // namespace util
} // namespace mbgl
