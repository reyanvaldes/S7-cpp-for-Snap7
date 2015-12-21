//*************************************************************************************
// S7 Library allow to mapping the buffer into the different data types
// based on wrapper made for .Net. And defines other types such us PLCs, Area Sources
//
// It uses Snap7 Library 1.4,made by Davide Nardella, http://snap7.sourceforge.net/ made by
//
// Made by Reyan Valdes, reyanvaldes@yahoo.com
//
//*************************************************************************************

#ifndef S7_H
#define S7_H

#include "snap7.h"

using namespace std;

// Define different PLC Types
#define S7_PLC_300_400    0 // for PLC S7 300/400
#define S7_PLC_1200_1500  1 // for PLC S7 1200/1500
#define S7_PLC_LOGO_200   2 // for PLC S7 LOGO / 200
#define S7_PLC_SINAMICS   3 // for SINAMICS Driver

// Define different Area sources
#define S7_AREA_SOURCE_I  0    // Inputs
#define S7_AREA_SOURCE_Q  1    // Outputs
#define S7_AREA_SOURCE_M  2    // Memory Marks
#define S7_AREA_SOURCE_DB 3    // Data Blocks

// Define different S7 data types
#define S7_TYPE_BOOL    1
#define S7_TYPE_BYTE    2
#define S7_TYPE_SINT    3
#define S7_TYPE_WORD    4
#define S7_TYPE_UINT    5
#define S7_TYPE_INT     6
#define S7_TYPE_DWORD   7
#define S7_TYPE_UDINT   8
#define S7_TYPE_DINT    9
#define S7_TYPE_LWORD   10
#define S7_TYPE_ULINT   11
#define S7_TYPE_LINT    12
#define S7_TYPE_REAL    13
#define S7_TYPE_LREAL   14

#define S7_TYPE_STRING  15
#define S7_TYPE_ARRAYCHAR 16

string S7_GetTxtPLCType (short int plcType); // Get Text description of PLC Type

    int S7_GetDataTypeSize (int type); // Get data type size

uint16_t S7_GetWordFromTSAP ( string TSAP); // Get the word from Transport Service Access Point (TSAP) in hex format, e.g: 10.02 => 0x1002, used by Cli_SetConnectionParams

 string S7_GetTxtAreaSource (int areaSource); // Get Text message of Area Source

    int S7_BDCToByte (byte B); // Get BDC and convert to byte

   byte S7_ByteToBDC (int Value); // Convert Byte to BDC

   bool S7_GetBitAt ( byte Buffer[], int Pos, int Bit); // Get Bit position at buffer of bytes

   void S7_SetBitAt ( byte Buffer[], int Pos, int Bit, bool Value); // Set Bit position at buffer of bytes

uint8_t S7_GetByteAt(byte Buffer[], int Pos); // Get Byte (0..255) at buffer of bytes

   void S7_SetByteAt(byte Buffer[], int Pos, uint8_t Value ); // Set Byte (0..255) at buffer of bytes

  int8_t S7_GetSIntAt(byte Buffer[], int Pos); // Get SInt (-128..127) at buffer of bytes

   void S7_SetSIntAt(byte Buffer[], int Pos, int Value); // Set SInt (-128..127) at buffer of bytes

  uint16_t S7_GetUIntAt(byte Buffer[], int Pos);  // Get 16 bit unsigned value (S7 UInt) 0..65535

   void    S7_SetUIntAt(byte Buffer[], int Pos, uint16_t Value );  // Set 16 bit unsigned value (S7 UInt) 0..65535

   uint16_t S7_GetWordAt(byte Buffer[], int Pos);  // Get 16 bit unsigned value (S7 UInt) 0..65535

    void   S7_SetWordAt(byte Buffer[], int Pos, uint16_t Value );  // Set 16 bit unsigned value (S7 UInt) 0..65535

 int16_t   S7_GetIntAt(byte Buffer[], int Pos); // Get 16 bit signed value (S7 int) -32768..32767 at buffer of bytes

   void   S7_SetIntAt(byte Buffer[], int Pos, int16_t Value); // Set 16 bit signed value (S7 int) -32768..32767 at buffer of bytes

   uint32_t S7_GetUDIntAt(byte Buffer[], int Pos); //  Get 32 bit unsigned value (S7 UDInt) 0..4294967295

   void     S7_SetUDIntAt(byte Buffer[], int Pos, uint32_t Value); //  Set 32 bit unsigned value (S7 UDInt) 0..4294967295

   uint32_t S7_GetDWordAt(byte Buffer[], int Pos); //  Get 32 bit unsigned value (S7 UDInt) 0..4294967295

   void S7_SetDWordAt(byte Buffer[], int Pos, uint32_t Value); //  Set 32 bit unsigned value (S7 UDInt) 0..4294967295

   long S7_GetDIntAt(byte Buffer[], int Pos); // Get 32 bit signed value (S7 DInt) -2147483648..2147483647

   void S7_SetDIntAt(byte Buffer[], int Pos, long Value); // Set 32 bit signed value (S7 DInt) -2147483648..2147483647

   uint64_t S7_GetULIntAt(byte Buffer[], int Pos); // Set 64 bit unsigned value (S7 ULint) 0..18446744073709551615

    void S7_SetULIntAt(byte Buffer[], int Pos, uint64_t Value); // Set 64 bit unsigned value (S7 ULint) 0..18446744073709551615

    uint64_t S7_GetLWordAt(byte Buffer[], int Pos); // Set 64 bit unsigned value (S7 ULint) 0..18446744073709551615

     void S7_SetLWordAt(byte Buffer[], int Pos, uint64_t Value); // Set 64 bit unsigned value (S7 ULint) 0..18446744073709551615

int64_t S7_GetLIntAt(byte Buffer[], int Pos); // Get 64 bit signed value (S7 LInt) -9223372036854775808..9223372036854775807

   void S7_SetLIntAt(byte Buffer[], int Pos, int64_t Value); // Set 64 bit signed value (S7 LInt) -9223372036854775808..9223372036854775807

   float S7_GetRealAt(byte Buffer[], int Pos); // Get 32 bit floating point number (S7 Real) (Range of float)

   void S7_SetRealAt(byte Buffer[], int Pos, float Value); // Set 32 bit floating point number (S7 Real) (Range of float)

   double S7_GetLRealAt(byte Buffer[], int Pos); // Get 64 bit floating point number (S7 LReal) (Range of double)

   void S7_SetLRealAt(byte Buffer[], int Pos, double Value); // Set 64 bit floating point number (S7 LReal) (Range of double)

   string S7_GetStringAt(byte Buffer[], int Pos); // Get String (S7 String)

   void S7_SetStringAt(byte Buffer[], int Pos, int MaxLen, string Value); // Set String (S7 String)

   string S7_GetCharsAt(byte Buffer[], int Pos, int Size); //Get Array of char (S7 ARRAY OF CHARS)

   void S7_SetCharsAt(byte Buffer[], int BufferLen, int Pos, string Value); //Set Array of char (S7 ARRAY OF CHARS)

#endif // S7_H
