# Lecture 20 Worksheet

1.  BPS stands for Band Pass Filter when referring to carrier frequencies.
    ==True==/False
2.  A preamplifier makes a recieved signal smaller so it is easier to read.
    True/==False==
3.  Blocking out interfering signals is the main goal of IR modulation
    True/==False==
4.  Infrared waves are not visible to humans.
    ==True==/False

1.  Which of the following generates/emits IR waves? Highlight all that apply.
    1.  Picture Frame
    2.  ==Cats==
    3.  ==Sun==
    4.  ==Soldering Iron==
    5.  Coat Hanger
2.  Which directive is used to import a header file into your C code so you may use a library?
    1.  #define
    2.  #ifdef
    3.  ==#include==
    4.  #library
3.  At what frequency are you modulating the transmission from your lab kit IR remote?
    38kHz
4.  Write a nested if statement required to detect a 1 or a 2 from your lab kit remote. If a 1 is recieved, write a 1 to a variable named `read_data`. If it is a 2, write a 2 to `read_data`. If any other number is recieved, write a 0 to `read_data`.

```c++
#include <IRremote.h>
#define IR_RECV_PIN A3
IRrecv irrecv(IR_RECV_PIN);
decode_results IR_command_recieved;
int read_data;
void setup(){

}

void loop(){
    if(irrecv.decode(&IR_command_received)){
        if (IR_command_recieved.value == ONE) read_data = 1;
        else if (IR_command_recieved.value == TWO) read_data = 2;
        else read_data = 0;
    }
}
```

