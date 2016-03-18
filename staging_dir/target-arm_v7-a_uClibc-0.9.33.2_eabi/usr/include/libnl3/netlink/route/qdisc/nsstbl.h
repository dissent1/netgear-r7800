/*
 * netlink/route/sch/nsstbl.h	NSSTBL Qdisc
 *
 *	This library is free software; you can redistribute it and/or
 *	modify it under the terms of the GNU Lesser General Public
 *	License as published by the Free Software Foundation version 2.1
 *	of the License.
 *
 * Copyright (c) 2014
 */

#ifndef NETLINK_NSSTBL_H_
#define NETLINK_NSSTBL_H_

#include <netlink/netlink.h>
#include <netlink/route/tc.h>

#ifdef __cplusplus
extern "C" {
#endif

extern int rtnl_nsstbl_set_rate(struct rtnl_qdisc *qdisc, uint32_t rate);
extern uint32_t rtnl_nsstbl_get_rate(struct rtnl_qdisc *qdisc);

extern int rtnl_nsstbl_set_burst(struct rtnl_qdisc *qdisc, uint32_t burst);
extern uint32_t rtnl_nsstbl_get_burst(struct rtnl_qdisc *qdisc);

extern int rtnl_nsstbl_set_mtu(struct rtnl_qdisc *qdisc, uint32_t mtu);
extern uint32_t rtnl_nsstbl_get_mtu(struct rtnl_qdisc *qdisc);

extern int rtnl_nsstbl_set_peakrate(struct rtnl_qdisc *qdisc, uint32_t peakrate);
extern uint32_t rtnl_nsstbl_get_peakrate(struct rtnl_qdisc *qdisc);

#ifdef __cplusplus
}
#endif

#endif
