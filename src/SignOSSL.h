#ifndef SIGN_OSSL_H
#define SIGN_OSSL_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <openssl/pem.h>
#include <openssl/rsa.h>
#include <openssl/sha.h>
#include <openssl/err.h>

unsigned char *signWithRSA(const char *privateKeyFilePath, unsigned char *inputData, size_t inputDataLength, size_t *outputDataLength);

#endif // SIGN_OSSL_H

// 0xA422