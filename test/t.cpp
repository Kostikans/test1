#include "gtest/gtest.h"

extern "C" {
#include "kek.h"
}

TEST(tek,check)
{
    ASSERT_EQ(kek(3),9);
}

TEST(ke,te)
{
    ASSERT_EQ(kek(3),9);
}

