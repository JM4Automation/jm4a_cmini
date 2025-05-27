#include "kis.h"

KST::KST() : s("") {}
KST::KST(const String &i) : s(i) {}
KST::KST(const char *i) : s(i) {}

void KST::cc(const String &i) { s.concat(i);
}
void KST::cc(const char *i) {  s.concat(i);
}void KST::cc(char i) { s.concat(i);
}
void KST::cc(uint8_t i) {  s.concat(i);
}
void KST::cc(int i) {  s.concat(i);
}
void KST::cc(const KST& i) {s.concat(i.ccc());}
String KST::ccc() const { return s;
}
void KST::cccc() {
    s = "";
}
KST KOS;
