#include "a.h"

static int notify(struct notifier_block *nb, unsigned long action, void *data)
{
	pr_info("%s: %s\n", (char *)data, action_name(action));
	return NOTIFY_OK;
}

static struct notifier_block nb = {
	.notifier_call = notify,
};

static int __init init(void)
{
	pr_info("init\n");
	notifier_register(&nb);
	return 0;
}

static void __exit exit(void)
{
	pr_info("exit\n");
	notifier_unregister(&nb);
}

module_init(init);
module_exit(exit);
