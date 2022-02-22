#ifndef ISR_H
#define ISR_H

#include <stdint.h>

/* ISRs reserved for CPU exceptions */
__attribute__((unused)) extern void isr0();

__attribute__((unused)) extern void isr1();

__attribute__((unused)) extern void isr2();

__attribute__((unused)) extern void isr3();

__attribute__((unused)) extern void isr4();

__attribute__((unused)) extern void isr5();

__attribute__((unused)) extern void isr6();

__attribute__((unused)) extern void isr7();

__attribute__((unused)) extern void isr8();

__attribute__((unused)) extern void isr9();

__attribute__((unused)) extern void isr10();

__attribute__((unused)) extern void isr11();

__attribute__((unused)) extern void isr12();

__attribute__((unused)) extern void isr13();

__attribute__((unused)) extern void isr14();

__attribute__((unused)) extern void isr15();

__attribute__((unused)) extern void isr16();

__attribute__((unused)) extern void isr17();

__attribute__((unused)) extern void isr18();

__attribute__((unused)) extern void isr19();

__attribute__((unused)) extern void isr20();

__attribute__((unused)) extern void isr21();

__attribute__((unused)) extern void isr22();

__attribute__((unused)) extern void isr23();

__attribute__((unused)) extern void isr24();

__attribute__((unused)) extern void isr25();

__attribute__((unused)) extern void isr26();

__attribute__((unused)) extern void isr27();

__attribute__((unused)) extern void isr28();

__attribute__((unused)) extern void isr29();

__attribute__((unused)) extern void isr30();

__attribute__((unused)) extern void isr31();

/* IRQ definitions */
__attribute__((unused)) extern void irq0();

__attribute__((unused)) extern void irq1();

__attribute__((unused)) extern void irq2();

__attribute__((unused)) extern void irq3();

__attribute__((unused)) extern void irq4();

__attribute__((unused)) extern void irq5();

__attribute__((unused)) extern void irq6();

__attribute__((unused)) extern void irq7();

__attribute__((unused)) extern void irq8();

__attribute__((unused)) extern void irq9();

__attribute__((unused)) extern void irq10();

__attribute__((unused)) extern void irq11();

__attribute__((unused)) extern void irq12();

__attribute__((unused)) extern void irq13();

__attribute__((unused)) extern void irq14();

__attribute__((unused)) extern void irq15();

#define IRQ0 32
#define IRQ1 33
#define IRQ2 34
#define IRQ3 35
#define IRQ4 36
#define IRQ5 37
#define IRQ6 38
#define IRQ7 39
#define IRQ8 40
#define IRQ9 41
#define IRQ10 42
#define IRQ11 43
#define IRQ12 44
#define IRQ13 45
#define IRQ14 46
#define IRQ15 47

typedef struct
{
    uint32_t ds;
    uint32_t edi, esi, ebp, useless, ebx, edx, ecx, eax;
    uint32_t int_no, err_code;
    uint32_t eip, cs, eflags, esp, ss;
} registers_t;

__attribute__((unused)) void isr_install();

__attribute__((unused)) void isr_handler(registers_t *r);

__attribute__((unused)) void irq_install();

typedef void (*isr_t)(registers_t*);

__attribute__((unused)) void register_interrupt_handler(uint8_t n, isr_t handler);

#endif