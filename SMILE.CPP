#include <graphics.h>
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>

int main(void)
{
   /* request auto detection */
   int gdriver = DETECT, gmode, errorcode;
   int midx, midy;
   int radius = 100;

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

   midx = getmaxx() / 2;
   midy = getmaxy() / 2;
   setcolor(getmaxcolor());

   /* draw the circle */
   circle(100,100,50);
   circle(80,80,10);
   circle(120,80,10);
   circle(80,80,5);
   circle(120,80,5);
   setfillstyle(SOLID_FILL,BROWN);
   floodfill(82,82,WHITE);
   floodfill(122,82,WHITE);
  /* line(100,110,100,90);
   arc(100,115,180,0,20);  */

   /* clean up */
   getch();
   closegraph();
   return 0;
}