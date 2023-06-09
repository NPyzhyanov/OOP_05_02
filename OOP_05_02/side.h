#ifndef SIDE_H
#define SIDE_H

class Side
{
public:
    Side() {name = "unnamed side"; value = 0.0;}
    //Side(std::string name_) {name = name_; value = 0.0;}
    
    void set_name(std::string name_) {name = name_;}
    void set_value(double value_) {value = value_;}
    
    std::string get_name() {return name;}
    double get_value() {return value;}
    
private:
    std::string name;
    double value;
};

#endif // SIDE_H
