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


   /* draw a rectangle */
   rectangle(200,200,300,300);
   rectangle(220,220,320,320);
   line(200,200,220,220);
   line(300,300,320,320);
   line(200,300,220,320);
   line(300,200,320,220);

   /* clean up */
   getch();
   closegraph();
   return 0;
}
