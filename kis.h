#ifndef KIS_H
#define KIS_H

#include <Arduino.h>

class KST {
private:
    String s;
public:

    KST();    KST(const String &i); KST(const char *i);   
    void cc(const String &i); void cc(const char *i); void cc(char i);
    void cc(uint8_t i); void cc(int i);
    void cc(const KST& i);
    String ccc() const; 
    void cccc();  
};

extern KST KOS;

#endif 
