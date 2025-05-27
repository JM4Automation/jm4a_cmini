#ifndef KIO_H
#define KIO_H
#include <Arduino.h> 

class OKI {
public:
    OKI();
    void fl(uint8_t l, uint8_t ll);int fll(uint8_t l);void flll(uint8_t l, uint8_t ll);
    int fllll(uint8_t l);
    void flllll(uint8_t l, int ll);
};
extern OKI KO;
#endif 
