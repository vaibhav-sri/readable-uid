#include "uidgen.h"

#include <string>
#include <gtest/gtest.h>

using ::testing::MatchesRegex;
using ::testing::HasSubstr;

TEST(UID, UID_generated_has_organization_prefix) {
  std::string uid = uidgen();
  ASSERT_THAT(uid, HasSubstr("1.4.444.90004.223."));
}

TEST(UID, UID_generated_has_expected_suffix) {
  std::string uid = uidgen();
  ASSERT_THAT(uid, MatchesRegex("."));
}
int main(int argc, char **argv) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
