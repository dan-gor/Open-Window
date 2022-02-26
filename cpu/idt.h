#ifndef IDT_H
#define IDT_H

#include <stdint.h>

#define KERNEL_CS 0x08

typedef struct
{
    uint16_t low_offset; /* Lower 16 bits of handler function address */
    uint16_t sel; /* Kernel segment selector */
    uint8_t always0;
    uint8_t flags;
    uint16_t high_offset; /* Higher 16 bits of handler function address */
} __attribute__((packed)) idt_gate_t ;

typedef struct
{
    uint16_t limit;
    uint32_t base;
} __attribute__((packed)) idt_register_t;

#define IDT_ENTRIES 256
__attribute__((unused)) idt_gate_t idt[IDT_ENTRIES];
__attribute__((unused)) idt_register_t idt_reg;


/* Functions implemented in idt.c */
__attribute__((unused)) void set_idt_gate(int n, uint32_t handler);

__attribute__((unused)) void set_idt();

#endif
