/*
 * netlink/route/sch/nssfifo.c	NSSFIFO Qdisc
 *
 *	This library is free software; you can redistribute it and/or
 *	modify it under the terms of the GNU Lesser General Public
 *	License as published by the Free Software Foundation version 2.1
 *	of the License.
 *
 * Copyright (c) 2014
 */

#ifndef NETLINK_NSSFIFO_H_
#define NETLINK_NSSFIFO_H_

#include <netlink/netlink.h>
#include <netlink/route/qdisc.h>

#ifdef __cplusplus
extern "C" {
#endif

extern int	rtnl_nssfifo_set_limit(struct rtnl_qdisc *, uint32_t);
extern uint32_t	rtnl_nssfifo_get_limit(struct rtnl_qdisc *);

extern int	rtnl_nssfifo_set_default(struct rtnl_qdisc *, uint8_t);
extern uint8_t	rtnl_nssfifo_get_default(struct rtnl_qdisc *);

#ifdef __cplusplus
}
#endif

#endif
