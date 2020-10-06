#ifndef _RAM
#define _RAM
#include "options.h"

class Ram : public Options{
    protected:
        int _gb;
    public:
        Ram(std::string name,double cost, int gb);
        ~Ram();
        Ram(std::istream& ist);
        virtual std::string to_string() const;
        virtual void save(std::ostream& ost); 
        virtual std::ostream& print(std::ostream& ost) const;
};

#endif