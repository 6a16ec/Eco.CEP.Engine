/*
 * <кодировка символов>
 *   Cyrillic (UTF-8 with signature) - Codepage 65001
 * </кодировка символов>
 *
 * <сводка>
 *   IEcoCEPFiltering1
 * </сводка>
 *
 * <описание>
 *   Данный заголовок описывает интерфейс IEcoCEPFiltering1
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

#ifndef __I_ECOCEPFILTERING1_H__
#define __I_ECOCEPFILTERING1_H__

#include "IEcoBase1.h"

/* IEcoCEPFiltering1 IID = {E5D3D2E0-9AE1-42EE-ADAE-1A09B63E4393} */
#ifndef __IID_IEcoCEPFiltering1
static const UGUID IID_IEcoCEPFiltering1 = {0x01, 0x10, 0xE5, 0xD3, 0xD2, 0xE0, 0x9A, 0xE1, 0x42, 0xEE, 0xAD, 0xAE, 0x1A, 0x09, 0xB6, 0x3E, 0x43, 0x93};
#endif /* __IID_IEcoCEPFiltering1 */

typedef struct IEcoCEPFiltering1VTbl {

    /* IEcoUnknown */
    int16_t (*QueryInterface)(/* in */ struct IEcoCEPFiltering1* me, /* in */ const UGUID* riid, /* out */ void **ppv);
    uint32_t (*AddRef)(/* in */ struct IEcoCEPFiltering1* me);
    uint32_t (*Release)(/* in */ struct IEcoCEPFiltering1* me);

    /* IEcoCEPFiltering1 */
    int16_t (*MyFunction)(/* in */ struct IEcoCEPFiltering1* me, /* in */ char_t* Name, /* out */ char_t** CopyName);
	int16_t (*range)(/* in */ struct IEcoCEPFiltering1* me, /* in */ int16_t *data, int32_t len, int16_t min, int32_t max, /* out */ int16_t *output, int16_t *out_len);
	int16_t (*less)(/* in */ struct IEcoCEPFiltering1* me, /* in */ int16_t *data, int32_t len, int32_t max, /* out */ int16_t *output, int16_t *out_len);
	int16_t (*more)(/* in */ struct IEcoCEPFiltering1* me, /* in */ int16_t *data, int32_t len, int16_t min,/* out */ int16_t *output, int16_t *out_len);

} IEcoCEPFiltering1VTbl, *IEcoCEPFiltering1VTblPtr;

interface IEcoCEPFiltering1 {
    struct IEcoCEPFiltering1VTbl *pVTbl;
} IEcoCEPFiltering1;


#endif /* __I_ECOCEPFILTERING1_H__ */
