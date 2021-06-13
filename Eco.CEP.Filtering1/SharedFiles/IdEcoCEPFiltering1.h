/*
 * <кодировка символов>
 *   Cyrillic (UTF-8 with signature) - Codepage 65001
 * </кодировка символов>
 *
 * <сводка>
 *   IdEcoCEPFiltering1
 * </сводка>
 *
 * <описание>
 *   Данный заголовок описывает интерфейс IdEcoCEPFiltering1
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

#ifndef __ID_ECOCEPFILTERING1_H__
#define __ID_ECOCEPFILTERING1_H__

#include "IEcoBase1.h"
#include "IEcoCEPFiltering1.h"

/* EcoCEPFiltering1 CID = {F2F80840-CD35-4C7B-AA96-4B0BBC969EAD} */
#ifndef __CID_EcoCEPFiltering1
static const UGUID CID_EcoCEPFiltering1 = {0x01, 0x10, 0xF2, 0xF8, 0x08, 0x40, 0xCD, 0x35, 0x4C, 0x7B, 0xAA, 0x96, 0x4B, 0x0B, 0xBC, 0x96, 0x9E, 0xAD};
#endif /* __CID_EcoCEPFiltering1 */

/* Фабрика компонента для динамической и статической компановки */
#ifdef ECO_DLL
ECO_EXPORT IEcoComponentFactory* ECOCALLMETHOD GetIEcoComponentFactoryPtr();
#elif ECO_LIB
extern IEcoComponentFactory* GetIEcoComponentFactoryPtr_F2F80840CD354C7BAA964B0BBC969EAD;
#endif

#endif /* __ID_ECOCEPFILTERING1_H__ */
