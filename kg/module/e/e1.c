#define pr_fmt(fmt) __FILE__ ": " fmt

#include <linux/module.h>
#include "e1.h"

void module_e1_f1(void)
{
	pr_info("%s\n", __func__);
}
EXPORT_SYMBOL(module_e1_f1);

static int init(void)
{
	pr_info("init\n");
	return 0;
}

module_init(init);

MODULE_DESCRIPTION("");
MODULE_LICENSE("GPL");
