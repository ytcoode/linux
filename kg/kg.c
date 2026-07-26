#define pr_fmt(fmt) KBUILD_MODNAME ": " fmt

#include <linux/kg.h>
#include <linux/printk.h>

void kg_init(void)
{
	pr_info("init\n");
}
