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
 *   Данный исходный код описывает реализацию интерфейсов CEcoCEPPatternMatching1
 * </описание>
 *
 * <автор>
 *   Copyright (c) 2018 Vladimir Bashev. All rights reserved.
 * </автор>
 *
 */

#include "IEcoSystem1.h"
#include "IEcoInterfaceBus1.h"
#include "CEcoCEPPatternMatching1.h"

/*
 *
 * <сводка>
 *   Функция QueryInterface
 * </сводка>
 *
 * <описание>
 *   Функция QueryInterface для интерфейса IEcoCEPPatternMatching1
 * </описание>
 *
 */
int16_t CEcoCEPPatternMatching1_QueryInterface(/* in */ struct IEcoCEPPatternMatching1* me, /* in */ const UGUID* riid, /* out */ void** ppv) {
    CEcoCEPPatternMatching1* pCMe = (CEcoCEPPatternMatching1*)me;
    int16_t result = -1;

    /* Проверка указателей */
    if (me == 0 || ppv == 0) {
        return result;
    }

    /* Проверка и получение запрошенного интерфейса */
    if ( IsEqualUGUID(riid, &IID_IEcoCEPPatternMatching1) ) {
        *ppv = &pCMe->m_pVTblIEcoCEPPatternMatching1;
        pCMe->m_pVTblIEcoCEPPatternMatching1->AddRef((IEcoCEPPatternMatching1*)pCMe);
    }
    else if ( IsEqualUGUID(riid, &IID_IEcoUnknown) ) {
        *ppv = &pCMe->m_pVTblIEcoCEPPatternMatching1;
        pCMe->m_pVTblIEcoCEPPatternMatching1->AddRef((IEcoCEPPatternMatching1*)pCMe);
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
 *   Функция AddRef для интерфейса IEcoCEPPatternMatching1
 * </описание>
 *
 */
uint32_t CEcoCEPPatternMatching1_AddRef(/* in */ struct IEcoCEPPatternMatching1* me) {
    CEcoCEPPatternMatching1* pCMe = (CEcoCEPPatternMatching1*)me;

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
 *   Функция Release для интерфейса IEcoCEPPatternMatching1
 * </описание>
 *
 */
uint32_t CEcoCEPPatternMatching1_Release(/* in */ struct IEcoCEPPatternMatching1* me) {
    CEcoCEPPatternMatching1* pCMe = (CEcoCEPPatternMatching1*)me;

    /* Проверка указателя */
    if (me == 0 ) {
        return -1;
    }

    /* Уменьшение счетчика ссылок на компонент */
    --pCMe->m_cRef;

    /* В случае обнуления счетчика, освобождение данных экземпляра */
    if ( pCMe->m_cRef == 0 ) {
        deleteCEcoCEPPatternMatching1((IEcoCEPPatternMatching1*)pCMe);
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
int16_t CEcoCEPPatternMatching1_MyFunction(/* in */ struct IEcoCEPPatternMatching1* me, /* in */ char_t* Name, /* out */ char_t** copyName) {
    CEcoCEPPatternMatching1* pCMe = (CEcoCEPPatternMatching1*)me;
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

int16_t CEcoCEPPatternMatching1_weakHashFunc(/* in */ struct IEcoCEPPatternMatching1* me, /* in */ char_t* str,  int16_t mod, /* out */ int16_t* result) {
	CEcoCEPPatternMatching1* pCMe = (CEcoCEPPatternMatching1*)me;
	index = 0;
    while(str[index] != 0) {
        index++;
	}
     (*result) = index % mod;
}
    
int16_t CEcoCEPPatternMatching1_reliableHashFunc(/* in */ struct IEcoCEPPatternMatching1* me, /* in */ char_t* str,  int16_t mod, /* out */ int16_t* result) {
	CEcoCEPPatternMatching1* pCMe = (CEcoCEPPatternMatching1*)me;
    int16_t result = 0;
    int16_t base_multi = 1;
	index = 0;
    while(str[index] != 0) {
    (*result) += (str[i] * base_multi) % mod);
		(*result) %= mod;
		base_multi *= base;
        index++;
    }
}
  
int16_t CEcoCEPPatternMatching1_prime(/* in */ struct IEcoCEPPatternMatching1* me, /* in */ int16_t number, /* out */ int16_t* result) {
	CEcoCEPPatternMatching1* pCMe = (CEcoCEPPatternMatching1*)me;
    (*result) = 0;
    if (number >= 2) {
        result = 1;
    }
    for (int16_t i = 2; i*i <= number; ++i) {
        if (number % i == 0) {
            result = 1;
        }
    }
    return result;
}
    
int16_t CEcoCEPPatternMatching1_insertItem(/* in */ struct IEcoCEPPatternMatching1* me, /* in */ char* str) {
	CEcoCEPPatternMatching1* pCMe = (CEcoCEPPatternMatching1*)me;
    int16_t x;
	CEcoCEPPatternMatching1_reliableHashFunc(pCMe, str, 777, x);

	index = 0;
    while(str[index] != 0) {
        index++;
    }

	
    while (1) {
        if (pCMe->table[x] == 0) {
            pCMe->table[x] = (char_t*)pCMe->m_pIMem->pVTbl->Alloc(pCMe->m_pIMem, index);
			index = 0;
			while(str[index]!=0) {
				table[x][index] = str[index];
			}
            break;
        }
        x = (x + pCMe->shift) % x->tableSize;
    }
	return 0;
}

int16_t CEcoCEPPatternMatching1_searchItem(/* in */ struct IEcoCEPPatternMatching1* me, /* in */ char* str, /* out */ int16_t* result) {
	CEcoCEPPatternMatching1* pCMe = (CEcoCEPPatternMatching1*)me;
    int16_t x;
	CEcoCEPPatternMatching1_reliableHashFunc(pCMe, str, 777, x);
	
    int16_t len = 0;
	while(str[len]!=0) {
		len += 1;
	}
    while (index < len) {
        if (pCMe->table[index] == 0) {
			(*result) = 1;
            break;
        }
        index = (index + pCMe->shift) % pCMe->tableSize;
    }
	(*result) = 0;
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
int16_t initCEcoCEPPatternMatching1(/*in*/ struct IEcoCEPPatternMatching1* me, /* in */ struct IEcoUnknown *pIUnkSystem) {
    CEcoCEPPatternMatching1* pCMe = (CEcoCEPPatternMatching1*)me;
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
IEcoCEPPatternMatching1VTbl g_xF79318D9156E4A66BCC9382F1B279E3CVTbl = {
    CEcoCEPPatternMatching1_QueryInterface,
    CEcoCEPPatternMatching1_AddRef,
    CEcoCEPPatternMatching1_Release,
    CEcoCEPPatternMatching1_MyFunction,
	int16_t CEcoCEPPatternMatching1_weakHashFunc,
	int16_t CEcoCEPPatternMatching1_reliableHashFunc,
	int16_t CEcoCEPPatternMatching1_prime,
	int16_t CEcoCEPPatternMatching1_insertItem,
	int16_t CEcoCEPPatternMatching1_searchItem
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
int16_t createCEcoCEPPatternMatching1(/* in */ IEcoUnknown* pIUnkSystem, /* in */ IEcoUnknown* pIUnkOuter, /* out */ IEcoCEPPatternMatching1** ppIEcoCEPPatternMatching1) {
    int16_t result = -1;
    IEcoSystem1* pISys = 0;
    IEcoInterfaceBus1* pIBus = 0;
    IEcoMemoryAllocator1* pIMem = 0;
    CEcoCEPPatternMatching1* pCMe = 0;

    /* Проверка указателей */
    if (ppIEcoCEPPatternMatching1 == 0 || pIUnkSystem == 0) {
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
    pCMe = (CEcoCEPPatternMatching1*)pIMem->pVTbl->Alloc(pIMem, sizeof(CEcoCEPPatternMatching1));

    /* Сохранение указателя на системный интерфейс */
    pCMe->m_pISys = pISys;

    /* Сохранение указателя на интерфейс для работы с памятью */
    pCMe->m_pIMem = pIMem;

    /* Установка счетчика ссылок на компонент */
    pCMe->m_cRef = 1;

    /* Создание таблицы функций интерфейса IEcoCEPPatternMatching1 */
    pCMe->m_pVTblIEcoCEPPatternMatching1 = &g_xF79318D9156E4A66BCC9382F1B279E3CVTbl;

    /* Инициализация данных */
    pCMe->m_Name = 0;
    pCMe->shift = 7;
	pCMe->table = (char_t*)pCMe->m_pIMem->pVTbl->Alloc(pCMe->m_pIMem, 1000);
	pCMe->table_count = (char_t*)pCMe->m_pIMem->pVTbl->Alloc(pCMe->m_pIMem, 1000);
	pCMe->tableSize = 1000;

    /* Возврат указателя на интерфейс */
    *ppIEcoCEPPatternMatching1 = (IEcoCEPPatternMatching1*)pCMe;

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
void deleteCEcoCEPPatternMatching1(/* in */ IEcoCEPPatternMatching1* pIEcoCEPPatternMatching1) {
    CEcoCEPPatternMatching1* pCMe = (CEcoCEPPatternMatching1*)pIEcoCEPPatternMatching1;
    IEcoMemoryAllocator1* pIMem = 0;

    if (pIEcoCEPPatternMatching1 != 0 ) {
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
