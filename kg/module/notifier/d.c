#include "a.h"

static int __init init(void)
{
	pr_info("init\n");
	notifier_call(INIT, KBUILD_MODNAME);
	return 0;
}

static void __exit exit(void)
{
	pr_info("exit\n");
	notifier_call(EXIT, KBUILD_MODNAME);
}

module_init(init);
module_exit(exit);
