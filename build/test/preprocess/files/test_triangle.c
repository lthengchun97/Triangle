#include "build/temp/_test_triangle.c"
#include "triangle.h"
#include "unity.h"


void setUp(void)

{

}



void tearDown(void)

{

}



void test_triangle_with_valid_and_obtuse(void)

{

  int k;

  UnityAssertEqualString((const char*)(("valid")), (const char*)((checkTriangletype(4,3,3))), (((void *)0)), (UNITY_UINT)(15));



  k = strcmp("valid",checkTriangletype(4,3,3));



  if( k == 0)

  {

    UnityAssertEqualString((const char*)(("obtuse")), (const char*)((checktype(4,3,3))), (((void *)0)), (UNITY_UINT)(21));

  }

  else

  {

    printf("get out");

  }

}



void test_triangle_with_invalid(void)

{

  int i;

  UnityAssertEqualString((const char*)(("valid")), (const char*)((checkTriangletype(2,3,100))), (((void *)0)), (UNITY_UINT)(32));



  i = strcmp("valid",checkTriangletype(2,3,100));



  if( i == 0)

  {

    UnityAssertEqualString((const char*)(("accute")), (const char*)((checktype(2,3,100))), (((void *)0)), (UNITY_UINT)(38));

  }

  else

  {

    printf("get out");

  }

}



void test_triangle_with_valid_and_accute(void)

{

  int j;

  UnityAssertEqualString((const char*)(("valid")), (const char*)((checkTriangletype(2,3,4))), (((void *)0)), (UNITY_UINT)(49));



  j = strcmp("valid",checkTriangletype(2,3,4));



  if( j == 0)

  {

    UnityAssertEqualString((const char*)(("accute")), (const char*)((checktype(2,3,4))), (((void *)0)), (UNITY_UINT)(55));

  }

  else

  {

    printf("get out");

  }

}
