#include "a.h"

static BLOCKING_NOTIFIER_HEAD(nh);

int notifier_register(struct notifier_block *nb)
{
	return blocking_notifier_chain_register(&nh, nb);
}
EXPORT_SYMBOL(notifier_register);

int notifier_unregister(struct notifier_block *nb)
{
	return blocking_notifier_chain_unregister(&nh, nb);
}
EXPORT_SYMBOL(notifier_unregister);

void notifier_call(enum action action, void *data)
{
	blocking_notifier_call_chain(&nh, action, data);
}
EXPORT_SYMBOL(notifier_call);

static int __init init(void)
{
	pr_info("init\n");
	return 0;
}

static void __exit exit(void)
{
	pr_info("exit\n");
}

module_init(init);
module_exit(exit);
