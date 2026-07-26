#define pr_fmt(fmt) KBUILD_MODNAME ": " fmt

#include <linux/module.h>

static int init(void)
{
	pr_info("init\n");
	return 0;
}

module_init(init);

MODULE_DESCRIPTION("");
MODULE_LICENSE("GPL");
