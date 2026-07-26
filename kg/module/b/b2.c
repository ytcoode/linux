#define pr_fmt(fmt) KBUILD_MODNAME ": " fmt

#include <linux/module.h>

static int init(void)
{
	pr_info("init\n");
	return 0;
}

static void exit(void)
{
	pr_info("exit\n");
}

module_init(init);
module_exit(exit);

MODULE_DESCRIPTION("");
MODULE_LICENSE("GPL");
