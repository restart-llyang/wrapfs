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

static const struct modversion_info ____versions[]
__used
__attribute__((section("__versions"))) = {
	{ 0xc7a6b700, __VMLINUX_SYMBOL_STR(module_layout) },
	{ 0x668100db, __VMLINUX_SYMBOL_STR(vfs_create) },
	{ 0x5cb89001, __VMLINUX_SYMBOL_STR(kmem_cache_destroy) },
	{ 0xb053afc3, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0xe074f78b, __VMLINUX_SYMBOL_STR(fsstack_copy_inode_size) },
	{ 0x4c4fef19, __VMLINUX_SYMBOL_STR(kernel_stack) },
	{ 0x68e2f221, __VMLINUX_SYMBOL_STR(_raw_spin_unlock) },
	{ 0x6073f6b3, __VMLINUX_SYMBOL_STR(generic_file_llseek) },
	{ 0x59bc59f8, __VMLINUX_SYMBOL_STR(mntget) },
	{ 0x3b93ec6c, __VMLINUX_SYMBOL_STR(inode_permission) },
	{ 0xd0d8621b, __VMLINUX_SYMBOL_STR(strlen) },
	{ 0xba554d8b, __VMLINUX_SYMBOL_STR(d_set_d_op) },
	{ 0x9930252e, __VMLINUX_SYMBOL_STR(iget5_locked) },
	{ 0x71d9e8f0, __VMLINUX_SYMBOL_STR(__generic_file_fsync) },
	{ 0x82c18384, __VMLINUX_SYMBOL_STR(dget_parent) },
	{ 0x22f8bbf8, __VMLINUX_SYMBOL_STR(vfs_link) },
	{ 0xeb8269d, __VMLINUX_SYMBOL_STR(filemap_write_and_wait) },
	{ 0xce891b0d, __VMLINUX_SYMBOL_STR(touch_atime) },
	{ 0x4eb6704b, __VMLINUX_SYMBOL_STR(generic_delete_inode) },
	{ 0x16ea5d9f, __VMLINUX_SYMBOL_STR(lockref_get) },
	{ 0xcedc007f, __VMLINUX_SYMBOL_STR(dput) },
	{ 0x6e2df36e, __VMLINUX_SYMBOL_STR(dentry_open) },
	{ 0xb5cb377d, __VMLINUX_SYMBOL_STR(vfs_path_lookup) },
	{ 0x9d3671a8, __VMLINUX_SYMBOL_STR(vfs_mknod) },
	{ 0x1e356cd9, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0xdc5985e6, __VMLINUX_SYMBOL_STR(generic_read_dir) },
	{ 0x5ca51907, __VMLINUX_SYMBOL_STR(igrab) },
	{ 0x8f2eb896, __VMLINUX_SYMBOL_STR(vfs_symlink) },
	{ 0x4df17694, __VMLINUX_SYMBOL_STR(mount_nodev) },
	{ 0x96b14107, __VMLINUX_SYMBOL_STR(path_get) },
	{ 0x26fdc337, __VMLINUX_SYMBOL_STR(truncate_setsize) },
	{ 0xa15fac84, __VMLINUX_SYMBOL_STR(vfs_rmdir) },
	{ 0x6429d687, __VMLINUX_SYMBOL_STR(unlock_rename) },
	{ 0x125aca94, __VMLINUX_SYMBOL_STR(vfs_read) },
	{ 0xf06b055f, __VMLINUX_SYMBOL_STR(kern_path) },
	{ 0x8329e6f0, __VMLINUX_SYMBOL_STR(memset) },
	{ 0x7ce2343f, __VMLINUX_SYMBOL_STR(current_task) },
	{ 0x50eedeb8, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xdc77f5e7, __VMLINUX_SYMBOL_STR(d_rehash) },
	{ 0xb4a91966, __VMLINUX_SYMBOL_STR(vfs_getxattr) },
	{ 0xb4390f9a, __VMLINUX_SYMBOL_STR(mcount) },
	{ 0x9db93095, __VMLINUX_SYMBOL_STR(kmem_cache_free) },
	{ 0x67879904, __VMLINUX_SYMBOL_STR(lock_rename) },
	{ 0xc5167b72, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x87a8a42d, __VMLINUX_SYMBOL_STR(set_nlink) },
	{ 0x6ad44b3, __VMLINUX_SYMBOL_STR(fput) },
	{ 0x69c53bc2, __VMLINUX_SYMBOL_STR(nd_set_link) },
	{ 0x5bfa89d9, __VMLINUX_SYMBOL_STR(inode_init_once) },
	{ 0x1b570656, __VMLINUX_SYMBOL_STR(kmem_cache_alloc) },
	{ 0x7fe564ed, __VMLINUX_SYMBOL_STR(d_alloc) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x335f0e31, __VMLINUX_SYMBOL_STR(unlock_new_inode) },
	{ 0xd71c3f9c, __VMLINUX_SYMBOL_STR(d_drop) },
	{ 0x9395aefb, __VMLINUX_SYMBOL_STR(inode_newsize_ok) },
	{ 0x7ac425bc, __VMLINUX_SYMBOL_STR(vfs_statfs) },
	{ 0xfa3d43b1, __VMLINUX_SYMBOL_STR(vfs_mkdir) },
	{ 0x6f20960a, __VMLINUX_SYMBOL_STR(full_name_hash) },
	{ 0x39f4f095, __VMLINUX_SYMBOL_STR(inode_change_ok) },
	{ 0x3a102b2c, __VMLINUX_SYMBOL_STR(path_put) },
	{ 0x1e4e91ea, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x67f7403e, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0x3028afb2, __VMLINUX_SYMBOL_STR(generic_show_options) },
	{ 0x13d1494, __VMLINUX_SYMBOL_STR(vfs_unlink) },
	{ 0x9abf4023, __VMLINUX_SYMBOL_STR(kmem_cache_create) },
	{ 0x3c953515, __VMLINUX_SYMBOL_STR(register_filesystem) },
	{ 0xeed0d906, __VMLINUX_SYMBOL_STR(fsstack_copy_attr_all) },
	{ 0x2af09b05, __VMLINUX_SYMBOL_STR(d_lookup) },
	{ 0x5150cd78, __VMLINUX_SYMBOL_STR(iput) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x4a619f83, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x516c9d90, __VMLINUX_SYMBOL_STR(d_make_root) },
	{ 0xdb4053c5, __VMLINUX_SYMBOL_STR(iterate_dir) },
	{ 0x50126b4, __VMLINUX_SYMBOL_STR(unregister_filesystem) },
	{ 0xa9c9e62b, __VMLINUX_SYMBOL_STR(init_special_inode) },
	{ 0x4d846fe2, __VMLINUX_SYMBOL_STR(kfree_put_link) },
	{ 0xbf56f57d, __VMLINUX_SYMBOL_STR(vfs_rename) },
	{ 0x8ad34a74, __VMLINUX_SYMBOL_STR(vfs_getattr) },
	{ 0xec5d7ee1, __VMLINUX_SYMBOL_STR(notify_change) },
	{ 0x59ffaa54, __VMLINUX_SYMBOL_STR(vfs_setxattr) },
	{ 0xa175b123, __VMLINUX_SYMBOL_STR(clear_inode) },
	{ 0xf0fa9cd, __VMLINUX_SYMBOL_STR(d_instantiate) },
	{ 0x88e53564, __VMLINUX_SYMBOL_STR(vfs_listxattr) },
	{ 0xa835413b, __VMLINUX_SYMBOL_STR(clear_nlink) },
	{ 0xd7ccdd5c, __VMLINUX_SYMBOL_STR(vfs_removexattr) },
	{ 0xcfacfbda, __VMLINUX_SYMBOL_STR(vfs_write) },
	{ 0x5f83504e, __VMLINUX_SYMBOL_STR(vfs_fsync_range) },
	{ 0x70e500ac, __VMLINUX_SYMBOL_STR(generic_fillattr) },
	{ 0xf3fd781f, __VMLINUX_SYMBOL_STR(truncate_inode_pages) },
	{ 0xd4944c31, __VMLINUX_SYMBOL_STR(generic_shutdown_super) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "00AD6A064150E8587E2DA3B");
