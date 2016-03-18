#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

MODULE_INFO(vermagic, VERMAGIC_STRING);

struct module __this_module
__attribute__((section(".gnu.linkonce.this_module"))) = {
 .name = KBUILD_MODNAME,
 .init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
 .exit = cleanup_module,
#endif
 .arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=dwc3";

MODULE_ALIAS("pci:v000016C3d0000ABCDsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00000F37sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000119Esv*sd*bc*sc*i*");
