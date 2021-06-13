/*
 * <кодировка символов>
 *   Cyrillic (UTF-8 with signature) - Codepage 65001
 * </кодировка символов>
 *
 * <сводка>
 *   IEcoCEPEngine1Output
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

#ifndef __I_ECO_CEP_ENGINE_1_OUTPUT_H__
#define __I_ECO_CEP_ENGINE_1_OUTPUT_H__

#include "IEcoBase1.h"

/* IEcoCEPEngine1Output IID = {A5D1C23B-FD21-41FA-9EF3-642781DAA3E2} */
#ifndef __IID_IEcoCEPEngine1Output
static const UGUID IID_IEcoCEPEngine1Output = {0x01, 0x10, 0xA5, 0xD1, 0xC2, 0x3B, 0xFD, 0x21, 0x41, 0xFA, 0x9E, 0xF3, 0x64, 0x27, 0x81, 0xDA, 0xA3, 0xE2};
#endif /* __IID_IEcoCEPEngine1Output */

typedef struct IEcoCEPEngine1OutputVTbl {

    /* IEcoUnknown */
    int16_t (*QueryInterface)(/* in */ struct IEcoCEPEngine1Output* me, /* in */ const UGUID* riid, /* out */ void **ppv);
    uint32_t (*AddRef)(/* in */ struct IEcoCEPEngine1Output* me);
    uint32_t (*Release)(/* in */ struct IEcoCEPEngine1Output* me);

    /* IEcoCEPEngine1Output */
    int16_t (*MyFunction)(/* in */ struct IEcoCEPEngine1Output* me, /* in */ char_t* Name, /* out */ char_t** CopyName);

} IEcoCEPEngine1OutputVTbl, *IEcoCEPEngine1OutputVTblPtr;

interface IEcoCEPEngine1Output {
    struct IEcoCEPEngine1OutputVTbl *pVTbl;
} IEcoCEPEngine1Output;


#endif /* __I_ECO_CEP_ENGINE_1_OUTPUT_H__ */
