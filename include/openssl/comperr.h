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

#ifndef HEADER_COMPERR_H
# define HEADER_COMPERR_H

# ifndef HEADER_SYMHACKS_H
#  include <openssl/symhacks.h>
# endif

# include <openssl/opensslconf.h>

# ifndef OPENSSL_NO_COMP

#  ifdef  __cplusplus
extern "C"
#  endif
int ERR_load_COMP_strings(void);

/*
 * COMP function codes.
 */
#  define COMP_F_BIO_ZLIB_FLUSH                            99
#  define COMP_F_BIO_ZLIB_NEW                              100
#  define COMP_F_BIO_ZLIB_READ                             101
#  define COMP_F_BIO_ZLIB_WRITE                            102
#  define COMP_F_COMP_CTX_NEW                              103

/*
 * COMP reason codes.
 */
#  define COMP_R_ZLIB_DEFLATE_ERROR                        99
#  define COMP_R_ZLIB_INFLATE_ERROR                        100
#  define COMP_R_ZLIB_NOT_SUPPORTED                        101

# endif
#endif
