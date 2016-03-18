/*
 * netlink/route/sch/nsscodel.h	NSSCODEL Qdisc
 *
 *	This library is free software; you can redistribute it and/or
 *	modify it under the terms of the GNU Lesser General Public
 *	License as published by the Free Software Foundation version 2.1
 *	of the License.
 *
 * Copyright (c) 2014
 */

#ifndef NETLINK_NSSCODEL_H_
#define NETLINK_NSSCODEL_H_

#include <netlink/netlink.h>
#include <netlink/route/tc.h>

#ifdef __cplusplus
extern "C" {
#endif

extern int rtnl_nsscodel_set_limit(struct rtnl_qdisc *qdisc, uint32_t limit);
extern uint32_t rtnl_nsscodel_get_limit(struct rtnl_qdisc *qdisc);

extern int rtnl_nsscodel_set_target(struct rtnl_qdisc *qdisc, uint32_t target);
extern uint32_t rtnl_nsscodel_get_target(struct rtnl_qdisc *qdisc);

extern int rtnl_nsscodel_set_interval(struct rtnl_qdisc *qdisc, uint32_t interval);
extern uint32_t rtnl_nsscodel_get_interval(struct rtnl_qdisc *qdisc);

extern int rtnl_nsscodel_set_default(struct rtnl_qdisc *qdisc, uint8_t set_default);
extern uint8_t rtnl_nsscodel_get_default(struct rtnl_qdisc *qdisc);

#ifdef __cplusplus
}
#endif

#endif
