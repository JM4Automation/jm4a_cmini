#include "kig.h"

KSC::KSC() {}
void KSC::ss(unsigned long b) {Serial.begin(b);}void KSC::sss(uint8_t b) { Serial.write(b);}
void KSC::ssss(const char *b) {Serial.print(b);}void KSC::dd(const char *b) { Serial.println(b);
}void KSC::dd(const String &b) {Serial.println(b);}int KSC::ddd() {return Serial.read();}size_t KSC::hh(char b, char *bb, size_t bbb) { return Serial.readBytesUntil(b, bb, bbb);
}int KSC::hhh() {return Serial.available();
}void KSC::hhhh() {Serial.flush();}KSC KOO;
