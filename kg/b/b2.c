#define pr_fmt(fmt) KBUILD_MODNAME ": " fmt

#include <linux/printk.h>
#include <linux/init.h>

static int init(void)
{
	pr_info("init\n");
	return 0;
}
__initcall(init);
