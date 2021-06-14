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
 *   Данный исходный код описывает реализацию интерфейсов CEcoCEPAggregation1
 * </описание>
 *
 * <автор>
 *   Copyright (c) 2018 Vladimir Bashev. All rights reserved.
 * </автор>
 *
 */

#include "IEcoSystem1.h"
#include "IEcoInterfaceBus1.h"
#include "CEcoCEPAggregation1.h"

/*
 *
 * <сводка>
 *   Функция QueryInterface
 * </сводка>
 *
 * <описание>
 *   Функция QueryInterface для интерфейса IEcoCEPAggregation1
 * </описание>
 *
 */
int16_t CEcoCEPAggregation1_QueryInterface(/* in */ struct IEcoCEPAggregation1* me, /* in */ const UGUID* riid, /* out */ void** ppv) {
    CEcoCEPAggregation1* pCMe = (CEcoCEPAggregation1*)me;
    int16_t result = -1;

    /* Проверка указателей */
    if (me == 0 || ppv == 0) {
        return result;
    }

    /* Проверка и получение запрошенного интерфейса */
    if ( IsEqualUGUID(riid, &IID_IEcoCEPAggregation1) ) {
        *ppv = &pCMe->m_pVTblIEcoCEPAggregation1;
        pCMe->m_pVTblIEcoCEPAggregation1->AddRef((IEcoCEPAggregation1*)pCMe);
    }
    else if ( IsEqualUGUID(riid, &IID_IEcoUnknown) ) {
        *ppv = &pCMe->m_pVTblIEcoCEPAggregation1;
        pCMe->m_pVTblIEcoCEPAggregation1->AddRef((IEcoCEPAggregation1*)pCMe);
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
 *   Функция AddRef для интерфейса IEcoCEPAggregation1
 * </описание>
 *
 */
uint32_t CEcoCEPAggregation1_AddRef(/* in */ struct IEcoCEPAggregation1* me) {
    CEcoCEPAggregation1* pCMe = (CEcoCEPAggregation1*)me;

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
 *   Функция Release для интерфейса IEcoCEPAggregation1
 * </описание>
 *
 */
uint32_t CEcoCEPAggregation1_Release(/* in */ struct IEcoCEPAggregation1* me) {
    CEcoCEPAggregation1* pCMe = (CEcoCEPAggregation1*)me;

    /* Проверка указателя */
    if (me == 0 ) {
        return -1;
    }

    /* Уменьшение счетчика ссылок на компонент */
    --pCMe->m_cRef;

    /* В случае обнуления счетчика, освобождение данных экземпляра */
    if ( pCMe->m_cRef == 0 ) {
        deleteCEcoCEPAggregation1((IEcoCEPAggregation1*)pCMe);
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
int16_t CEcoCEPAggregation1_MyFunction(/* in */ struct IEcoCEPAggregation1* me, /* in */ char_t* Name, /* out */ char_t** copyName) {
    CEcoCEPAggregation1* pCMe = (CEcoCEPAggregation1*)me;
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
int16_t initCEcoCEPAggregation1(/*in*/ struct IEcoCEPAggregation1* me, /* in */ struct IEcoUnknown *pIUnkSystem) {
    CEcoCEPAggregation1* pCMe = (CEcoCEPAggregation1*)me;
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
IEcoCEPAggregation1VTbl g_xB6565DDC25904AE7A1C58802079EBE23VTbl = {
    CEcoCEPAggregation1_QueryInterface,
    CEcoCEPAggregation1_AddRef,
    CEcoCEPAggregation1_Release,
    CEcoCEPAggregation1_MyFunction,
    CEcoCEPAggregation1_sum,
	CEcoCEPAggregation1_average,
	CEcoCEPAggregation1_sqrt,
	CEcoCEPAggregation1_median,
	CEcoCEPAggregation1_minimum,
	CEcoCEPAggregation1_maximum,
	CEcoCEPAggregation1_variance,
	CEcoCEPAggregation1_deviation,
	CEcoCEPAggregation1_set
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
int16_t createCEcoCEPAggregation1(/* in */ IEcoUnknown* pIUnkSystem, /* in */ IEcoUnknown* pIUnkOuter, /* out */ IEcoCEPAggregation1** ppIEcoCEPAggregation1) {
    int16_t result = -1;
    IEcoSystem1* pISys = 0;
    IEcoInterfaceBus1* pIBus = 0;
    IEcoMemoryAllocator1* pIMem = 0;
    CEcoCEPAggregation1* pCMe = 0;

    /* Проверка указателей */
    if (ppIEcoCEPAggregation1 == 0 || pIUnkSystem == 0) {
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
    pCMe = (CEcoCEPAggregation1*)pIMem->pVTbl->Alloc(pIMem, sizeof(CEcoCEPAggregation1));

    /* Сохранение указателя на системный интерфейс */
    pCMe->m_pISys = pISys;

    /* Сохранение указателя на интерфейс для работы с памятью */
    pCMe->m_pIMem = pIMem;

    /* Установка счетчика ссылок на компонент */
    pCMe->m_cRef = 1;

    /* Создание таблицы функций интерфейса IEcoCEPAggregation1 */
    pCMe->m_pVTblIEcoCEPAggregation1 = &g_xB6565DDC25904AE7A1C58802079EBE23VTbl;

    /* Инициализация данных */
    pCMe->m_Name = 0;

    /* Возврат указателя на интерфейс */
    *ppIEcoCEPAggregation1 = (IEcoCEPAggregation1*)pCMe;

    /* Освобождение */
    pIBus->pVTbl->Release(pIBus);

    return 0;
}

int16_t CEcoCEPAggregation1_sum(/* in */ struct IEcoCEPAggregation1* me, /* in */ int16_t* data, 
	int16_t len, /* out */ double_t* result) {
    CEcoCEPAggregation1* pCMe = (CEcoCEPAggregation1*)me;
    int16_t index = 0;

    /* Проверка указателей */
    if (me == 0 || Name == 0 || copyName == 0) {
        return -1;
    }

    /* Копирование строки */
    while(data[index] != 0) {
        index++;
    }
    index = 0;
	*result = 0;
    while(index < len) {
        (*result) += data[index];
        index++;
    }
    return 0;
}

int16_t CEcoCEPAggregation1_average(/* in */ struct IEcoCEPAggregation1* me, /* in */ int16_t* data, 
	int16_t len, /* out */ double_t* result) {
    CEcoCEPAggregation1* pCMe = (CEcoCEPAggregation1*)me;
    int16_t index = 0;

    /* Проверка указателей */
    if (me == 0 || Name == 0 || copyName == 0) {
        return -1;
    }

    /* Копирование строки */
    while(data[index] != 0) {
        index++;
    }
    index = 0;
	*result = 0;
    while(index < len) {
        (*result) += data[index];
        index++;
    }
	*result /= len;
    return 0;
}

int16_t CEcoCEPAggregation1_sqrt(/* in */ struct IEcoCEPAggregation1* me, /* in */ double_t* number,  /* out */ double_t* result) {
    CEcoCEPAggregation1* pCMe = (CEcoCEPAggregation1*)me;
    int16_t index = 0;

    /* Проверка указателей */
    if (me == 0 || Name == 0 || copyName == 0) {
        return -1;
    }

   int i;
   float x = number;
   i = (1<<29) + (i >> 1) - (1<<22); 
   x =       x + number/x;
   x = 0.25f*x + number/x;
   (*result) = x;
   return 0;
}


int16_t CEcoCEPAggregation1_median(/* in */ struct IEcoCEPAggregation1* me, /* in */ int16_t* data, 
	int16_t len, /* out */ double_t* result) {
    CEcoCEPAggregation1* pCMe = (CEcoCEPAggregation1*)me;
    int16_t index = 0;

    /* Проверка указателей */
    if (me == 0 || Name == 0 || copyName == 0) {
        return -1;
    }

    /* Копирование строки */
    while(data[index] != 0) {
        index++;
    }
    index = 0;
	double_t average = 0;
    while(index < len) {
        average += data[index];
        index++;
    }
	average /= len;
	index = 0;
	double_t x = 0;
	while(index < len) {
        x += (average - data[index]) * (average - data[index]);
        index++;
    }
	x /= (len - 1);
	(*result) = CEcoCEPAggregation1_sqrt(pCMe, &x, result);

    return 0;
}

int16_t CEcoCEPAggregation1_minimum(/* in */ struct IEcoCEPAggregation1* me, /* in */ int16_t* data, 
	int16_t len, /* out */ double_t* result) {
    CEcoCEPAggregation1* pCMe = (CEcoCEPAggregation1*)me;
    int16_t index = 0;

    /* Проверка указателей */
    if (me == 0 || Name == 0 || copyName == 0) {
        return -1;
    }

    /* Копирование строки */
    while(data[index] != 0) {
        index++;
    }
    index = 0;
	*result = data[0];
    while(index < len) {
		if (data[index] < *result) {
			*result = data[index];
		}
        index++;
    }
    return 0;
}

int16_t CEcoCEPAggregation1_maximum(/* in */ struct IEcoCEPAggregation1* me, /* in */ int16_t* data, 
	int16_t len, /* out */ double_t* result) {
    CEcoCEPAggregation1* pCMe = (CEcoCEPAggregation1*)me;
    int16_t index = 0;

    /* Проверка указателей */
    if (me == 0 || Name == 0 || copyName == 0) {
        return -1;
    }

    /* Копирование строки */
    while(data[index] != 0) {
        index++;
    }
    index = 0;
	*result = data[0];
    while(index < len) {
		if (data[index] > *result) {
			*result = data[index];
		}
        index++;
    }
    return 0;
}

int16_t CEcoCEPAggregation1_variance(/* in */ struct IEcoCEPAggregation1* me, /* in */ int16_t* data, 
	int16_t len, /* out */ double_t* result) {
    CEcoCEPAggregation1* pCMe = (CEcoCEPAggregation1*)me;
    int16_t index = 0;

    /* Проверка указателей */
    if (me == 0 || Name == 0 || copyName == 0) {
        return -1;
    }

    /* Копирование строки */
    while(data[index] != 0) {
        index++;
    }
    index = 0;
	double_t average = 0;
    while(index < len) {
        average += data[index];
        index++;
    }
	average /= len;
	index = 0;
	double_t x = 0;
	while(index < len) {
        x += (average - data[index]) * (average - data[index]) * index;
        index++;
    }
	(*result) = x / len;

    return 0;
}


int16_t CEcoCEPAggregation1_deviation(/* in */ struct IEcoCEPAggregation1* me, /* in */ int16_t* data, 
	int16_t len, /* out */ double_t* result) {
    CEcoCEPAggregation1* pCMe = (CEcoCEPAggregation1*)me;
    int16_t index = 0;

    /* Проверка указателей */
    if (me == 0 || Name == 0 || copyName == 0) {
        return -1;
    }
	double_t *x;
    CEcoCEPAggregation1_variance(pCMe, data, len, x);
	CEcoCEPAggregation1_sqrt(pCMe, &x, result);

    return 0;
}

int16_t CEcoCEPAggregation1_set(/* in */ struct IEcoCEPAggregation1* me, /* in */ int16_t* data, 
	int16_t len, /* out */ double_t* result) {
    CEcoCEPAggregation1* pCMe = (CEcoCEPAggregation1*)me;
    int16_t index = 0;

    /* Проверка указателей */
    if (me == 0 || Name == 0 || copyName == 0) {
        return -1;
    }
	double_t *x;
    CEcoCEPAggregation1_variance(pCMe, data, len, x);
	CEcoCEPAggregation1_sqrt(pCMe, &x, result);

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
void deleteCEcoCEPAggregation1(/* in */ IEcoCEPAggregation1* pIEcoCEPAggregation1) {
    CEcoCEPAggregation1* pCMe = (CEcoCEPAggregation1*)pIEcoCEPAggregation1;
    IEcoMemoryAllocator1* pIMem = 0;

    if (pIEcoCEPAggregation1 != 0 ) {
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
