---

## Linux Device Driver Development (Raspberry Pi)

This project focuses on **Linux kernel device driver development** for **Raspberry Pi**, covering core kernel subsystems, driver–user space interaction mechanisms, and hardware integration using **Device Tree**.

---

## Implemented Driver Modules

### GPIO and Interrupt Handling
- **03_gpioctrl**
  - GPIO configuration and control from kernel space
  - Direction, value control, and hardware interaction

- **11_gpio_irq**
  - GPIO-based interrupt handling
  - IRQ registration, ISR implementation, and interrupt-driven event handling

---

### Timers and Scheduling
- **09_hrtimer**
  - High-resolution timer (hrtimer) implementation
  - Periodic and one-shot timer callbacks in kernel space

---

### Kernel Threads and Concurrency
- **14_Kernel_Threads**
  - Creation and management of kernel threads
  - Synchronization and lifecycle control

- **17_waitqueue**
  - Implementation of wait queues
  - Blocking and wake-up mechanisms for event-driven drivers

---

### Kernel ↔ User Space Communication
- **13_ioctl**
  - IOCTL interface for custom command handling
  - Control and configuration from user space

- **15_Signal_KernelToUser**
  - Signal-based notification from kernel to user space
  - Asynchronous event signaling

- **16_Poll**
  - Poll/select support for non-blocking I/O
  - Integration with user-space event loops

---

### Virtual File Systems
- **18_procfs**
  - Exposing kernel data through `/proc`
  - Runtime driver diagnostics and status reporting

- **19_sysfs**
  - Sysfs attribute creation
  - Device configuration and monitoring via `/sys`

---

### Device Tree Integration
- **20_dt_probe**
  - Device Tree–based driver probing
  - Platform driver registration and hardware abstraction
  - Clean separation of hardware description and driver logic

---

## Key Concepts Demonstrated

- Linux character device drivers
- GPIO and interrupt management
- High-resolution timers
- Kernel threads and synchronization
- Wait queues and blocking I/O
- IOCTL, poll/select, and signals
- procfs and sysfs interfaces
- Device Tree–based hardware binding

---

## Target Platform

- **Hardware:** Raspberry Pi
- **Kernel:** Linux kernel (custom modules)
- **Language:** C
- **Build:** Out-of-tree kernel modules

---

## Summary

This project provides a comprehensive exploration of **Linux device driver development**, emphasizing real-world kernel programming patterns, safe kernel–user space interaction, and hardware abstraction using Device Tree.

It is intended for developers working on **Linux kernel**, **BSP**, or **embedded Linux platforms**.

---
