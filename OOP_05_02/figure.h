#ifndef FIGURE_H
#define FIGURE_H

class Figure
{
public:
    Figure();
    
    std::string get_name() {return figure_name;}
    int get_sides_amount() {return sides_amount;}
    Side get_side_info(int side_number);
    Angle get_angle_info(int angle_number);
    
protected:
    int sides_amount;
    std::string figure_name;
    
    Side* p_sides;
    Angle* p_angles;
    
    Side* create_sides(int sides_amount_, char* sides_names);
    Angle* create_angles(int sides_amount_, char* angles_names);
    
    void update_figure_name(std::string new_name) {figure_name = new_name;}
};

#endif // FIGURE_H
