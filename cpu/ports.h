#ifndef PORTS_H
#define PORTS_H

#include <stdint.h>

__attribute__((unused)) unsigned char port_byte_in (uint16_t port);

__attribute__((unused)) void port_byte_out (uint16_t port, uint8_t data);

__attribute__((unused)) unsigned short port_word_in (uint16_t port);

__attribute__((unused)) void port_word_out (uint16_t port, uint16_t data);

#endif