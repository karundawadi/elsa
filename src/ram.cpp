#include "ram.h"

Ram::Ram(std::istream& ist) : Options(ist){
    ist>>_gb;
}


//This is done
Ram:: Ram(std::string name,double cost, int gb) : Options(name,cost), _gb{gb} {}

std::string Ram::to_string() const{
    return _name + " ($" + std::to_string(_cost) + std::to_string(_gb)+")";
}
Ram::~Ram(){}

//Referying to slides
void Ram::save(std::ostream& ost){
    ost<<static_cast<Options>(*this)<<' '<<_gb;
}