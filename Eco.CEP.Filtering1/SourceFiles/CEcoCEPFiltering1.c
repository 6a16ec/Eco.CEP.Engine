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
 *   Данный исходный код описывает реализацию интерфейсов CEcoCEPFiltering1
 * </описание>
 *
 * <автор>
 *   Copyright (c) 2018 Vladimir Bashev. All rights reserved.
 * </автор>
 *
 */

#include "IEcoSystem1.h"
#include "IEcoInterfaceBus1.h"
#include "CEcoCEPFiltering1.h"

/*
 *
 * <сводка>
 *   Функция QueryInterface
 * </сводка>
 *
 * <описание>
 *   Функция QueryInterface для интерфейса IEcoCEPFiltering1
 * </описание>
 *
 */
int16_t CEcoCEPFiltering1_QueryInterface(/* in */ struct IEcoCEPFiltering1* me, /* in */ const UGUID* riid, /* out */ void** ppv) {
    CEcoCEPFiltering1* pCMe = (CEcoCEPFiltering1*)me;
    int16_t result = -1;

    /* Проверка указателей */
    if (me == 0 || ppv == 0) {
        return result;
    }

    /* Проверка и получение запрошенного интерфейса */
    if ( IsEqualUGUID(riid, &IID_IEcoCEPFiltering1) ) {
        *ppv = &pCMe->m_pVTblIEcoCEPFiltering1;
        pCMe->m_pVTblIEcoCEPFiltering1->AddRef((IEcoCEPFiltering1*)pCMe);
    }
    else if ( IsEqualUGUID(riid, &IID_IEcoUnknown) ) {
        *ppv = &pCMe->m_pVTblIEcoCEPFiltering1;
        pCMe->m_pVTblIEcoCEPFiltering1->AddRef((IEcoCEPFiltering1*)pCMe);
    }
    else {
        *ppv = 0;
        return -1;
    }
    return 0;
}

/*
 *
 * <сводка>
 *   Функция AddRef
 * </сводка>
 *
 * <описание>
 *   Функция AddRef для интерфейса IEcoCEPFiltering1
 * </описание>
 *
 */
uint32_t CEcoCEPFiltering1_AddRef(/* in */ struct IEcoCEPFiltering1* me) {
    CEcoCEPFiltering1* pCMe = (CEcoCEPFiltering1*)me;

    /* Проверка указателя */
    if (me == 0 ) {
        return -1;
    }

    return ++pCMe->m_cRef;
}

/*
 *
 * <сводка>
 *   Функция Release
 * </сводка>
 *
 * <описание>
 *   Функция Release для интерфейса IEcoCEPFiltering1
 * </описание>
 *
 */
uint32_t CEcoCEPFiltering1_Release(/* in */ struct IEcoCEPFiltering1* me) {
    CEcoCEPFiltering1* pCMe = (CEcoCEPFiltering1*)me;

    /* Проверка указателя */
    if (me == 0 ) {
        return -1;
    }

    /* Уменьшение счетчика ссылок на компонент */
    --pCMe->m_cRef;

    /* В случае обнуления счетчика, освобождение данных экземпляра */
    if ( pCMe->m_cRef == 0 ) {
        deleteCEcoCEPFiltering1((IEcoCEPFiltering1*)pCMe);
        return 0;
    }
    return pCMe->m_cRef;
}

/*
 *
 * <сводка>
 *   Функция MyFunction
 * </сводка>
 *
 * <описание>
 *   Функция
 * </описание>
 *
 */
int16_t CEcoCEPFiltering1_MyFunction(/* in */ struct IEcoCEPFiltering1* me, /* in */ char_t* Name, /* out */ char_t** copyName) {
    CEcoCEPFiltering1* pCMe = (CEcoCEPFiltering1*)me;
    int16_t index = 0;

    /* Проверка указателей */
    if (me == 0 || Name == 0 || copyName == 0) {
        return -1;
    }

    /* Копирование строки */
    while(Name[index] != 0) {
        index++;
    }
    pCMe->m_Name = (char_t*)pCMe->m_pIMem->pVTbl->Alloc(pCMe->m_pIMem, index + 1);
    index = 0;
    while(Name[index] != 0) {
        pCMe->m_Name[index] = Name[index];
        index++;
    }
    *copyName = pCMe->m_Name;

    return 0;
}



/*
 *
 * <сводка>
 *   Функция Init
 * </сводка>
 *
 * <описание>
 *   Функция инициализации экземпляра
 * </описание>
 *
 */
