/*
 **************************************************************************
 * Copyright (c) 2014, The Linux Foundation. All rights reserved.
 * Permission to use, copy, modify, and/or distribute this software for
 * any purpose with or without fee is hereby granted, provided that the
 * above copyright notice and this permission notice appear in all copies.
 * THE SOFTWARE IS PROVIDED "AS IS" AND THE AUTHOR DISCLAIMS ALL WARRANTIES
 * WITH REGARD TO THIS SOFTWARE INCLUDING ALL IMPLIED WARRANTIES OF
 * MERCHANTABILITY AND FITNESS. IN NO EVENT SHALL THE AUTHOR BE LIABLE FOR
 * ANY SPECIAL, DIRECT, INDIRECT, OR CONSEQUENTIAL DAMAGES OR ANY DAMAGES
 * WHATSOEVER RESULTING FROM LOSS OF USE, DATA OR PROFITS, WHETHER IN AN
 * ACTION OF CONTRACT, NEGLIGENCE OR OTHER TORTIOUS ACTION, ARISING OUT
 * OF OR IN CONNECTION WITH THE USE OR PERFORMANCE OF THIS SOFTWARE.
 **************************************************************************
 */

/*
 * nss_cmn
 *	Common Message Structure and APIs
 */

#ifndef __NSS_CMN_H
#define __NSS_CMN_H

struct nss_ctx_instance;

/**
 * Common enumerations
 */

/**
 * Tx command status
 */
typedef enum {
	NSS_TX_SUCCESS = 0,	/**< Success */
	NSS_TX_FAILURE,		/**< Command failure other than descriptor not available */
	NSS_TX_FAILURE_QUEUE,	/**< Command failure due to descriptor not available */
	NSS_TX_FAILURE_NOT_READY,	/**< Command failure due to NSS state uninitialized */
	NSS_TX_FAILURE_TOO_LARGE,	/**< Command is too large to fit in one message */
	NSS_TX_FAILURE_TOO_SHORT,	/**< Command/Packet is shorter than expected size */
	NSS_TX_FAILURE_NOT_SUPPORTED,	/**< Command/Packet not accepted for forwarding */
	NSS_TX_FAILURE_BAD_PARAM,	/**< Command failure due to bad parameters */
	NSS_TX_FAILURE_NOT_ENABLED,	/**< Command failure due to NSS feature is not enabled */
} nss_tx_status_t;

/**
 * NSS state status
 */
typedef enum {
	NSS_STATE_UNINITIALIZED = 0,	/**< NSS state is initailized */
	NSS_STATE_INITIALIZED		/**< NSS state is uninitialized */
} nss_state_t;

/**
 * NSS core id
 */
typedef enum {
	NSS_CORE_0 = 0,
	NSS_CORE_1,
	NSS_CORE_MAX
} nss_core_id_t;

/**
 * Callback register status
 */
typedef enum {
	NSS_CB_REGISTER_SUCCESS = 0,	/**< Callback register successful */
	NSS_CB_REGISTER_FAILED,		/**< Callback register failed */
} nss_cb_register_status_t;

/**
 * Callback unregister status
 */
typedef enum {
	NSS_CB_UNREGISTER_SUCCESS = 0,	/**< Callback unregister successful */
	NSS_CB_UNREGISTER_FAILED,		/**< Callback unregister failed */
} nss_cb_unregister_status_t;

/**
 * Common response structure
 */
enum nss_cmn_response {
	NSS_CMN_RESPONSE_ACK,		/**< Message Acknowledge */
	NSS_CMN_RESPONSE_EVERSION,	/**< Message Version Error */
	NSS_CMN_RESPONSE_EINTERFACE,	/**< Message Interface Error */
	NSS_CMN_RESPONSE_ELENGTH,	/**< Message Length Error */
	NSS_CMN_RESPONSE_EMSG,		/**< Message Error */
	NSS_CMM_RESPONSE_NOTIFY,	/**< Message Independant of Request */
	NSS_CMN_RESPONSE_LAST
};

/**
 * Common structures
 */

/**
 * Common message structure
 */
struct nss_cmn_msg {
	uint16_t version;		/**< Version id for main message format */
	uint16_t interface;		/**< Primary Key for all messages */
	enum nss_cmn_response response;	/**< Primary response */
	uint32_t type;			/**< Decetralized request #, to be used to match response # */
	uint32_t error;			/**< Decentralized specific error message, response == EMSG */
	uint32_t cb;			/**< Place for callback pointer */
	uint32_t app_data;		/**< Place for app data */
	uint32_t len;			/**< What is the length of the message excluding this header */
};

/**
 * Common per node stats structure
 */
struct nss_cmn_node_stats {
	uint32_t rx_packets;		/**< Number of packets received */
	uint32_t rx_bytes;		/**< Number of bytes received */
	uint32_t rx_dropped;		/**< Number of receive drops due to queue full */
	uint32_t tx_packets;		/**< Number of packets transmitted */
	uint32_t tx_bytes;		/**< Number of bytes transmitted */
};

#endif /* __NSS_CMN_MSG_H */
