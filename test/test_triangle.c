#include "unity.h"
#include "triangle.h"

void setUp(void)
{
}

void tearDown(void)
{
}

void test_triangle_with_valid_and_obtuse(void)
{
  int k;
  TEST_ASSERT_EQUAL_STRING ("valid",checkTriangletype(4,3,3));
  
  k = strcmp("valid",checkTriangletype(4,3,3));
  
  if( k == 0)
  {
    TEST_ASSERT_EQUAL_STRING ("obtuse",checktype(4,3,3));
  }
  else
  {
    printf("get out");
  }
}

void test_triangle_with_invalid(void)
{
  int i;
  TEST_ASSERT_EQUAL_STRING ("valid",checkTriangletype(2,3,100));
  
  i = strcmp("valid",checkTriangletype(2,3,100));
  
  if( i == 0)
  {
    TEST_ASSERT_EQUAL_STRING ("accute",checktype(2,3,100));
  }
  else
  {
    printf("get out");
  }
}

void test_triangle_with_valid_and_accute(void)
{
  int j;
  TEST_ASSERT_EQUAL_STRING ("valid",checkTriangletype(2,3,4));
  
  j = strcmp("valid",checkTriangletype(2,3,4));
  
  if( j == 0)
  {
    TEST_ASSERT_EQUAL_STRING ("accute",checktype(2,3,4));
  }
  else
  {
    printf("get out");
  }
}