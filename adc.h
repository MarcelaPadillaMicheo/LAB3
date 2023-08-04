// File:   ADC.c
// Author: MARCELA PADILLA
// Created on 30 de Julio

#ifndef ADC_H
#define	ADC_H

#include <xc.h> // include processor files - each processor file is guarded.  
#include <stdint.h>
#include <proc/pic16f887.h>

void OSCILLATOR(uint8_t f);             //Oscillador

void ADC_INIT(uint8_t c);                   //canal inicial
unsigned char ADC_READ(void);                         //leer ADRESH del canal 


#endif	/* ADC_H */
