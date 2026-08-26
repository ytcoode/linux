#include <linux/printk.h>
#include <linux/kg/init.h>

static int init(void)
{
	pr_debug("init\n");
	return 0;
}
kg_initcall(init);
