#include <string>

#include "side.h"
#include "angle.h"
#include "figure.h"

Figure::Figure()
{
    sides_amount = 0;
    figure_name = "null figure";
    
    p_sides = nullptr;
    p_angles = nullptr;
}

Side* Figure::create_sides(int sides_amount, char* sides_names)
{
    Side* p_sides = new Side[sides_amount];
    
    for (int i = 0; i < sides_amount; i++)
    {
        std::string side_name = "";
        side_name += sides_names[i];
        p_sides[i].set_name(side_name);
    }
    
    return p_sides;
}

Angle* Figure::create_angles(int sides_amount, char* angles_names)
{
    Angle* p_angles = new Angle[sides_amount];
    
    for (int i = 0; i < sides_amount; i++)
    {
        std::string angle_name = "";
        angle_name += angles_names[i];
        p_angles[i].set_name(angle_name);
    }
    
    return p_angles;
}

Side Figure::get_side_info(int side_number)
{
    Side side_copy;
    
    if(side_number >= 0 && side_number < sides_amount)
    {
        side_copy = p_sides[side_number];
    }
    
    return side_copy;
}

Angle Figure::get_angle_info(int angle_number)
{
    Angle angle_copy;
    
    if(angle_number >= 0 && angle_number < sides_amount)
    {
        angle_copy = p_angles[angle_number];
    }
    
    return angle_copy;
}
