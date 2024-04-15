#ifndef LedControl_h
#define LedControl_h

#include <stdint.h>  // For standard integer types
#include <avr/pgmspace.h>

// Define constants for control pins
#define SPI_MOSI_PIN  11
#define SPI_CLK_PIN   13
#define SPI_CS_PIN    10

// Structure to represent an LED control instance
typedef struct {
    uint8_t spidata[16];     // Data array for shifting data to devices
    uint8_t status[64];      // Array to keep track of LED status for all devices
    int maxDevices;          // Maximum number of devices that can be controlled
} LedControl;

// Function prototypes
void ledControlInit(LedControl *lc, int numDevices);
void shutdown(LedControl *lc, int addr, int status);
void setScanLimit(LedControl *lc, int addr, int limit);
void setIntensity(LedControl *lc, int addr, int intensity);
void clearDisplay(LedControl *lc, int addr);
void setLed(LedControl *lc, int addr, int row, int col, int state);
void setRow(LedControl *lc, int addr, int row, uint8_t value);
void setColumn(LedControl *lc, int addr, int col, uint8_t value);
void setDigit(LedControl *lc, int addr, int digit, uint8_t value, int dp);
void setChar(LedControl *lc, int addr, int digit, char value, int dp);

#endif  // LedControl_h
#endif	//LedControl.h
