/*
 * netlink/route/sch/sfb.c	SFB Qdisc
 *
 * Copyright (c) 2012 Ben Menchaca
 */

#ifndef NETLINK_SFB_H_
#define NETLINK_SFB_H_

#include <netlink/netlink.h>

#ifdef __cplusplus
extern "C" {
#endif

extern void	rtnl_sfb_set_rehash_interval(struct rtnl_qdisc *, int);
extern int	rtnl_sfq_get_rehash_interval(struct rtnl_qdisc *);

extern void	rtnl_sfb_set_warmup_time(struct rtnl_qdisc *, int);
extern int	rtnl_sfq_get_warmup_time(struct rtnl_qdisc *);

extern void	rtnl_sfb_set_max(struct rtnl_qdisc *, int);
extern int	rtnl_sfq_get_max(struct rtnl_qdisc *);

extern void	rtnl_sfb_set_bin_size(struct rtnl_qdisc *, int);
extern int	rtnl_sfq_get_bin_size(struct rtnl_qdisc *);

extern void	rtnl_sfb_set_increment(struct rtnl_qdisc *, int);
extern int	rtnl_sfq_get_increment(struct rtnl_qdisc *);

extern void	rtnl_sfb_set_decrement(struct rtnl_qdisc *, int);
extern int	rtnl_sfq_get_decrement(struct rtnl_qdisc *);

extern void	rtnl_sfb_set_limit(struct rtnl_qdisc *, int);
extern int	rtnl_sfq_get_limit(struct rtnl_qdisc *);

extern void	rtnl_sfb_set_penalty_rate(struct rtnl_qdisc *, int);
extern int	rtnl_sfq_get_penalty_rate(struct rtnl_qdisc *);

extern void	rtnl_sfb_set_penalty_burst(struct rtnl_qdisc *, int);
extern int	rtnl_sfq_get_penalty_burst(struct rtnl_qdisc *);

#ifdef __cplusplus
}
#endif

#endif
