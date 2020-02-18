//Note-name/constant conversion
#define LA   36363
#define LAS  34323
#define LB   32396
#define LC   30578
#define LCS  28861
#define LD   27242
#define LDS  25713
#define LE   24270
#define LF   22908
#define LFS  21622
#define LG   20408
#define LGS  19263
#define MA   18182
#define MAS  17161
#define MB   16198
#define MC   15289
#define MCS  14430
#define MD   13620
#define MDS  12856
#define ME   12135
#define MF   11454
#define MFS  10811
#define MG   10204
#define MGS   9631
#define HA    9091

//Note Length definitions
#define QUARTER 400
#define EIGHTH 200
#define DOTQUARTER 600
#define HALF 800

void setup(){
    TCCR1A=0x40;
    TCCR1B=0x09;
    TCCR1C=0;
    TCNT1=0;
    DDRB|=0x02;
}

void playNote(int note, int time){
    OCR1A = note;
    delay(time);
    OCR1A = 0;
    delay(50);
}

void loop(){
    playNote(LD, EIGHTH);
    playNote(LD, EIGHTH);
    playNote(LG, QUARTER);
    playNote(LG, EIGHTH);
    playNote(MA, EIGHTH);
    playNote(MB, EIGHTH);
    playNote(LG, EIGHTH);
    playNote(MB, EIGHTH);
    playNote(MC, EIGHTH);
    playNote(MD, QUARTER);
    playNote(MD, EIGHTH);
    playNote(MC, EIGHTH);
    playNote(MB, QUARTER);
    playNote(MA, EIGHTH);
    playNote(LG, EIGHTH);
    playNote(MA, QUARTER);
    playNote(MA, QUARTER);
    playNote(MA, QUARTER);
    playNote(MA, QUARTER);
    playNote(MA, EIGHTH);
    playNote(MB, EIGHTH);
    playNote(MA, EIGHTH);
    playNote(LFS, EIGHTH);
    playNote(LD, QUARTER);
    playNote(LD, QUARTER);
    playNote(LG, EIGHTH);
    playNote(LFS, EIGHTH);
    playNote(LG, EIGHTH);
    playNote(MA, EIGHTH);
    playNote(MB, QUARTER);
    playNote(MA, EIGHTH);
    playNote(MA, EIGHTH);
    playNote(MB, QUARTER);
    playNote(MC, QUARTER);
    playNote(MD, DOTQUARTER);
    playNote(MD, EIGHTH);
    playNote(MA, QUARTER);
    playNote(MA, EIGHTH);
    playNote(MB, EIGHTH);
    playNote(MA, QUARTER);
    playNote(LG, EIGHTH);
    playNote(LG, EIGHTH);
    playNote(MA, QUARTER);
    playNote(LG, EIGHTH);
    playNote(LFS, EIGHTH);
    playNote(LG, HALF);
    playNote(MD, HALF);
    playNote(MB, DOTQUARTER);
    playNote(MA, EIGHTH);
    playNote(MB, EIGHTH);
    playNote(MC, EIGHTH);
    playNote(MB, EIGHTH);
    playNote(MA, EIGHTH);
    playNote(LG, DOTQUARTER);
    playNote(MA, EIGHTH);
    playNote(MB, QUARTER);
    playNote(MB, EIGHTH);
    playNote(MC, EIGHTH);
    playNote(MD, QUARTER);
    playNote(MB, QUARTER);
    playNote(MA, QUARTER);
    playNote(MA, EIGHTH);
    playNote(MB, EIGHTH);
    playNote(MA, DOTQUARTER);
    playNote(LD, EIGHTH);
    playNote(LG, HALF);
    playNote(LG, DOTQUARTER);
    playNote(MA, EIGHTH);
    playNote(MB, QUARTER);
    playNote(MB, EIGHTH);
    playNote(MC, EIGHTH);
    playNote(MD, QUARTER);
    playNote(MC, EIGHTH);
    playNote(MB, EIGHTH);
    playNote(MA, QUARTER);
    playNote(MA, QUARTER);
    playNote(MB, QUARTER);
    playNote(MB, EIGHTH);
    playNote(MA, EIGHTH);
    playNote(LG, QUARTER);
    playNote(LG, QUARTER);
    playNote(LG, HALF);
    delay(1000);
}
