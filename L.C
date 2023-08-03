#include <graphics.h>
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>

int main(void)
{
   /* request auto detection */
   int gdriver = DETECT, gmode, errorcode;
   int x1 = 0 ,y1 =0 , x2=100 ,y2 =200;
   int dy=y2-y1 ,dx=x2-x1;
   int m = dy/dx;
   int b;
   b = y1-m*x1;

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
   for(int i=1;i<=100;i++) {
   y1=m*i+b;
   putpixel(i,y1,RED); }
   /* clean up */
   getch();
   closegraph();
   return 0;
}

