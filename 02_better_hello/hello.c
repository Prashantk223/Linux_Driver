#include<linux/module.h>
#include<linux/init.h>

static int my_init(void);
static void my_exit(void);

static int __init my_init(void)
{
    printk(KERN_INFO "Hello, Kernel!\n");
    return 0;
}
static void __exit my_exit(void)
{
    printk(KERN_INFO "Goodbye, Kernel!\n");
}

module_init(my_init);
module_exit(my_exit);


MODULE_LICENSE("GPL");
MODULE_AUTHOR("Prashant");
MODULE_DESCRIPTION("Better Kernel Module");

//sudo modprobe hello - load with all dependencies. Kernel module must be in /lib/modules/$(uname -r)/kernel/...
//sudo dmesg -W - new incoming messages
//sudo dmesg -w - show all old and wait for ne onw
//sudo dmesg | tail -20 #only 20 lines
//lsmod lists all the installed kernel modules
//lsmod | grep hello
//How to readout the metadat a of the module
//modinfo hello.ko
//sudo insmod hello.ko
//sudo rmmod hello
//lsmod | grep hello
//cat /proc/modules | grep hello
//sudo dmesg -W - show latest kernel messages
//gcc -c -o hello.o hello.c
//objdump -h hello.o
//objdump -S hello.o
//objdump -t hello.o
//readelf -h hello.o
//readelf -S hello.o
//readelf -s hello.o
//readelf -r hello.o
//nm hello.o
//strings hello.o | less
//strip --strip-unneeded hello.o
//objcopy --remove-section=.note.gnu.build-id hello.o hello_stripped.o
//size hello.o
//size hello_stripped.o
//diff hello.o hello_stripped.o
//gcc -Wall -Wextra -Werror -O2 -c -o hello.o hello.c
//gcc -Wall -Wextra -Werror -O2 -c -o hello_stripped.o hello.c
//diff hello.o hello_stripped.o
//sudo modinfo hello_stripped.ko
//sudo insmod hello_stripped.ko
//sudo rmmod hello_stripped
//lsmod | grep hello
//cat /proc/modules | grep hello
//sudo dmesg -W - show latest kernel messages