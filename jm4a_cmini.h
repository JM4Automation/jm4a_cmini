#ifndef jm4a_cmini_h
#define jm4a_cmini_h

#include "Arduino.h"
#include "kis.h"


class jm4a_cmini
{
private:

void uuu();
void ff();
void nn();
void uuuu(uint8_t l);
void ii(uint8_t l);
void iii(uint8_t l);
void iiii(uint8_t l);
void nnnn(char* l, uint8_t ll);
void oo(char* l, uint8_t ll);
void oooo(char* l, uint8_t ll);
void eee(uint32_t l);
void ee(uint8_t l,uint8_t ll);
void fff(char* l, uint8_t ll);
void ooo(uint8_t l,float ll);
void uu();
void ffff(int* l, uint8_t ll);
void nnn(KST l);


public:
   jm4a_cmini();
   void begin(unsigned long bps);
   void dataTransfer();
   void setAnalogInput(uint8_t pin, uint8_t rng);
   void setAnalogOutput(uint8_t pin);
   void noInputs(bool r);
   void noOutputs(bool w);
   void setID(char id);
   void setConfirmation(bool cn);
   void enableMFDPO(uint8_t pin,uint32_t frequency);
   void enableOMDPO(uint8_t pin, uint8_t mode);
};

#endif