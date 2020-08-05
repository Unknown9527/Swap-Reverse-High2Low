#include "src/lib/solution.h"
#include "gtest/gtest.h"
#include <vector>

using namespace std;



TEST(SwapZeroOneTest, SwapZeroOneTest) {
  Solution solution;
  EXPECT_EQ(solution.SwapZeroOne("TEST", 0, 1), "ETST");
}

TEST(ReverseStringTest, ReverseStringTest) {
  Solution solution;
  EXPECT_EQ(solution.ReverseString("EE599"), "995EE");
}

TEST(UpToLowTest, UpToLowTest) {
  Solution solution;
  EXPECT_EQ(solution.UpToLow("EE599"), "ee599");
}
