#include "Scale.h"

int Scale::ionian[7] = {2,2,1,2,2,2,1};
//dorian        w h w w w h w
//phriguan      h w w w h w w
//lydian        w w w h w w h
//mixolydian    w w h w w h w
//aolina        w h w w h w w
//locian        h w w h w w w
char Scale::notes[12] = {'A', ' ', 'B', 'C', ' ', 'D', ' ', 'E', 'F', ' ', 'G', ' '};

Scale::Scale(char root)
{
    type = "IONIAN";
    scale[0] = {root, ' '};
    scaleBuilder(type);
    
}
Scale::Scale(Note root, std::string type){
    scale[0] = root;
    scaleBuilder(type);
}
void Scale::printScale(){
    std::string scaleString = "";
    for(int i = 0; i < 8; i++){
        scaleString += scale[i].value;
        if(scale[i].accidental != ' ')
            scaleString += scale[i].accidental;
        scaleString += " ";
    }
    
    std::cout << scaleString << std::endl;
}

void Scale::scaleBuilder(std::string type){
    int start = 0;
    if(type == "IONIAN") start = 0;
    if(type == "DORIAN") start = 1;
    if(type == "PHRYGIAN") start = 2;
    if(type == "LYDIAN") start = 3;
    if(type == "MIXOLYDIAN") start = 4;
    if(type == "AOLIAN") start = 5;
    if(type == "LOCRIAN") start = 6;
    
    
    
    int index;
    for(index = 0; notes[index] != scale[0].value; index++){
        if(scale[0].value == '#') index++;
        if(scale[0].value == 'b') index--;
    }
    
    for(int i = 0; i < 7; i++){
        std::cout << index << " " << scale[i].value << scale[i].accidental << " " << (i+start)%7 << std::endl;
        char previousNote = scale[i].value;
        index = (index + ionian[(i+start)%7])%12;

        if(notes[index] == ' '){
            if(notes[((index-1)+12)%12] != previousNote)
                scale[i+1] = {notes[((index-1)+12)%12], '#'};
            else
                scale[i+1] = {notes[(index+1)%12], 'b'};
        }
        else
            scale[i+1] = {notes[index], ' '};
    }
}

