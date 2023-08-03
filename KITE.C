#include <graphics.h>
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>

int main(void)
{
   /* request auto detection */
   int gdriver = DETECT, gmode, errorcode;
   int xmax, ymax;

   /* initialize graphics and local variables */
   initgraph(&gdriver, &gmode, "C:\\TURBOC3\\BGI");

   /* read result of initialization */
   errorcode = graphresult();
   /* an error occurred */
   if (errorcode != grOk)
   {
      printf("Graphics error: %s\n", grapherrormsg(errorcode));
      printf("Press any key to halt:");
      getch();
      exit(1);
   }

   /* draw a diagonal line */
   line(200,200,250,150);
   line(250,150,300,200);
   line(300,200,250,250);
   line(250,250,200,200);
   line(200,200,245,310);
   line(300,200,245,310);
   line(245,310,230,330);
   line(245,310,255,330);
   line(230,330,255,330);

   /* clean up */
   getch();
   closegraph();
   return 0;
}
