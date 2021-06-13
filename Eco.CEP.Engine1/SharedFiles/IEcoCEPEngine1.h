/*
 * <кодировка символов>
 *   Cyrillic (UTF-8 with signature) - Codepage 65001
 * </кодировка символов>
 *
 * <сводка>
 *   IEcoCEPEngine1
 * </сводка>
 *
 * <описание>
 *   Данный заголовок описывает интерфейс IEcoCEPEngine1
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

#ifndef __I_ECO_CEP_ENGINE_1_H__
#define __I_ECO_CEP_ENGINE_1_H__

#include "IEcoBase1.h"

/* IEcoCEPEngine1 IID = {B0C75C55-0611-4E68-A136-70E6F805C0D7} */
#ifndef __IID_IEcoCEPEngine1
static const UGUID IID_IEcoCEPEngine1 = {0x01, 0x10, 0xB0, 0xC7, 0x5C, 0x55, 0x06, 0x11, 0x4E, 0x68, 0xA1, 0x36, 0x70, 0xE6, 0xF8, 0x05, 0xC0, 0xD7};
#endif /* __IID_IEcoCEPEngine1 */

typedef struct IEcoCEPEngine1VTbl {

    /* IEcoUnknown */
    int16_t (*QueryInterface)(/* in */ struct IEcoCEPEngine1* me, /* in */ const UGUID* riid, /* out */ void **ppv);
    uint32_t (*AddRef)(/* in */ struct IEcoCEPEngine1* me);
    uint32_t (*Release)(/* in */ struct IEcoCEPEngine1* me);

    /* IEcoCEPEngine1 */
    int16_t (*MyFunction)(/* in */ struct IEcoCEPEngine1* me, /* in */ char_t* Name, /* out */ char_t** CopyName);

} IEcoCEPEngine1VTbl, *IEcoCEPEngine1VTblPtr;

interface IEcoCEPEngine1 {
    struct IEcoCEPEngine1VTbl *pVTbl;
} IEcoCEPEngine1;


#endif /* __I_ECO_CEP_ENGINE_1_H__ */
