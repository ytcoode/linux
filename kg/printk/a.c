#define DEBUG /* Enable pr_debug messages */

#include <linux/kg/printk.h>
#include <linux/kg/init.h>

static int init(void)
{
	pr_err("error\n");
	pr_warn("warn\n");
	pr_info("info\n");
	pr_debug("debug\n");
	return 0;
}
kg_initcall(init);
