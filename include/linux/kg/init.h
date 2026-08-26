#ifndef _LINUX_KG_INIT_H
#define _LINUX_KG_INIT_H

#include <linux/init.h>

#define kg_initcall(fn) late_initcall_sync(fn)

#endif
