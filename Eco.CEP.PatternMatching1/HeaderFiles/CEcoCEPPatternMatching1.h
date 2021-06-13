/*
 * <кодировка символов>
 *   Cyrillic (UTF-8 with signature) - Codepage 65001
 * </кодировка символов>
 *
 * <сводка>
 *   CEcoCEPPatternMatching1
 * </сводка>
 *
 * <описание>
 *   Данный заголовок описывает реализацию компонента CEcoCEPPatternMatching1
 * </описание>
 *
 * <автор>
 *   Copyright (c) 2018 Vladimir Bashev. All rights reserved.
 * </автор>
 *
 */

#ifndef __C_ECOCEPPATTERNMATCHING1_H__
#define __C_ECOCEPPATTERNMATCHING1_H__

#include "IEcoCEPPatternMatching1.h"
#include "IEcoSystem1.h"
#include "IdEcoMemoryManager1.h"

typedef struct CEcoCEPPatternMatching1 {

    /* Таблица функций интерфейса IEcoCEPPatternMatching1 */
    IEcoCEPPatternMatching1VTbl* m_pVTblIEcoCEPPatternMatching1;

    /* Счетчик ссылок */
    uint32_t m_cRef;

    /* Интерфейс для работы с памятью */
    IEcoMemoryAllocator1* m_pIMem;

    /* Системный интерфейс */
    IEcoSystem1* m_pISys;

    /* Данные экземпляра */
    char_t* m_Name;

} CEcoCEPPatternMatching1, *CEcoCEPPatternMatching1Ptr;

/* Инициализация экземпляра */
int16_t initCEcoCEPPatternMatching1(/*in*/ struct IEcoCEPPatternMatching1* me, /* in */ IEcoUnknown *pIUnkSystem);
/* Создание экземпляра */
int16_t createCEcoCEPPatternMatching1(/* in */ IEcoUnknown* pIUnkSystem, /* in */ IEcoUnknown* pIUnkOuter, /* out */ IEcoCEPPatternMatching1** ppIEcoCEPPatternMatching1);
/* Удаление */
void deleteCEcoCEPPatternMatching1(/* in */ IEcoCEPPatternMatching1* pIEcoCEPPatternMatching1);

#endif /* __C_ECOCEPPATTERNMATCHING1_H__ */
