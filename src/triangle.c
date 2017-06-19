#include "triangle.h"

char *checkTriangletype(int a , int b, int c)
{
  int short1,short2,long1;
  classi(a,b,c,&short1,&short2,&long1);
  printf("long = %d\n ",long1);
  printf("shot 1 = %d\n ",short1);
  printf("shot 2 = %d\n ",short2);
  if(long1 < (short1 +short2))
  {
    return "valid";
  }
  else
    return "invalid";
}

char *checktype(int a,int b,int c)
{
  int short1,short2,long1;
  classi(a,b,c,&short1,&short2,&long1);
  if( short1*short1 + short2*short2 > long1*long1)
    return "obtuse";
  else if ( short1*short1 + short2*short2 < long1*long1 )
    return "accute";
  else if ( short1*short1 + short2*short2 == long1*long1 )
    return "right angle";
  else
    return "wrong";
}

void classi(int a,int b,int c, int *short1 ,int *short2, int *long1)
{
  if(a>b&&a>c)
  {
    *short1 = b;
    *short2 = c;
    *long1 = a;
  }
  else if(b>c&&b>a)
  {
    *short1 = c;
    *short2 = a;
    *long1 = b;
  }
  else if(c>b&&c>a)
  {
    *short1 = b;
    *short2 = a;
    *long1 = c;
  }
}