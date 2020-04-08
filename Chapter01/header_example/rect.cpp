#include "rect.h"

Rect::Rect(double s1, double s2)
    : side1_(s1), side2_(s2)
{}

const double Rect::get_area() const {
    return side1_ * side2_;
}
