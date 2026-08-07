#define pr_fmt(fmt) KBUILD_MODNAME ": " fmt

#include <linux/module.h>
#include <linux/notifier.h>

enum action {
	INIT,
	EXIT,
};

static inline const char *action_name(enum action action)
{
	switch (action) {
	case INIT:
		return "init";
	case EXIT:
		return "exit";
	default:
		return "unknown";
	}
}

int notifier_register(struct notifier_block *nb);
int notifier_unregister(struct notifier_block *nb);
void notifier_call(enum action action, void *data);

MODULE_DESCRIPTION("");
MODULE_LICENSE("GPL");
