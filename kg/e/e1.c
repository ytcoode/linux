#define pr_fmt(fmt) __FILE__ ": " fmt

#include <linux/printk.h>
#include "e1.h"

void e1_f1(void)
{
	pr_info("%s\n", __func__);
}
EXPORT_SYMBOL(e1_f1);
