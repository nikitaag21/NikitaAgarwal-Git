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
   line(200,200,400,200);
   line(200,200,200,250);
   line(200,250,400,250);
   line(400,200,400,170);
   line(400,250,400,280);
   line(400,170,450,230);
   line(400,280,450,230);

   /* clean up */
   getch();
   closegraph();
   return 0;
}