int16_t initCEcoCEPFiltering1(/*in*/ struct IEcoCEPFiltering1* me, /* in */ struct IEcoUnknown *pIUnkSystem) {
    CEcoCEPFiltering1* pCMe = (CEcoCEPFiltering1*)me;
    int16_t result = -1;

    /* Проверка указателей */
    if (me == 0 ) {
        return result;
    }

    /* Сохранение указателя на системный интерфейс */
    pCMe->m_pISys = (IEcoSystem1*)pIUnkSystem;


    return result;
}

/* Create Virtual Table */
IEcoCEPFiltering1VTbl g_xE5D3D2E09AE142EEADAE1A09B63E4393VTbl = {
    CEcoCEPFiltering1_QueryInterface,
    CEcoCEPFiltering1_AddRef,
    CEcoCEPFiltering1_Release,
    CEcoCEPFiltering1_MyFunction
};


/*
 *
 * <сводка>
 *   Функция Create
 * </сводка>
 *
 * <описание>
 *   Функция создания экземпляра
 * </описание>
 *
 */
int16_t createCEcoCEPFiltering1(/* in */ IEcoUnknown* pIUnkSystem, /* in */ IEcoUnknown* pIUnkOuter, /* out */ IEcoCEPFiltering1** ppIEcoCEPFiltering1) {
    int16_t result = -1;
    IEcoSystem1* pISys = 0;
    IEcoInterfaceBus1* pIBus = 0;
    IEcoMemoryAllocator1* pIMem = 0;
    CEcoCEPFiltering1* pCMe = 0;

    /* Проверка указателей */
    if (ppIEcoCEPFiltering1 == 0 || pIUnkSystem == 0) {
        return result;
    }

    /* Получение системного интерфейса приложения */
    result = pIUnkSystem->pVTbl->QueryInterface(pIUnkSystem, &GID_IEcoSystem1, (void **)&pISys);

    /* Проверка */
    if (result != 0 && pISys == 0) {
        return result;
    }

    /* Получение интерфейса для работы с интерфейсной шиной */
    result = pISys->pVTbl->QueryInterface(pISys, &IID_IEcoInterfaceBus1, (void **)&pIBus);

    /* Получение интерфейса распределителя памяти */
    pIBus->pVTbl->QueryComponent(pIBus, &CID_EcoMemoryManager1, 0, &IID_IEcoMemoryAllocator1, (void**) &pIMem);

    /* Проверка */
    if (result != 0 && pIMem == 0) {
        /* Освобождение системного интерфейса в случае ошибки */
        pISys->pVTbl->Release(pISys);
        return result;
    }

    /* Выделение памяти для данных экземпляра */
    pCMe = (CEcoCEPFiltering1*)pIMem->pVTbl->Alloc(pIMem, sizeof(CEcoCEPFiltering1));

    /* Сохранение указателя на системный интерфейс */
    pCMe->m_pISys = pISys;

    /* Сохранение указателя на интерфейс для работы с памятью */
    pCMe->m_pIMem = pIMem;

    /* Установка счетчика ссылок на компонент */
    pCMe->m_cRef = 1;

    /* Создание таблицы функций интерфейса IEcoCEPFiltering1 */
    pCMe->m_pVTblIEcoCEPFiltering1 = &g_xE5D3D2E09AE142EEADAE1A09B63E4393VTbl;

    /* Инициализация данных */
    pCMe->m_Name = 0;

    /* Возврат указателя на интерфейс */
    *ppIEcoCEPFiltering1 = (IEcoCEPFiltering1*)pCMe;

    /* Освобождение */
    pIBus->pVTbl->Release(pIBus);

    return 0;
}

/*
 *
 * <сводка>
 *   Функция Delete
 * </сводка>
 *
 * <описание>
 *   Функция освобождения экземпляра
 * </описание>
 *
 */
void deleteCEcoCEPFiltering1(/* in */ IEcoCEPFiltering1* pIEcoCEPFiltering1) {
    CEcoCEPFiltering1* pCMe = (CEcoCEPFiltering1*)pIEcoCEPFiltering1;
    IEcoMemoryAllocator1* pIMem = 0;

    if (pIEcoCEPFiltering1 != 0 ) {
        pIMem = pCMe->m_pIMem;
        /* Освобождение */
        if ( pCMe->m_Name != 0 ) {
            pIMem->pVTbl->Free(pIMem, pCMe->m_Name);
        }
        if ( pCMe->m_pISys != 0 ) {
            pCMe->m_pISys->pVTbl->Release(pCMe->m_pISys);
        }
        pIMem->pVTbl->Free(pIMem, pCMe);
        pIMem->pVTbl->Release(pIMem);
    }
}
