#include <linux/printk.h>
#include <linux/kg/module.h>

static int init(void)
{
	pr_debug("init\n");
	return 0;
}

static void exit(void)
{
	pr_debug("exit\n");
}

module_init(init);
module_exit(exit);
