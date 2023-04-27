#include <string>
#include <iostream>

#include "side.h"
#include "angle.h"
#include "figure.h"

#include "print_info.h"

void print_info(Figure* p_figure)
{
    std::cout << p_figure->get_name() << ":\n";
    
    int sides_amount = p_figure->get_sides_amount();
    
    std::cout << "sides: ";
    for (int i = 0; i < sides_amount; i++)
    {
        Side ith_side = p_figure->get_side_info(i);
        std::cout << ith_side.get_name() << " = " << ith_side.get_value() << ((i == sides_amount - 1) ? "\n" : ", ");
    }
    
    std::cout << "angles: ";
    for(int i = 0; i < sides_amount; i++)
    {
        Angle ith_angle = p_figure->get_angle_info(i);
        std::cout << ith_angle.get_name() << " = " << ith_angle.get_value() << ((i == sides_amount - 1) ? "\n" : ", ");
    }
    
    std::cout << std::endl;
}
