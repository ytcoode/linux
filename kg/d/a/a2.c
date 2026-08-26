#define pr_fmt(fmt) __FILE__ ": " fmt

#include <linux/printk.h>
#include <linux/init.h>

static int init(void)
{
	pr_info("info\n");
	pr_debug("debug\n");
	return 0;
}
late_initcall_sync(init);
