/*
 * netlink/route/sch/nssprio.h	NSSPRIO Qdisc
 *
 *	This library is free software; you can redistribute it and/or
 *	modify it under the terms of the GNU Lesser General Public
 *	License as published by the Free Software Foundation version 2.1
 *	of the License.
 *
 * Copyright (c) 2014
 */

#ifndef NETLINK_NSSPRIO_H_
#define NETLINK_NSSPRIO_H_

#include <netlink/netlink.h>
#include <netlink/route/tc.h>

#ifdef __cplusplus
extern "C" {
#endif

extern int rtnl_nssprio_set_bands(struct rtnl_qdisc *qdisc, int bands);
extern int rtnl_nssprio_get_bands(struct rtnl_qdisc *qdisc);

#ifdef __cplusplus
}
#endif

#endif
