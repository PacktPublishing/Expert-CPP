#ifndef RECT_H
#define RECT_H

struct Rect
{
private:
    double side1_;
    double side2_;

public:
    Rect(double s1, double s2);
    const double get_area() const;
};

#endif // RECT_H
