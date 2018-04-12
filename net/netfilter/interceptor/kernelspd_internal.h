/**
   @copyright
   Copyright (c) 2013, INSIDE Secure Oy. All rights reserved.
*/


#ifndef KERNELSPD_INTERNAL_H
#define KERNELSPD_INTERNAL_H

#include "kernelspd_defs.h"

#include "kernelspd_command.h"
#include "ip_selector_db.h"
#include "spd_util.h"

#include <linux/uidgid.h>
#include <linux/version.h>
#include "implementation_defs.h"

#define __DEBUG_MODULE__ kernelspdlinux

int
spd_hooks_init(
        void);

void
spd_hooks_uninit(
        void);


int
spd_proc_init(
        void);

void
spd_proc_uninit(
        void);

extern struct IPSelectorDb spd;

extern rwlock_t spd_lock;

<<<<<<< HEAD
=======
extern char *ipsec_boundary;

extern kuid_t bypass_kuid;

>>>>>>> ababdfdeb3c... netfilter: interceptor: Drop Samsung's kuid_t implementation
#endif /* KERNELSPD_INTERNAL_H */
