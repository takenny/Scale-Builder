#include "Scale.h"
#include <iostream>

int main(){
    
    Scale aScale({'A', ' '}, "IONIAN");
    aScale.printScale();
    std::cout << std::endl;
    
    Scale bScale('B');
    bScale.printScale();
    std::cout << std::endl;
    
    Scale cScale('C');
    cScale.printScale();
    std::cout << std::endl;
    
    Scale dScale('D');
    dScale.printScale();
    std::cout << std::endl;

    Scale eScale('E');
    eScale.printScale();
    std::cout << std::endl;
    
    Scale fScale('F');
    fScale.printScale();
    std::cout << std::endl;
    
    Scale gScale('G');
    gScale.printScale();
    std::cout << std::endl;
/*    
    Scale cIonian({'E', 'b'}, "IONIAN");
    cIonian.printScale();
    std::cout << std::endl;*/
    
//    Scale dDorian({'D', '#'}, "DORIAN");
//    dDorian.printScale();
//    std::cout << std::endl;
    
//    Scale ePhrigian({'E', ' '}, "PHRYGIAN");
//    ePhrigian.printScale();
//    std::cout << std::endl;
//    
//    Scale fLydian({'F', ' '}, "LYDIAN");
//    fLydian.printScale();
//    std::cout << std::endl;
//    
//    Scale gMixolydian({'G', ' '}, "MIXOLYDIAN");
//    gMixolydian.printScale();
//    std::cout << std::endl;
//    
//    Scale aAolian({'A', '#'}, "AOLIAN");
//    aAolian.printScale();
//    std::cout << std::endl;
//    Scale bLocrian({'B', ' '}, "LOCRIAN");
//    bLocrian.printScale();
//    std::cout << std::endl;
    
    return 0;
}
//Ionian
//c  d  e  f  g  a  b  c
//2  2  2  1  2  2  2  1


//