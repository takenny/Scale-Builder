#ifndef SCALE_H
#define SCALE_H
#include <iostream>
#include <string>

class Scale
{
private:
    std::string type;
    Note root;
    Note scale[8];

    
public:
    Scale(char);
    Scale(Note, std::string);
    void printScale();
};

#endif // SCALE_H
