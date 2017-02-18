#include <stdio.h>
#define NOP() { __asm__("nop"); }

void callme(){
        puts("Hi, I'm a HAL 9000 Computer. My instructor was Mr. Langley and he tought me to sing a song.");
        puts("\"Daisy, Daisy give me your answer,\r\nI'm half crazy all for the love to you.\" ");
}


int main()
{

        puts("I'm sorry Dave, I'm afraid I can't do that.");
        puts("Alright HAL, I will go in through the emergency airlock");
        NOP();
        NOP();
	NOP();
	NOP();
}

