#ifndef IHUELLACARBONO_H
#define IHUELLACARBONO_H

#include <string>
using namespace std;
class IHuellaCarbono{

public:
    virtual ~IHuellaCarbono(void){}
    virtual int calculoHuellaCarbono() = 0;
    virtual string ToString() = 0;

};
#endif // IHUELLACARBONO_H
