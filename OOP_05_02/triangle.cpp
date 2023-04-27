#include <string>

#include "side.h"
#include "angle.h"
#include "figure.h"
#include "triangle.h"

Triangle::Triangle()
{
    sides_amount = 3;
    figure_name = "Triangle";
    p_sides = create_sides(3, p_sides_names);
    p_angles = create_angles(3, p_angles_names);
}

Triangle::Triangle(double a, double b, double c, double A, double B, double C)
{
    sides_amount = 3;
    figure_name = "Triangle";
    p_sides = create_sides(3, p_sides_names);
    p_angles = create_angles(3, p_angles_names);
    
    set_sides_values(a, b, c);
    set_angles_values(A, B, C);
}

Triangle::~Triangle()
{
    delete[] p_sides;
    p_sides = nullptr;
    delete[] p_angles;
    p_angles = nullptr;
}

void Triangle::set_sides_values(double a, double b, double c)
{
    p_sides[0].set_value(a);
    p_sides[1].set_value(b);
    p_sides[2].set_value(c);
}

void Triangle::set_angles_values(double A, double B, double C)
{
    p_angles[0].set_value(A);
    p_angles[1].set_value(B);
    p_angles[2].set_value(C);
}
