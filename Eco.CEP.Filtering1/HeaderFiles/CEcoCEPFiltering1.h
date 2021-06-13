/*
 * <кодировка символов>
 *   Cyrillic (UTF-8 with signature) - Codepage 65001
 * </кодировка символов>
 *
 * <сводка>
 *   CEcoCEPFiltering1
 * </сводка>
 *
 * <описание>
 *   Данный заголовок описывает реализацию компонента CEcoCEPFiltering1
 * </описание>
 *
 * <автор>
 *   Copyright (c) 2018 Vladimir Bashev. All rights reserved.
 * </автор>
 *
 */

#ifndef __C_ECOCEPFILTERING1_H__
#define __C_ECOCEPFILTERING1_H__

#include "IEcoCEPFiltering1.h"
#include "IEcoSystem1.h"
#include "IdEcoMemoryManager1.h"

typedef struct CEcoCEPFiltering1 {

    /* Таблица функций интерфейса IEcoCEPFiltering1 */
    IEcoCEPFiltering1VTbl* m_pVTblIEcoCEPFiltering1;

    /* Счетчик ссылок */
    uint32_t m_cRef;

    /* Интерфейс для работы с памятью */
    IEcoMemoryAllocator1* m_pIMem;

    /* Системный интерфейс */
    IEcoSystem1* m_pISys;

    /* Данные экземпляра */
    char_t* m_Name;

} CEcoCEPFiltering1, *CEcoCEPFiltering1Ptr;

/* Инициализация экземпляра */
int16_t initCEcoCEPFiltering1(/*in*/ struct IEcoCEPFiltering1* me, /* in */ IEcoUnknown *pIUnkSystem);
/* Создание экземпляра */
int16_t createCEcoCEPFiltering1(/* in */ IEcoUnknown* pIUnkSystem, /* in */ IEcoUnknown* pIUnkOuter, /* out */ IEcoCEPFiltering1** ppIEcoCEPFiltering1);
/* Удаление */
void deleteCEcoCEPFiltering1(/* in */ IEcoCEPFiltering1* pIEcoCEPFiltering1);

#endif /* __C_ECOCEPFILTERING1_H__ */
