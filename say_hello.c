//say_hello.c
#include <stdio.h>
#include <stdlib.h>

#define CX 15
#define CY 10

int main(int argc, char* argv[])
{
    char msg[20] = "SAY HELLO ";
    int len = strlen(msg)-1;
	   char fill = ' ';
	 
	   printf("\033[?25l"); 
	
	   int playing = 1;
	   while(playing)
	   {
	       	char temp = msg[len];
	       	for(int i=len; i > 0; i--)
		       {
		           	msg[i] = msg[i-1];
	       	}
		       msg[0] = temp;
		
	       	printf("\033[%d;%dH\033[97;42m ", CY, CX);
		       for(int i=0; i <= len; i++)
		       {
			          putchar(msg[i]);
		           putchar(fill);
		       }
		       fflush(stdout);
		
		       for(int i=0; i < 60000000; i++)
		       ; //bad delay
	    }
	
     return 0;
}