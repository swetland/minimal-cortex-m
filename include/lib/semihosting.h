
#pragma once

#include <stdint.h>

uint32_t sh_call(uint32_t no, void* arg);

static inline void sys_puts(const char* str) {
	sh_call(0x04, (void*) str);
}

static inline void sys_exit(void) {
	sh_call(0x18, (void*) 0x20026);
}


