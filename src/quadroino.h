#ifndef QUADROINO_H_
#define QUADROINO_H_

#if defined (__AVR_ATmega328P__) || defined (__AVR_ATmega328__)
# include "mcu/atm328p.h"
#else
# error device type not supported
#endif

#define F_CPU 16000000L

#endif
