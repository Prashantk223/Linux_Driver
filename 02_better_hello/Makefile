obj-m += hello.o

all: 
	make -C /lib/modules/$(shell uname -r)/build M=$(PWD) modules

clean:
	make -c /lib/modules/$(shell uname -r)/build M=$(PWD) clean

#make -C /lib/modules/.../build = Go into the kernel’s build directory (where its Makefiles are).
#$(shell uname -r) = Inserts your current kernel version 
#/lib/modules/$(uname -r)/build = Is a symlink to your kernel’s source tree or headers.
#M=$(PWD) = Tells the kernel build system where your module source code lives (your current directory).
#modules = The target in the kernel’s Makefile that knows how to build loadable modules.