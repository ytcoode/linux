#define pr_fmt(fmt) KBUILD_MODNAME ": " fmt

#include <linux/printk.h>
#include <linux/init.h>

static int init(void)
{
	pr_info("c2_init\n");
	return 0;
}
late_initcall_sync(init);
