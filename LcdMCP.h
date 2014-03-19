/*
 * LcdMCP.h - Library to convert a 20x4 LCD into a MCP/Radio display for simulators.
 * Created by Sebastian Vidal. 2014 (pandragoq@gmail.com).
 * Released into de public domain with a GPLv2 license.
*/
#ifndef LcdMCP_h
#define LcdMCP_h

#include <Wire.h>
#include <LiquidCrystal_I2C.h>

class LcdMCP
{
  public:
    LcdMCP(uint8_t lcd_Addr, uint8_t lcd_cols, uint8_t lcd_rows);
    void begin();


  private:
}

