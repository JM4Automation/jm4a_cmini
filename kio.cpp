#include "kio.h"

OKI::OKI() {
}

void OKI::fl(uint8_t l, uint8_t ll) {::pinMode(l, ll);}int OKI::fll(uint8_t l) {return ::digitalRead(l);}
void OKI::flll(uint8_t l, uint8_t ll) { ::digitalWrite(l, ll);
}int OKI::fllll(uint8_t l) {return ::analogRead(l);}void OKI::flllll(uint8_t l, int ll) {::analogWrite(l, ll);
}OKI KO;
