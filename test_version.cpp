#include "lib.h"

#include "gtest/googletest/include/gtest/gtest.h"

TEST(HelloWorldLibTest, TestValidVersion)
{
  ASSERT_TRUE(version() > 0);
}

int main(int argc, char **argv)
{
  ::testing::InitGoogleTest(&argc, argv);

  return RUN_ALL_TESTS();
}
