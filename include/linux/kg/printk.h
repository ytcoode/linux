#ifndef _LINUX_KG_PRINTK_H
#define _LINUX_KG_PRINTK_H

#ifndef pr_fmt
#define pr_fmt(fmt) __FILE__ ": " fmt
#endif

#include <linux/printk.h>

#endif
