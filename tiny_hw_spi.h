#ifndef TINY_HW_SPI_H
#define TINY_HW_SPI_H

#include "thsconfig.h"

#ifndef TINY_HW_SPI_PORT
#error "You must define TINY_HW_SPI_PORT in thsconfig.h, see tiny_hw_spi.h"
#endif

#ifndef TINY_HW_SPI_USCK
#error "You must define TINY_HW_SPI_USCK in thsconfig.h, see tiny_hw_spi.h"
#endif

#ifndef TINY_HW_SPI_DO
#error "You must define TINY_HW_SPI_DO in thsconfig.h, see tiny_hw_spi.h"
#endif

#ifndef TINY_HW_SPI_DI
#error "You must define TINY_HW_SPI_DI in thsconfig.h, see tiny_hw_spi.h"
#endif

#define THS_CONCAT(a, b)  a ## b

#define THS_PORT(name)    THS_CONCAT(PORT, name)
#define THS_PIN(name)     THS_CONCAT(PIN, name)
#define THS_DDR(name)     THS_CONCAT(DDR, name)

#define SPI_PORT          THS_PORT(TINY_HW_SPI_PORT)
#define SPI_DDR_PORT      THS_DDR(TINY_HW_SPI_PORT)
#define USCK_DD_PIN       THS_PIN(TINY_HW_SPI_USCK)
#define DO_DD_PIN         THS_PIN(TINY_HW_SPI_DO)
#define DI_DD_PIN         THS_PIN(TINY_HW_SPI_DI)

void tiny_spi_begin();
uint8_t tiny_spi_transfer(uint8_t spiData);
void tiny_spi_transfern(uint8_t *buf, uint8_t n);

#endif
