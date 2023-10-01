#include <gtest/gtest.h>

int add(int a, int b)
{
    return a+b;
}

TEST(HelloTest,test0)
{
    EXPECT_EQ(add(2,3),5);
    printf("hello\n");
}