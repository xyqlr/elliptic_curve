extern "C" {
    #include "tweetnacl.h"
    #include "randombytes.h"
}
#include <gtest/gtest.h>

TEST(TweetNaCl, CryptoBoxWorks) {
    unsigned char pk[32], sk[32];
    unsigned char nonce[24] = {0};  
    unsigned char message[32] = "Hello, NaCl!";
    unsigned char cipher[64];

    crypto_box_keypair(pk, sk);
    crypto_box(cipher, message, sizeof(message), nonce, pk, sk);

    ASSERT_NE(0, memcmp(message, cipher, sizeof(message)));
}
