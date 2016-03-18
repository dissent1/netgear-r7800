/* Copyright (c) 2014, The Linux Foundation. All rights reserved.
 *
 * Permission to use, copy, modify, and/or distribute this software for any
 * purpose with or without fee is hereby granted, provided that the above
 * copyright notice and this permission notice appear in all copies.
 *
 *
 * THE SOFTWARE IS PROVIDED "AS IS" AND THE AUTHOR DISCLAIMS ALL WARRANTIES
 * WITH REGARD TO THIS SOFTWARE INCLUDING ALL IMPLIED WARRANTIES OF MERCHANTABILITY
 * AND FITNESS. IN NO EVENT SHALL THE AUTHOR BE LIABLE FOR ANY SPECIAL, DIRECT
 * INDIRECT, OR CONSEQUENTIAL DAMAGES OR ANY DAMAGES WHATSOEVER RESULTING FROM
 * LOSS OF USE, DATA OR PROFITS, WHETHER IN AN ACTION OF CONTRACT, NEGLIGENCE
 * OR OTHER TORTIOUS ACTION, ARISING OUT OF OR IN CONNECTION WITH THE USE OR
 * PERFORMANCE OF THIS SOFTWARE.
 *
 *
 */
#ifndef __NSS_CRYPTO_IF_H
#define __NSS_CRYPTO_IF_H

/*
 * @file API interface definitions for crypto driver
 */

#define NSS_CRYPTO_BITS2BYTES(x)	(x / 8)	/**< Bits to Bytes */
#define NSS_CRYPTO_BYTES2BITS(x)	(x * 8)	/**< Bytes to bits */
#define NSS_CRYPTO_MAX_QDEPTH		256	/**< H/W queue depth per pipe */
#define NSS_CRYPTO_MAX_CACHED_IDXS	4	/**< Max supported sessions */
#define NSS_CRYPTO_BAM_PP		4 	/**< BAM Pipe Pairs */
#define NSS_CRYPTO_MAX_NAME		64	/**< Max supported name size */
#define NSS_CRYPTO_BUF_TAILROOM		128	/**< Tailroom required for crypto */

/**
 * @brief Crypto status for all nss_crypto_XXX api's
 */
typedef enum nss_crypto_status {
	NSS_CRYPTO_STATUS_OK,		/**< OK */
	NSS_CRYPTO_STATUS_FAIL,		/**< general failure status */
	NSS_CRYPTO_STATUS_EINVAL,	/**< invalid parameters */
	NSS_CRYPTO_STATUS_EBUSY,	/**< resource unavailable */
	NSS_CRYPTO_STATUS_ERESTART,	/**< resource unavailable, defer the operation */
	NSS_CRYPTO_STATUS_ENOMEM,	/**< out of memory */
	NSS_CRYPTO_STATUS_ENOSUPP,	/**< unsupported configuration */
} nss_crypto_status_t;

/**
 * @brief max key lengths for supported algorithms
 */
enum nss_crypto_max_keylen {
	NSS_CRYPTO_MAX_KEYLEN_AES = 32,		/**< max key size for AES (bytes) */
	NSS_CRYPTO_MAX_KEYLEN_SHA1 = 20,	/**< max key size for SHA1 (bytes) */
	NSS_CRYPTO_MAX_KEYLEN_SHA256 = 32,	/**< max key size for SHA256 (bytes) */
	NSS_CRYPTO_MAX_KEYLEN_DES = 24,		/**< max key size for DES */
};

/**
 * @brief max IV lengths for algorithms supported by the H/W
 */
enum nss_crypto_max_ivlen {
	NSS_CRYPTO_MAX_IVLEN_NULL = 0,		/**< amx IV size for NULL (bytes) */
	NSS_CRYPTO_MAX_IVLEN_DES = 8,		/**< max IV size for DES (bytes) */
	NSS_CRYPTO_MAX_IVLEN_AES = 16,		/**< max IV size for AES (bytes) */
};

/**
 * @brief supported cipher algorithms block lengths
 */
enum nss_crypto_max_blocklen {
	NSS_CRYPTO_MAX_BLKLEN_NULL = 4,		/**< max block length for NULL (bytes) */
	NSS_CRYPTO_MAX_BLKLEN_DES = 8,		/**< max block length for DES (bytes) */
	NSS_CRYPTO_MAX_BLKLEN_AES = 16,		/**< max block length for AES (bytes) */
};

/**
 * @brief max hash generated for a HMAC algorithm.
 */
enum nss_crypto_max_hashlen {
	NSS_CRYPTO_MAX_HASHLEN_SHA1 = 20,	/**< max hash size for SHA1 (bytes) */
	NSS_CRYPTO_MAX_HASHLEN_SHA256 = 32,	/**< max hash size for SHA256 (bytes) */
};

/**
 * @brief crypto request type
 */
enum nss_crypto_req_type {
	NSS_CRYPTO_REQ_TYPE_NONE = 0x0,			/**< Reset request */
	NSS_CRYPTO_REQ_TYPE_AUTH = 0x0001,		/**< authentication request */
	NSS_CRYPTO_REQ_TYPE_ENCRYPT = 0x0002,		/**< encryption request*/
	NSS_CRYPTO_REQ_TYPE_DECRYPT = 0x0004,		/**< decryption request*/
};

/**
 * @brief crypto config msg type
 */
enum nss_crypto_config_type {
	NSS_CRYPTO_CONFIG_TYPE_NONE = 0,		/**< No config */
	NSS_CRYPTO_CONFIG_TYPE_OPEN_ENG,		/**< open engine config */
	NSS_CRYPTO_CONFIG_TYPE_CLOSE_ENG,		/**< close engine config */
	NSS_CRYPTO_CONFIG_TYPE_RESET_SESSION,		/**< reset session state config */
	NSS_CRYPTO_CONFIG_TYPE_MAX
};

enum nss_crypto_sync_type {
	NSS_CRYPTO_SYNC_TYPE_NONE = 0,			/**< sync type none */
	NSS_CRYPTO_SYNC_TYPE_OPEN_ENG = 1,		/**< open engine sync */
	NSS_CRYPTO_SYNC_TYPE_CLOSE_ENG = 2,		/**< close engine sync */
	NSS_CRYPTO_SYNC_TYPE_STATS = 3,			/**< stats sync */
	NSS_CRYPTO_SYNC_TYPE_MAX
};

struct nss_crypto_buf;
/**
 * @brief Cipher/Auth operation completion callback function type
 */
typedef void (*nss_crypto_comp_t)(struct nss_crypto_buf *buf);

/**
 * @brief describe a cipher key
 */
struct nss_crypto_key {
	uint32_t algo;			/**< algorithm for Cipher or Auth*/
	uint32_t key_len;		/**< key length */
	uint8_t *key;			/**< location of the key stored in memory */
};

/**
 * @brief crypto parameters info
 */
struct nss_crypto_params {
	uint16_t cipher_skip;		/**< start encrypt/decrypt from here */
	uint16_t auth_skip;		/**< skip bytes from data to start authenticating */

	uint16_t req_type;		/**< nss_crypto_req_type */
	uint8_t  res[2];		/**< reserve for 4 byte alignment */
};

#endif /* __NSS_CRYPTO_IF_H */
