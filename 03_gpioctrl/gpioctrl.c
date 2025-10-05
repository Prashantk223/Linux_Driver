#include<linux/module.h>
#include<linux/init.h>
#include<linux/gpio/consumer.h>

static int my_init(void);
static void my_exit(void);

static struct gpio_desc *led, *button;

#define IO_LED 21
#define IO_BUTTON 20
#define IO_OFFSET 0
static int __init my_init(void)
{
    int status;
    led = gpio_to_desc(IO_LED + IO_OFFSET);
    if(!led)
        printk(KERN_INFO "LED GPIO 21 not found\n");
    else
        printk(KERN_INFO "LED GPIO 21 found\n");

    button = gpio_to_desc(IO_BUTTON + IO_OFFSET);
    if(!button)
        printk(KERN_INFO "Button GPIO 20 not found\n");
    else
        printk(KERN_INFO "Button GPIO 20 found\n");

    status = gpiod_direction_output(led, 0);
    if(status)
        printk(KERN_INFO "Unable to set GPIO 21 as output\n");
    else
        printk(KERN_INFO "GPIO 21 set as output\n");
    
    status = gpiod_direction_input(button);
    if(status)
        printk(KERN_INFO "Unable to set GPIO 20 as input\n");
    else
        printk(KERN_INFO "GPIO 20 set as input\n");

    gpiod_set_value(led, 1);

    printk(("gpioctrl - Button os %s pressed\n", gpiod_get_value(button) ? "" : "not"));
    return 0;
}
static void __exit my_exit(void)
{
    gpiod_set_value(led, 0);
    printk(KERN_INFO "Goodbye, Kernel!\n");
}

module_init(my_init);
module_exit(my_exit);


MODULE_LICENSE("GPL");
MODULE_AUTHOR("Prashant");
MODULE_DESCRIPTION("GPIO use in Kernel Module");


//cd /sys/class/gpio
//ls
//cat gpiochip0/label
//cat gpiochip0/base
//cat gpiochip0/ngpio
//echo 20 > export
//ls
//cd gpio20
//ls