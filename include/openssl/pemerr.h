/*
 * MODIFIED by Jan-Jaap Korpershoek in 2020 for compatibility with a bare-metal environment
 */

/*
 * Generated by util/mkerr.pl DO NOT EDIT
 * Copyright 1995-2019 The OpenSSL Project Authors. All Rights Reserved.
 *
 * Licensed under the OpenSSL license (the "License").  You may not use
 * this file except in compliance with the License.  You can obtain a copy
 * in the file LICENSE in the source distribution or at
 * https://www.openssl.org/source/license.html
 */

#ifndef HEADER_PEMERR_H
# define HEADER_PEMERR_H

# ifndef HEADER_SYMHACKS_H
#  include <openssl/symhacks.h>
# endif

# ifdef  __cplusplus
extern "C"
# endif
int ERR_load_PEM_strings(void);

/*
 * PEM function codes.
 */
# define PEM_F_B2I_DSS                                    127
# define PEM_F_B2I_PVK_BIO                                128
# define PEM_F_B2I_RSA                                    129
# define PEM_F_CHECK_BITLEN_DSA                           130
# define PEM_F_CHECK_BITLEN_RSA                           131
# define PEM_F_D2I_PKCS8PRIVATEKEY_BIO                    120
# define PEM_F_D2I_PKCS8PRIVATEKEY_FP                     121
# define PEM_F_DO_B2I                                     132
# define PEM_F_DO_B2I_BIO                                 133
# define PEM_F_DO_BLOB_HEADER                             134
# define PEM_F_DO_I2B                                     146
# define PEM_F_DO_PK8PKEY                                 126
# define PEM_F_DO_PK8PKEY_FP                              125
# define PEM_F_DO_PVK_BODY                                135
# define PEM_F_DO_PVK_HEADER                              136
# define PEM_F_GET_HEADER_AND_DATA                        143
# define PEM_F_GET_NAME                                   144
# define PEM_F_I2B_PVK                                    137
# define PEM_F_I2B_PVK_BIO                                138
# define PEM_F_LOAD_IV                                    101
# define PEM_F_PEM_ASN1_READ                              102
# define PEM_F_PEM_ASN1_READ_BIO                          103
# define PEM_F_PEM_ASN1_WRITE                             104
# define PEM_F_PEM_ASN1_WRITE_BIO                         105
# define PEM_F_PEM_DEF_CALLBACK                           100
# define PEM_F_PEM_DO_HEADER                              106
# define PEM_F_PEM_GET_EVP_CIPHER_INFO                    107
# define PEM_F_PEM_READ                                   108
# define PEM_F_PEM_READ_BIO                               109
# define PEM_F_PEM_READ_BIO_DHPARAMS                      141
# define PEM_F_PEM_READ_BIO_EX                            145
# define PEM_F_PEM_READ_BIO_PARAMETERS                    140
# define PEM_F_PEM_READ_BIO_PRIVATEKEY                    123
# define PEM_F_PEM_READ_DHPARAMS                          142
# define PEM_F_PEM_READ_PRIVATEKEY                        124
# define PEM_F_PEM_SIGNFINAL                              112
# define PEM_F_PEM_WRITE                                  113
# define PEM_F_PEM_WRITE_BIO                              114
# define PEM_F_PEM_WRITE_PRIVATEKEY                       139
# define PEM_F_PEM_X509_INFO_READ                         115
# define PEM_F_PEM_X509_INFO_READ_BIO                     116
# define PEM_F_PEM_X509_INFO_WRITE_BIO                    117

/*
 * PEM reason codes.
 */
# define PEM_R_BAD_BASE64_DECODE                          100
# define PEM_R_BAD_DECRYPT                                101
# define PEM_R_BAD_END_LINE                               102
# define PEM_R_BAD_IV_CHARS                               103
# define PEM_R_BAD_MAGIC_NUMBER                           116
# define PEM_R_BAD_PASSWORD_READ                          104
# define PEM_R_BAD_VERSION_NUMBER                         117
# define PEM_R_BIO_WRITE_FAILURE                          118
# define PEM_R_CIPHER_IS_NULL                             127
# define PEM_R_ERROR_CONVERTING_PRIVATE_KEY               115
# define PEM_R_EXPECTING_PRIVATE_KEY_BLOB                 119
# define PEM_R_EXPECTING_PUBLIC_KEY_BLOB                  120
# define PEM_R_HEADER_TOO_LONG                            128
# define PEM_R_INCONSISTENT_HEADER                        121
# define PEM_R_KEYBLOB_HEADER_PARSE_ERROR                 122
# define PEM_R_KEYBLOB_TOO_SHORT                          123
# define PEM_R_MISSING_DEK_IV                             129
# define PEM_R_NOT_DEK_INFO                               105
# define PEM_R_NOT_ENCRYPTED                              106
# define PEM_R_NOT_PROC_TYPE                              107
# define PEM_R_NO_START_LINE                              108
# define PEM_R_PROBLEMS_GETTING_PASSWORD                  109
# define PEM_R_PVK_DATA_TOO_SHORT                         124
# define PEM_R_PVK_TOO_SHORT                              125
# define PEM_R_READ_KEY                                   111
# define PEM_R_SHORT_HEADER                               112
# define PEM_R_UNEXPECTED_DEK_IV                          130
# define PEM_R_UNSUPPORTED_CIPHER                         113
# define PEM_R_UNSUPPORTED_ENCRYPTION                     114
# define PEM_R_UNSUPPORTED_KEY_COMPONENTS                 126

#endif
