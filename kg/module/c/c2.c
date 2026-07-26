#define pr_fmt(fmt) KBUILD_MODNAME ": " fmt

#include <linux/module.h>

static void exit(void)
{
	pr_info("exit\n");
}

module_exit(exit);
