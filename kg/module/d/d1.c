#define pr_fmt(fmt) __FILE__ ": " fmt

#include <linux/module.h>
#include <e/e1.h>
#include <module/e/e1.h>

static int init(void)
{
	pr_info("init\n");
	e1_f1();
	module_e1_f1();
	return 0;
}

module_init(init);

MODULE_DESCRIPTION("");
MODULE_LICENSE("GPL");
