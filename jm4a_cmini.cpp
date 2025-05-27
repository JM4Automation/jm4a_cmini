#include "Arduino.h"
#include "jm4a_cmini.h"
#include <avr/interrupt.h>
#include "kig.h"
#include"kio.h"
#include "kis.h"
#include <stdlib.h>
uint8_t q[8] ={14, 15, 16, 17, 20, 21, 2, 3};  uint8_t qq[8] ={4, 5, 6, 7, 8, 9, 18, 19}; uint8_t qqq[6] ={10, 10, 10, 10, 10, 10};
bool w[4] ={false, false, false, false};
bool ww[3] ={false, false, false};bool www[3] ={false, false, false};bool wwww[2] ={false,false};
volatile int x[8] ={0, 0, 0, 0, 0, 0, 0, 0};volatile int xx[8] ={0, 0, 0, 0, 0, 0, 0, 0};volatile int xxx[8] ={0, 0, 0, 0, 0, 0, 0, 0};
volatile int xxxx[8] ={0, 0, 0, 0, 0, 0, 0, 0};
volatile char yy[2] ={'a','z'};volatile char yyy[2] ={'z','a'};volatile uint8_t yyyy = 0;volatile bool t = false;
bool i = false;
bool j = false; bool k = false; volatile uint32_t y = 0; volatile uint16_t u = 0; char o = 'A';
const char* p = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
jm4a_cmini::jm4a_cmini(){}
void jm4a_cmini::begin(unsigned long b)
{KOO.ss(b);
 nnn("!JM4Automation: Configuration for Controllino Mini/Arduino Nano/ATMEGA328P-AU");
for(uint8_t i = 0; i < 8; i++)
{KO.fl(q[i], 0); KO.fl(qq[i], 1);}}
void jm4a_cmini::dataTransfer()
{if(j == false){
ff();}if(i == false){uuu();}}
void jm4a_cmini::ff()
{if(KOO.hhh()){char l[32];uint8_t ll =KOO.hh('\n', l, sizeof(l) - 1);
while(KOO.hhh()){KOO.ddd();}if(l[0]!=o||l[ll-1]!=';'){
nnn("-0xA00 Error: invalid data");return;}
if(l[1]=='>'){fff(l,ll);return;}if(l[1]=='*'){nnnn(l,ll);return;}}}
void jm4a_cmini::fff(char* l, uint8_t ll){if(ll == 14){for(uint8_t i = 2; i < 10; i++){
xxxx[i-2]=l[i]-'0';}yy[0] = l[ll - 2];yy[1] = l[ll - 3];}else if(ll > 14)
{uint8_t k = 0;for(uint8_t i = 2; i < ll; i++){if(l[i] == ':'){break;}else if(l[i] == '.')
{continue;}else if(l[i] == ','){if(l[i+ 2] == ',' || l[i+ 2] == '.')
{xxxx[k] = l[i+1]-'0'; i = i+ 1;}else if(l[i+3]==','||l[i+3]=='.'){
 xxxx[k] =((l[i+1]-'0') *10)+ l[i+ 2] - '0';i = i+ 2;}else if(l[i+ 4] == ',' || l[i+ 4] == '.')
{xxxx[k] =((l[i+1]-'0') *100)+((l[i+ 2] - '0') *10)+ l[i+ 3] - '0';i = i+ 3;}
else if(l[i+ 5] == ',' || l[i+ 5] == '.'){xxxx[k] =((l[i+ 1] - '0') *1000)+((l[i+ 2] - '0') *100)+((l[i+ 3] - '0') *10)+ l[i+ 4] - '0';
i = i+ 4;}}else{xxxx[k] = l[i] - '0';}
 k++;if(k>8){nnn("-0xA01 Error: data format error");break;}}
 yy[0] = l[ll - 2];yy[1] = l[ll - 3];} else{nnn("-0xA02 Error: incomplete data");return;}
 ffff(xxxx,8);
 if(yyy[1] == yy[1] && yyy[0] == yy[0]){uu();}else
{nnn("0xA03 Error: CRC not match");}
}void jm4a_cmini::ffff(int* l, uint8_t ll){yyyy = 0;uint8_t c = 0x00;for( uint8_t i = 0; i < ll; i++){
c^=l[i];for(uint8_t j = 0; j < 8; j++){if(c & 0x80)c =(c << 1) ^ 0x07;
else c <<= 1;}}yyyy = c;uint8_t y = yyyy / 62;uint8_t yy = yyyy % 62;yyy[1] = p[y];yyy[0] = p[yy]; 
}void jm4a_cmini::uu(){memcpy(xxx, xxxx, sizeof(xxxx));  iii(0);iii(3);iii(4);
iii(6);iii(7);if(!ww[0]){iii(1);
}else{if(!www[0]){iiii(1);
}}if(!ww[1]){iii(2);
}else{if(!www[1]){iiii(2);}}if(!ww[2]){iii(5);
}else
{if(!www[2]){iiii(5);}}  
if(k)
{nnn("=");}}  void jm4a_cmini::uuu(){t = false;for(uint8_t i = 0; i < 4; i++)
{if(!w[i]){uuuu(i);}else
{ii(i);}
}for(uint8_t i = 4; i < 6; i++)
{ii(i);
}for(uint8_t i = 6; i < 8; i++)
{
uuuu(i);
}
if(t == true)
{
 nn();
}
}  void jm4a_cmini::uuuu(uint8_t d){   x[d] = KO.fll(q[d]);
 if(xx[d] != x[d])
{
 xx[d] = x[d];
 t = true;
}
}  void jm4a_cmini::ii(uint8_t i){   x[i] = KO.fllll(q[i]);
 if(xx[i]+ qqq[i] <= x[i] ||
 xx[i] - qqq[i] >= x[i])
{
 xx[i] = x[i];
 t = true;
}
}  
void jm4a_cmini::iii(uint8_t l){   KO.flll(qq[l], xxx[l]);
}  void jm4a_cmini::iiii(uint8_t l){   KO.flllll(qq[l], xxx[l]);
}  void jm4a_cmini::nn(){   ffff(x,8);   KST ll = "";
 ll.cc(">");   for(uint8_t i = 0; i < 4; i++)
{
 if(!w[i])
{
 ll.cc(x[i]);
}
 else
{
 if(i == 0)
{
 ll.cc(",");
}
 else if(!w[i - 1])
{
 ll.cc(",");
}
 if(i == 3)
{
 ll.cc(x[i]);
 break;
}
 ll.cc(x[i]);
 if(w[i+ 1])
{
 ll.cc(",");
}
 else
{
 ll.cc(".");
}
}
}
 ll.cc(",");
 ll.cc(x[4]);
 ll.cc(",");
 ll.cc(x[5]);
 ll.cc(".");
 for(uint8_t i = 6; i < 8; i++)
{
 ll.cc(x[i]);
}
 ll.cc(":");
 ll.cc(yyy[1]);
 ll.cc(yyy[0]);
 nnn(ll.ccc());
}  void jm4a_cmini::nnn(KST l){
 KST ll = "";
 ll.cc(o);
 ll.cc(l);
 ll.cc(";");
 KOO.dd(ll.ccc());
 KOO.hhhh();
}  void jm4a_cmini::nnnn(char* l, uint8_t ll){   if(l[2]=='P'){
 if(l[3]=='F'){
 oooo(l,ll);
 return;
}else if(l[3]=='D'){
 oo(l,ll);
 return;
}else{
 nnn("-0xB00 Error: indefinite function");
 return;
}
}else{
 nnn("-0xB01 Error: indefinite function");
 return;
}
}  void jm4a_cmini::oo(char* f, uint8_t ff){   float lllll;   uint8_t llll = 0;
 uint8_t lll = 7;
 uint8_t l;   if(f[6]=='/'){
 l =((f[4]- '0') *10)+f[5]-'0';
 if(l!=5 && l!=1 && l!=2){
 nnn("-0xB02 Error: output not available for fast pwm");
 return;
}}else{
 nnn("-0xB03 Error: incomplete data function");
 return;
}
 
 for(uint8_t i = 7; i<ff; i++){
 if(f[i+1]==':'){
 llll=i;
 break;
}
}   char ll[(llll-lll)+2];   for(uint8_t i=0; i<(llll-lll)+1; i++){
 ll[i]=f[lll+i];
}   ll[(llll-lll)+1] = '\0';    
 lllll = atof(ll);
 int j = floor(lllll);
 int jj[1] ={ static_cast<int>(j)};
 ffff(jj,1);   yy[0] = f[ff - 2];
 yy[1] = f[ff - 3];
    
 if(yyy[1] == yy[1] && yyy[0] == yy[0]){
 ooo(l,lllll);
}else{
 nnn("-0xB04 Error: CRC not match");
}
 
}  void jm4a_cmini::ooo(uint8_t l, float ll){
 if(l==5 && www[2]){
 OCR1A =(uint32_t)((float)y *(ll / 100.0));
 return;
}else if(l==1 && www[0]){
 if(ll<0.1){
 if(wwww[0]==true){
 TCCR0A &= ~((1 << COM0B1) |(1 << COM0B0)); 
 wwww[0]=false;
}
 xxx[l]=0;
 iii(l);
}else if(ll>99.9){
 if(wwww[0]==true){
 TCCR0A &= ~((1 << COM0B1) |(1 << COM0B0));
 wwww[0] = false;
}
 xxx[l]=1;
 iii(l); 
}else{
 if(wwww[0]==false){
 TCCR0A |=(1 << COM0B1);
 TCCR0A &= ~(1 << COM0B0);
 wwww[0]=true;
}
 OCR0B =(uint8_t)((ll / 100.0) * 255);
}
}else if(l==2 && www[1]){if(ll<0.1){if(wwww[1]==true){TCCR0A &= ~((1 << COM0A1) |(1 << COM0A0)); wwww[1]=false;
} xxx[l]=0;iii(l);}else if(ll>99.9){if(wwww[1]==true){TCCR0A &= ~((1 << COM0A1) |(1 << COM0A0));wwww[1] = false;}
 xxx[l]=1;iii(l); 
}else{
if(wwww[1]==false){TCCR0A |=(1 << COM0A1);TCCR0A &= ~(1 << COM0A0);wwww[1]=true;
}OCR0A =(uint8_t)((ll / 100.0) * 255);
}
}else{nnn("-0xB05 Error: PWM mode is disabled for this output");
 return;
}}void jm4a_cmini::oooo(char* l, uint8_t ll){   uint8_t u;
 uint32_t uu;
 uint8_t uuu = 0;
 uint8_t uuuu = 7;   if(l[6]=='/'){
 u =((l[4]- '0') *10)+l[5]-'0';
 if(u!=5){
 nnn("-0xB06 Error: output not available for modifiable frequency");
 return;
}}else{
 nnn("-0xB07 Error: incomplete data function");
 return;
}
 
 for(uint8_t i = 7; i<ll; i++){
 if(l[i+1]==':'){
 uuu=i;
 break;
}
}   char n[(uuu-uuuu)+2];   for(uint8_t i=0; i<(uuu-uuuu)+1; i++){
 n[i]=l[uuuu+i];
}   n[(uuu-uuuu)+1] = '\0';    
 uu = atof(n);
 int f = floor(uu);
 int ff[1] ={ static_cast<int>(f)};
 ffff(ff,1);   yy[0] = l[ll - 2];
 yy[1] = l[ll - 3];
 
 if(yyy[1] == yy[1] && yyy[0] == yy[0]){
 eee(uu);
}else{
 
 nnn("-0xB08 Error: CRC not match");
}  
}  
 void jm4a_cmini::ee(uint8_t l,uint8_t ll){   if(l==1){
 www[0]=true;
 wwww[0]=true;
 ww[0]=true;
}else{
 www[1]=true;
 wwww[1]=true;
 ww[1]=true;
}
 uint8_t lll = 0;
 switch(ll){
 case 1:lll =(1 << CS02) |(1 << CS00);break;case 2:lll =(1 << CS02);break;case 3:lll =(1 << CS01) |(1 << CS00);break;
 case 4:lll =(1 << CS01);
 break;
 case 5:
 lll =(1 << CS00);
 break;
 default:
 lll =(1 << CS01) |(1 << CS00);
 break;
}
 TCCR0A = 0;TCCR0B = 0;TCNT0 = 0;TCCR0A =(1 << WGM00) |(1 << WGM01);   
 TCCR0B = lll;   ooo(l,0.0);
}void jm4a_cmini::eee(uint32_t l){   if(!www[2]){
 nnn("-0xB09 Error: PWM mode for this output is disabled");
 return;
}
 uint32_t ll = 16000000UL /(u * 2UL); 
 uint32_t lll = 16000000UL /(u * 65536UL); 
 if(l > ll || l < lll){
 enableMFDPO(5,l);
 OCR1A = ICR1 / 2;   return;
}
 uint32_t uu =(16000000UL /(u * l)) - 1;
 TCNT1 = 0; 
 ICR1 = uu;
 y = uu;
 OCR1A = ICR1 / 2; 
}
void jm4a_cmini::enableMFDPO(uint8_t l, uint32_t ll){
 if(l != 5){
 nnn("-0xC01 Error: output without MFD PWM signal available");
 return;
}
 www[2]=true;
 ww[2]=true;   
 uint16_t lll[] ={1, 8, 64, 256, 1024};
 uint8_t llll[] ={
(1 << CS10), 
(1 << CS11), 
((1 << CS11) |(1 << CS10)),
(1 << CS12), 
((1 << CS12) |(1 << CS10)) 
};
 
 uint8_t ii = 0;
 uint32_t iii = 0;
 
 for(uint8_t i = 0; i < 5; i++){
 iii =(16000000UL /(lll[i] * ll)) - 1;
 if(iii <= 65535){
 ii = i;
 break;
}
}
 if(iii > 65535){
 iii = 65535;
} 
 if(lll[ii] == u && y == iii){
 return;
}
 y = iii; 
 u = lll[ii];  
 TCCR1A = 0;
 TCCR1B = 0;
 TCCR1A =(1 << COM1A1) |(1 << WGM11);
 TCCR1B =(1 << WGM13) |(1 << WGM12) | llll[ii];   TCNT1 = 0;
 ICR1 = iii;
}   void jm4a_cmini::enableOMDPO(uint8_t l, uint8_t ll){
 if(l !=1 && l !=2){
 nnn("-0xC02 Error: output without OMD PWM signal available");
 return;
}
 ee(l,ll);
}  
void jm4a_cmini::setAnalogInput(uint8_t l, uint8_t ll)
{   if(l >= 0 && l <= 3)
{
 w[l] = true;
 qqq[l] = ll;
}
 else if(l >= 4 && l <= 5)
{
 qqq[l] = ll;
}
 else
{
 nnn("-0xC03 Error: Analog input pin index out of range");
}
}
void jm4a_cmini::setAnalogOutput(uint8_t l)
{
 if(l >= 0 && l <= 2)
{
 ww[l] = true;
 
}
 else
{
 nnn("-0xC04 Error: Analog output pin index out of range");
}
}
void jm4a_cmini::noInputs(bool l)
{
 i = l;
}
void jm4a_cmini::noOutputs(bool l)
{
 j = l;
}  void jm4a_cmini::setID(char l)
{
 if(isalpha(l)){
 o = l;
} else{
 nnn("-0xC05 Error: id non alphabetic");
}
}
void jm4a_cmini::setConfirmation(bool l)
{
 k = l;
}  