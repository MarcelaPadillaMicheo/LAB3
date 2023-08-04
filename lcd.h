// File:   LCD.h
// Author: MARCELA PADILLA
// Created on 30 de Julio

// This is a guard condition so that contents of this file are not included
// more than once.  
#ifndef LCD_H
#define	LCD_H

#include <xc.h> // include processor files - each processor file is guarded.  
#include <stdint.h>
#include <proc/pic16f887.h>


void LCD_PORT(char a);
void LCD_COM(char a);
void LCD_CLEAR(void);
void LCD_XY(char x, char y);
void LCD_INIT(void);
void LCD_CHAR(char a);
void LCD_STRING(char *a);

uint8_t DECENA(unsigned char c);        //Funciones para ir separando
uint8_t UNIDAD(unsigned char c);        //cada valor
uint8_t CENTENA(unsigned char c);

#define PORT PORTB
#define RS_PIN RD6
#define E_PIN RD7

#endif	/* LCD_H */
