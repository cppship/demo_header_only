#include "header_only/lib.h"

#include <gtest/gtest.h>

TEST(header_only, concat)
{
    ASSERT_EQ(header_only::concat("a", "b"), "a-b");
}