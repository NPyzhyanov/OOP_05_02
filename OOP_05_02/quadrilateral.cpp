#include <string>

#include "side.h"
#include "angle.h"
#include "figure.h"
#include "quadrilateral.h"

Quadrilateral::Quadrilateral()
{
    sides_amount = 4;
    figure_name = "Quadrilateral";
    p_sides = create_sides(4, p_sides_names);
    p_angles = create_angles(4, p_angles_names);
}

Quadrilateral::Quadrilateral(double a, double b, double c, double d, double A, double B, double C, double D)
{
    sides_amount = 4;
    figure_name = "Quadrilateral";
    p_sides = create_sides(4, p_sides_names);
    p_angles = create_angles(4, p_angles_names);
    
    set_sides_values(a, b, c, d);
    set_angles_values(A, B, C, D);
}

Quadrilateral::~Quadrilateral()
{
    delete[] p_sides;
    p_sides = nullptr;
    delete[] p_angles;
    p_angles = nullptr;
}

void Quadrilateral::set_sides_values(double a, double b, double c, double d)
{
    p_sides[0].set_value(a);
    p_sides[1].set_value(b);
    p_sides[2].set_value(c);
    p_sides[3].set_value(d);
}

void Quadrilateral::set_angles_values(double A, double B, double C, double D)
{
    p_angles[0].set_value(A);
    p_angles[1].set_value(B);
    p_angles[2].set_value(C);
    p_angles[3].set_value(D);
}
