/*
 * <кодировка символов>
 *   Cyrillic (UTF-8 with signature) - Codepage 65001
 * </кодировка символов>
 *
 * <сводка>
 *   IEcoCEPAggregation1
 * </сводка>
 *
 * <описание>
 *   Данный заголовок описывает интерфейс IEcoCEPAggregation1
 * </описание>
 *
 * <ссылка>
 *
 * </ссылка>
 *
 * <автор>
 *   Copyright (c) 2018 Vladimir Bashev. All rights reserved.
 * </автор>
 *
 */

#ifndef __I_ECOCEPAGGREGATION1_H__
#define __I_ECOCEPAGGREGATION1_H__

#include "IEcoBase1.h"

/* IEcoCEPAggregation1 IID = {B6565DDC-2590-4AE7-A1C5-8802079EBE23} */
#ifndef __IID_IEcoCEPAggregation1
static const UGUID IID_IEcoCEPAggregation1 = {0x01, 0x10, 0xB6, 0x56, 0x5D, 0xDC, 0x25, 0x90, 0x4A, 0xE7, 0xA1, 0xC5, 0x88, 0x02, 0x07, 0x9E, 0xBE, 0x23};
#endif /* __IID_IEcoCEPAggregation1 */

typedef struct IEcoCEPAggregation1VTbl {

    /* IEcoUnknown */
    int16_t (*QueryInterface)(/* in */ struct IEcoCEPAggregation1* me, /* in */ const UGUID* riid, /* out */ void **ppv);
    uint32_t (*AddRef)(/* in */ struct IEcoCEPAggregation1* me);
    uint32_t (*Release)(/* in */ struct IEcoCEPAggregation1* me);

    /* IEcoCEPAggregation1 */
    int16_t (*MyFunction)(/* in */ struct IEcoCEPAggregation1* me, /* in */ char_t* Name, /* out */ char_t** CopyName);
	int16_t (*sum)(/* in */ struct IEcoCEPAggregation1* me, /* in */ int16_t* data, int16_t len, /* out */ int16_t* result);
	int16_t (*average)(/* in */ struct IEcoCEPAggregation1* me, /* in */ int16_t* data, int16_t len, /* out */ double_t* result);
	int16_t (*sqrt)(/* in */ struct IEcoCEPAggregation1* me, /* in */ double_t* number,  /* out */ double_t* result); 
	int16_t (*median)(/* in */ struct IEcoCEPAggregation1* me, /* in */ int16_t* data, int16_t len, /* out */ double_t* result); 
	int16_t (*minimum)(/* in */ struct IEcoCEPAggregation1* me, /* in */ int16_t* data, int16_t len, /* out */ double_t* result); 
	int16_t (*maximum)(/* in */ struct IEcoCEPAggregation1* me, /* in */ int16_t* data, int16_t len, /* out */ double_t* result); 
	int16_t (*variance)(/* in */ struct IEcoCEPAggregation1* me, /* in */ int16_t* data, int16_t len, /* out */ double_t* result);
	int16_t (*deviation)(/* in */ struct IEcoCEPAggregation1* me, /* in */ int16_t* data, int16_t len, /* out */ double_t* result);
	int16_t (*set)(/* in */ struct IEcoCEPAggregation1* me, /* in */ int16_t* data, int16_t len, /* out */ double_t* result);

} IEcoCEPAggregation1VTbl, *IEcoCEPAggregation1VTblPtr;

interface IEcoCEPAggregation1 {
    struct IEcoCEPAggregation1VTbl *pVTbl;
} IEcoCEPAggregation1;


#endif /* __I_ECOCEPAGGREGATION1_H__ */
