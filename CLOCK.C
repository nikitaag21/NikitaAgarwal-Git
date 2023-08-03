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
      exit(1); /* terminate with an error code */}

   /* draw the circle */
   circle(200,200,60);
   line(200,200,200,160);
   line(200,200,240,200);
   line(200,200,180,220);
   line(200,160,205,165);
   line(200,160,195,165);
   line(240,200,235,205);
   line(240,200,235,195);
   line(180,220,180,210);
   line(180,220,185,225);

   outtextxy(195,145,"12");
   outtextxy(250,200,"3");
   outtextxy(200,250,"6");
   outtextxy(150,200,"9");

   /* clean up */
   getch();
   closegraph();
   return 0;
}