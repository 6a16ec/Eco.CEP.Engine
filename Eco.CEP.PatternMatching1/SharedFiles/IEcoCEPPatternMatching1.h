/*
 * <кодировка символов>
 *   Cyrillic (UTF-8 with signature) - Codepage 65001
 * </кодировка символов>
 *
 * <сводка>
 *   IEcoCEPPatternMatching1
 * </сводка>
 *
 * <описание>
 *   Данный заголовок описывает интерфейс IEcoCEPPatternMatching1
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

#ifndef __I_ECOCEPPATTERNMATCHING1_H__
#define __I_ECOCEPPATTERNMATCHING1_H__

#include "IEcoBase1.h"

/* IEcoCEPPatternMatching1 IID = {F79318D9-156E-4A66-BCC9-382F1B279E3C} */
#ifndef __IID_IEcoCEPPatternMatching1
static const UGUID IID_IEcoCEPPatternMatching1 = {0x01, 0x10, 0xF7, 0x93, 0x18, 0xD9, 0x15, 0x6E, 0x4A, 0x66, 0xBC, 0xC9, 0x38, 0x2F, 0x1B, 0x27, 0x9E, 0x3C};
#endif /* __IID_IEcoCEPPatternMatching1 */

typedef struct IEcoCEPPatternMatching1VTbl {

    /* IEcoUnknown */
    int16_t (*QueryInterface)(/* in */ struct IEcoCEPPatternMatching1* me, /* in */ const UGUID* riid, /* out */ void **ppv);
    uint32_t (*AddRef)(/* in */ struct IEcoCEPPatternMatching1* me);
    uint32_t (*Release)(/* in */ struct IEcoCEPPatternMatching1* me);

    /* IEcoCEPPatternMatching1 */
    int16_t (*MyFunction)(/* in */ struct IEcoCEPPatternMatching1* me, /* in */ char_t* Name, /* out */ char_t** CopyName);

} IEcoCEPPatternMatching1VTbl, *IEcoCEPPatternMatching1VTblPtr;

interface IEcoCEPPatternMatching1 {
    struct IEcoCEPPatternMatching1VTbl *pVTbl;
} IEcoCEPPatternMatching1;


#endif /* __I_ECOCEPPATTERNMATCHING1_H__ */
