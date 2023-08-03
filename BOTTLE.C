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
   line(100,100,150,100);
   line(100,100,100,150);
   line(150,100,150,150);
   line(100,150,70,150);
   line(150,150,180,150);
   line(70,150,70,300);
   line(180,150,180,300);
   line(70,300,180,300);
   circle(125,200,20);
   line(115,200,135,200);
   line(115,210,135,210);
   line(115,190,135,190);


   /* clean up */
   getch();
   closegraph();
   return 0;
}
