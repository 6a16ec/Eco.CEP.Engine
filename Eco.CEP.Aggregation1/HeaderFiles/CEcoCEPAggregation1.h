/*
 * <кодировка символов>
 *   Cyrillic (UTF-8 with signature) - Codepage 65001
 * </кодировка символов>
 *
 * <сводка>
 *   CEcoCEPAggregation1
 * </сводка>
 *
 * <описание>
 *   Данный заголовок описывает реализацию компонента CEcoCEPAggregation1
 * </описание>
 *
 * <автор>
 *   Copyright (c) 2018 Vladimir Bashev. All rights reserved.
 * </автор>
 *
 */

#ifndef __C_ECOCEPAGGREGATION1_H__
#define __C_ECOCEPAGGREGATION1_H__

#include "IEcoCEPAggregation1.h"
#include "IEcoSystem1.h"
#include "IdEcoMemoryManager1.h"

typedef struct CEcoCEPAggregation1 {

    /* Таблица функций интерфейса IEcoCEPAggregation1 */
    IEcoCEPAggregation1VTbl* m_pVTblIEcoCEPAggregation1;
	CEcoCEPAggregation1* m_aggr;

    /* Счетчик ссылок */
    uint32_t m_cRef;

    /* Интерфейс для работы с памятью */
    IEcoMemoryAllocator1* m_pIMem;

    /* Системный интерфейс */
    IEcoSystem1* m_pISys;

    /* Данные экземпляра */
    int16_t* data_copy;

} CEcoCEPAggregation1, *CEcoCEPAggregation1Ptr;

/* Инициализация экземпляра */
int16_t initCEcoCEPAggregation1(/*in*/ struct IEcoCEPAggregation1* me, /* in */ IEcoUnknown *pIUnkSystem);
/* Создание экземпляра */
int16_t createCEcoCEPAggregation1(/* in */ IEcoUnknown* pIUnkSystem, /* in */ IEcoUnknown* pIUnkOuter, /* out */ IEcoCEPAggregation1** ppIEcoCEPAggregation1);
/* Удаление */
void deleteCEcoCEPAggregation1(/* in */ IEcoCEPAggregation1* pIEcoCEPAggregation1);

#endif /* __C_ECOCEPAGGREGATION1_H__ */
