/*
 * <кодировка символов>
 *   Cyrillic (UTF-8 with signature) - Codepage 65001
 * </кодировка символов>
 *
 * <сводка>
 *   CEcoCEPEngine1
 * </сводка>
 *
 * <описание>
 *   Данный заголовок описывает реализацию компонента CEcoCEPEngine1
 * </описание>
 *
 * <автор>
 *   Copyright (c) 2018 Vladimir Bashev. All rights reserved.
 * </автор>
 *
 */

#ifndef __C_ECOCEPENGINE1_H__
#define __C_ECOCEPENGINE1_H__

#include "IEcoCEPEngine1.h"
#include "IEcoSystem1.h"
#include "IdEcoMemoryManager1.h"

typedef struct CEcoCEPEngine1 {

    /* Таблица функций интерфейса IEcoCEPEngine1 */
    IEcoCEPEngine1VTbl* m_pVTblIEcoCEPEngine1;

    /* Счетчик ссылок */
    uint32_t m_cRef;

    /* Интерфейс для работы с памятью */
    IEcoMemoryAllocator1* m_pIMem;

    /* Системный интерфейс */
    IEcoSystem1* m_pISys;

    /* Данные экземпляра */
    char_t* m_Name;

} CEcoCEPEngine1, *CEcoCEPEngine1Ptr;

/* Инициализация экземпляра */
int16_t initCEcoCEPEngine1(/*in*/ struct IEcoCEPEngine1* me, /* in */ IEcoUnknown *pIUnkSystem);
/* Создание экземпляра */
int16_t createCEcoCEPEngine1(/* in */ IEcoUnknown* pIUnkSystem, /* in */ IEcoUnknown* pIUnkOuter, /* out */ IEcoCEPEngine1** ppIEcoCEPEngine1);
/* Удаление */
void deleteCEcoCEPEngine1(/* in */ IEcoCEPEngine1* pIEcoCEPEngine1);

#endif /* __C_ECOCEPENGINE1_H__ */
