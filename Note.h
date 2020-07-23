#ifndef NOTE_H
#define NOTE_H

class Note
{
private:
    char value, accidental;
    char[7] ionian;
    
public:
    Note(char value);
    Note(char value, char accidental);
    ~Note();
    
    void setAccidental();
    void setValue();
    
    int calculateInterval;

};

#endif // NOTE_H
