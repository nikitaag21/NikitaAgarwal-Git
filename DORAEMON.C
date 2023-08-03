
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
   circle(200,200,100);   //face
   circle(140,100,15);    //ear left
   circle(255,100,15);    //ear right
   circle(155,150,18);    //outer eye left
   circle(245,150,18);    //outer eye right
   circle(155,150,10);    //inner eye left
   circle(245,150,10);   //inner eye right
   line(200,200,180,220);//nose
   line(200,200,220,220);
   line(180,220,220,220);
   line(170,220,140,200);  //MOUSTACHE left
   line(170,220,140,220);
   line(170,220,140,240);
   line(230,220,250,200);  //moustache right
   line(230,220,255,220);
   line(230,220,250,240);
   circle(200,260,12);       //mouth

   /* clean up */
   getch();
   closegraph();
   return 0;
}