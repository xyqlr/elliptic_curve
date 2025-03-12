![Tests](https://github.com/xyqlr/elliptic_curve/actions/workflows/gtest.yml/badge.svg)

# Elliptic Curve Cryptography

[Elliptic Curve Cryptography (ECC)](https://en.wikipedia.org/wiki/Elliptic-curve_cryptography) is a public key cryptography technique based on the algebraic structure of elliptic curves over finite fields. Compared to [RSA](https://en.wikipedia.org/wiki/RSA_(cryptosystem)), ECC allows for smaller keys to provide equivalent security. For example, a 256-bit key in ECC is considered to be as secure as a 3072-bit key in RSA. This results in faster computations, lower power consumption, as well as memory and bandwidth savings.

ECC is widely used in various applications, including:
- Secure web browsing (SSL/TLS)
- Cryptographic protocols (e.g., ECDSA, ECDH)
- Blockchain and cryptocurrencies
- Mobile and embedded devices

## TweetNaCl

[TweetNaCl](https://tweetnacl.cr.yp.to/) is a small and portable crnyptographic library that provides high-level cryptographic operations, including public-key encryption, secret-key encryption, and hashing. It is a compact version of the NaCl (Networking and Cryptography Library) and is designed to be easy to use and secure. TweetNaCl is implemented in a minimalistic style, making it suitable for embedded systems and resource-constrained environments.


This repository adds some unit tests in gtest and tries to build some applications, including both in Python and c/c++.
