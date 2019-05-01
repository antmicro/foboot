#ifndef _FOBOOST_SPI_H
#define _FOBOOST_SPI_H

#include <stdint.h>

#define SPI_ERASE_SECTOR_SIZE 4096
#define SPI_PROGRAM_PAGE_SIZE 256

void spiBegin(void);
void spiEnd(void);
void spiPause(void);
void spiCommand(uint8_t cmd);
uint8_t spiCommandRx(void);
uint8_t spiReadStatus(void);
void spiBeginErase4(uint32_t erase_addr);
void spiBeginErase32(uint32_t erase_addr);
void spiBeginErase64(uint32_t erase_addr);
int spiIsBusy(void);
void spiBeginWrite(uint32_t addr, const void *v_data, unsigned int count);

#endif /* _FOBOOST_SPI_H */