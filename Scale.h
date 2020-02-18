#ifndef SCALE_H
#define SCALE_H
#include <iostream>
#include <string>

class Scale
{
private:
    std::string type;
    
    struct Note{
        char value;
        char accidental;
    };
    
    Note scale[8];
    static char notes[12];
    static int ionian[7];
    
public:
    Scale(char);
    Scale(Note, std::string);
    void printScale();
    void scaleBuilder(std::string);
};

#endif // SCALE_H
