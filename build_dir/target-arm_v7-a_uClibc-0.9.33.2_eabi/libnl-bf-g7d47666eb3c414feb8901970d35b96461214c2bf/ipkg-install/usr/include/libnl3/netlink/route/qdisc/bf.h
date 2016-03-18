/*
 * netlink/route/sch/bf.h	HTB Qdisc
 *
 *	This library is free software; you can redistribute it and/or
 *	modify it under the terms of the GNU Lesser General Public
 *	License as published by the Free Software Foundation version 2.1
 *	of the License.
 *
 * Copyright (c) 2003-2011 Thomas Graf <tgraf@suug.ch>
 * Copyright (c) 2005 Petr Gotthard <petr.gotthard@siemens.com>
 * Copyright (c) 2005 Siemens AG Oesterreich
 */

#ifndef NETLINK_BF_H_
#define NETLINK_BF_H_

#include <netlink/netlink.h>
#include <netlink/route/tc.h>

#ifdef __cplusplus
extern "C" {
#endif

extern uint32_t	rtnl_bf_get_defcls(struct rtnl_qdisc *);
extern int	rtnl_bf_set_defcls(struct rtnl_qdisc *, uint32_t);
extern uint32_t rtnl_bf_get_flow_priorities(struct rtnl_qdisc *);
extern uint32_t rtnl_bf_get_node_priorities(struct rtnl_qdisc *);
extern int rtnl_bf_set_priorities(struct rtnl_qdisc *, uint32_t flow_prios,
				  uint32_t node_prios);
extern enum BF_PRIORITY_CALC rtnl_bf_get_prio_calc_method(struct rtnl_qdisc *);
extern int rtnl_bf_set_prio_calc_method(struct rtnl_qdisc *,
					enum BF_PRIORITY_CALC);
extern uint32_t rtnl_bf_get_total_bandwidth(struct rtnl_qdisc *);
extern int rtnl_bf_set_total_bandwidth(struct rtnl_qdisc *, uint32_t);

extern uint32_t	rtnl_bf_get_flow_prio(struct rtnl_class *);
extern int	rtnl_bf_set_flow_prio(struct rtnl_class *, uint32_t);
extern uint32_t	rtnl_bf_get_node_prio(struct rtnl_class *);
extern int	rtnl_bf_set_node_prio(struct rtnl_class *, uint32_t);
extern uint32_t	rtnl_bf_get_rate(struct rtnl_class *, uint32_t);
extern int	rtnl_bf_set_rates(struct rtnl_class *, uint32_t *);

#ifdef __cplusplus
}
#endif

#endif
