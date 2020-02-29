#include "gtest/gtest.h"

extern "C" {
#include "kek.h"
}

TEST(tek,ok)
{
    ASSERT_EQ(kek(3),10);
}

TEST(ke,te)
{
    ASSERT_EQ(kek(3),10);
}

