#include <linux/fs.h>

int register_chrdev(unsigned/*major number*/, const char*/*device name*/, struct file_operations);