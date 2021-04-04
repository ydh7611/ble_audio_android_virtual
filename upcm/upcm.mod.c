#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

MODULE_INFO(vermagic, VERMAGIC_STRING);

__visible struct module __this_module
__attribute__((section(".gnu.linkonce.this_module"))) = {
	.name = KBUILD_MODNAME,
	.init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
	.exit = cleanup_module,
#endif
	.arch = MODULE_ARCH_INIT,
};

#ifdef RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

static const struct modversion_info ____versions[]
__used
__attribute__((section("__versions"))) = {
	{ 0xeaa704a3, __VMLINUX_SYMBOL_STR(module_layout) },
	{ 0x15afb524, __VMLINUX_SYMBOL_STR(snd_pcm_lib_get_vmalloc_page) },
	{ 0x6dafb2a7, __VMLINUX_SYMBOL_STR(snd_pcm_lib_ioctl) },
	{ 0x2cd4820f, __VMLINUX_SYMBOL_STR(no_llseek) },
	{ 0x973a98d3, __VMLINUX_SYMBOL_STR(snd_card_free_when_closed) },
	{ 0x4075af4d, __VMLINUX_SYMBOL_STR(misc_deregister) },
	{ 0xe26f98c4, __VMLINUX_SYMBOL_STR(switch_dev_unregister) },
	{ 0x1bcb3232, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x1c44f85e, __VMLINUX_SYMBOL_STR(misc_register) },
	{ 0x50a2dee, __VMLINUX_SYMBOL_STR(switch_dev_register) },
	{ 0x89e1afd, __VMLINUX_SYMBOL_STR(snd_card_free) },
	{ 0x6f8c9737, __VMLINUX_SYMBOL_STR(init_timer_key) },
	{ 0x91d9a762, __VMLINUX_SYMBOL_STR(snd_card_register) },
	{ 0x76b2f7aa, __VMLINUX_SYMBOL_STR(snd_pcm_set_ops) },
	{ 0x8b612532, __VMLINUX_SYMBOL_STR(snd_pcm_new) },
	{ 0x60a3f6a9, __VMLINUX_SYMBOL_STR(snd_device_new) },
	{ 0x9e584e72, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0xcf1fd3c8, __VMLINUX_SYMBOL_STR(snd_card_new) },
	{ 0xd455f1d9, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x84bc974b, __VMLINUX_SYMBOL_STR(__arch_copy_from_user) },
	{ 0x88db9f48, __VMLINUX_SYMBOL_STR(__check_object_size) },
	{ 0xc9fbec8f, __VMLINUX_SYMBOL_STR(snd_pcm_period_elapsed) },
	{ 0x4829a47e, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x97fdbab9, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0x96220280, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0xf4a38818, __VMLINUX_SYMBOL_STR(_snd_pcm_lib_alloc_vmalloc_buffer) },
	{ 0xf8067dc2, __VMLINUX_SYMBOL_STR(snd_pcm_lib_free_vmalloc_buffer) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xa34bf5e9, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0xfb09c927, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x42a1c3dc, __VMLINUX_SYMBOL_STR(nonseekable_open) },
	{ 0x9e03a5cd, __VMLINUX_SYMBOL_STR(del_timer) },
	{ 0x526c3a6c, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0x8bc1866a, __VMLINUX_SYMBOL_STR(add_timer) },
	{ 0xdcb764ad, __VMLINUX_SYMBOL_STR(memset) },
	{ 0x4c0b1607, __VMLINUX_SYMBOL_STR(switch_set_state) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xf33847d3, __VMLINUX_SYMBOL_STR(_raw_spin_unlock) },
	{ 0x5cd885d5, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

