#include <graphics.h>
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>

int main(void)
{
   /* request auto detection */
   int gdriver = DETECT, gmode, errorcode;
   int left, top, right, bottom;

   /* initialize graphics and local variables */
   initgraph(&gdriver, &gmode, "C:\\TURBOC3\\BGI");

   /* read result of initialization */
   errorcode = graphresult();
   if (errorcode != grOk)  /* an error occurred */
   {
      printf("Graphics error: %s\n", grapherrormsg(errorcode));
      printf("Press any key to halt:");
      getch();
      exit(1); /* terminate with an error code */
   }

   left = getmaxx() / 2 - 50;
   top = getmaxy() / 2 - 50;
   right = getmaxx() / 2 + 50;
   bottom = getmaxy() / 2 + 50;

   /* draw a rectangle */
   rectangle(50,60,120,100);
   rectangle(180,60,250,100);
   rectangle(50,150,120,190);
   rectangle(180,150,250,190);
   rectangle(120,100,180,150);
   arc(150,60,0,180,30);
   arc(50,125,90,270,25);
   arc(150,190,180,0,30);
   arc(250,125,270,90,25);


   /* clean up */
   getch();
   closegraph();
   return 0;
}