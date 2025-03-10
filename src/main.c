#include <stdio.h>
#include "tweetnacl.h"  // Updated include path

int main() {
    unsigned char public_key[crypto_box_PUBLICKEYBYTES];
    unsigned char secret_key[crypto_box_SECRETKEYBYTES];

    // Generate a key pair
    crypto_box_keypair(public_key, secret_key);

    printf("Public Key: ");
    for (int i = 0; i < crypto_box_PUBLICKEYBYTES; i++) {
        printf("%02x", public_key[i]);
    }
    printf("\n");

    printf("Secret Key: ");
    for (int i = 0; i < crypto_box_SECRETKEYBYTES; i++) {
        printf("%02x", secret_key[i]);
    }
    printf("\n");

    return 0;
}