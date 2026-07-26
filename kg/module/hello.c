#define pr_fmt(fmt) KBUILD_MODNAME ": " fmt

#include <linux/module.h>

static int value = 1;

module_param(value, int, 0644);
MODULE_PARM_DESC(value, "A simple int parameter");

static int __init hello_init(void)
{
	pr_info("init: %d\n", value);
	return 0;
}

static void __exit hello_exit(void)
{
	pr_info("exit: %d\n", value);
}

module_init(hello_init);
module_exit(hello_exit);

MODULE_AUTHOR("yt <ytcoode@kernel.guide>");
MODULE_DESCRIPTION("A basic hello world module");
MODULE_LICENSE("GPL");
