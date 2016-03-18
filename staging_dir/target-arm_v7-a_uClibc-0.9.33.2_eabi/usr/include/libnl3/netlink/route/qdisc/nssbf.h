/*
 * netlink/route/sch/nssbf.h	NSSBF Qdisc
 *
 *	This library is free software; you can redistribute it and/or
 *	modify it under the terms of the GNU Lesser General Public
 *	License as published by the Free Software Foundation version 2.1
 *	of the License.
 *
 * Copyright (c) 2014
 */

#ifndef NETLINK_NSSBF_H_
#define NETLINK_NSSBF_H_

#include <netlink/netlink.h>
#include <netlink/route/tc.h>

#ifdef __cplusplus
extern "C" {
#endif

extern int rtnl_nssbf_qdisc_set_defcls(struct rtnl_qdisc *qdisc, uint16_t defcls);
extern uint32_t rtnl_nssbf_qdisc_get_defcls(struct rtnl_qdisc *qdisc);

extern int rtnl_nssbf_class_set_rate(struct rtnl_class *class, uint32_t rate);
extern uint32_t rtnl_nssbf_class_get_rate(struct rtnl_class *class);

extern int rtnl_nssbf_class_set_burst(struct rtnl_class *class, uint32_t burst);
extern uint32_t rtnl_nssbf_class_get_burst(struct rtnl_class *class);

extern int rtnl_nssbf_class_set_mtu(struct rtnl_class *class, uint32_t mtu);
extern uint32_t rtnl_nssbf_class_get_mtu(struct rtnl_class *class);

extern int rtnl_nssbf_class_set_quantum(struct rtnl_class *class, uint32_t q);
extern uint32_t rtnl_nssbf_class_get_quantum(struct rtnl_class *class);

#ifdef __cplusplus
}
#endif

#endif
