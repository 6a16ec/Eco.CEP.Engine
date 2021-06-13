/*
 * <кодировка символов>
 *   Cyrillic (UTF-8 with signature) - Codepage 65001
 * </кодировка символов>
 *
 * <сводка>
 *   IEcoCEPEngine1Input
 * </сводка>
 *
 * <описание>
 *   Данный заголовок описывает интерфейс IEcoCEPEngine1Input
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

#ifndef __I_ECO_CEP_ENGINE_1_INPUT_H__
#define __I_ECO_CEP_ENGINE_1_INPUT_H__

#include "IEcoBase1.h"

/* IEcoCEPEngine1Input IID = {81964D10-014F-49CA-BEF6-9A01D7AC1E35} */
#ifndef __IID_IEcoCEPEngine1Input
static const UGUID IID_IEcoCEPEngine1Input = {0x01, 0x10, 0x81, 0x96, 0x4D, 0x10, 0x01, 0x4F, 0x49, 0xCA, 0xBE, 0xF6, 0x9A, 0x01, 0xD7, 0xAC, 0x1E, 0x35};
#endif /* __IID_IEcoCEPEngine1Input */

typedef struct IEcoCEPEngine1InputVTbl {

    /* IEcoUnknown */
    int16_t (*QueryInterface)(/* in */ struct IEcoCEPEngine1Input* me, /* in */ const UGUID* riid, /* out */ void **ppv);
    uint32_t (*AddRef)(/* in */ struct IEcoCEPEngine1Input* me);
    uint32_t (*Release)(/* in */ struct IEcoCEPEngine1Input* me);

    /* IEcoCEPEngine1Input */
    int16_t (*MyFunction)(/* in */ struct IEcoCEPEngine1Input* me, /* in */ char_t* Name, /* out */ char_t** CopyName);

} IEcoCEPEngine1InputVTbl, *IEcoCEPEngine1InputVTblPtr;

interface IEcoCEPEngine1Input {
    struct IEcoCEPEngine1InputVTbl *pVTbl;
} IEcoCEPEngine1Input;


#endif /* __I_ECO_CEP_ENGINE_1_INPUT_H__ */
