extern "C" {
    #include "tweetnacl.h"
    #include "randombytes.h"
}
#include <gtest/gtest.h>

TEST(TweetNaCl, randombytes) {
    unsigned char buf[32];
    randombytes(buf, sizeof(buf));
    ASSERT_NE(0, memcmp(buf, buf + 1, sizeof(buf) - 1));
}
