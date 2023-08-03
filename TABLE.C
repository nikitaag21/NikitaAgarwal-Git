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
   line(200,200,450,200);
   line(450,200,500,320);
   line(500,320,230,320);
   line(200,200,230,320);
   line(230,320,230,400);
   line(500,320,500,400);
   line(200,200,200,305);
   line(450,200,450,305);
   circle(230,400,5);
   circle(500,400,5);
   circle(200,305,5);
   circle(450,305,5);
   setfillstyle(SOLID_FILL,WHITE);
   floodfill(232,402,WHITE);
   floodfill(502,402,WHITE);
   floodfill(202,307,WHITE);
   floodfill(452,307,WHITE);

   /* clean up */
   getch();
   closegraph();
   return 0;
}
