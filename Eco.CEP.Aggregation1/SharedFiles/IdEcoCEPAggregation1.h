/*
 * <кодировка символов>
 *   Cyrillic (UTF-8 with signature) - Codepage 65001
 * </кодировка символов>
 *
 * <сводка>
 *   IdEcoCEPAggregation1
 * </сводка>
 *
 * <описание>
 *   Данный заголовок описывает интерфейс IdEcoCEPAggregation1
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

#ifndef __ID_ECOCEPAGGREGATION1_H__
#define __ID_ECOCEPAGGREGATION1_H__

#include "IEcoBase1.h"
#include "IEcoCEPAggregation1.h"

/* EcoCEPAggregation1 CID = {71FB766E-1F17-4041-851E-2DDFACA4F11B} */
#ifndef __CID_EcoCEPAggregation1
static const UGUID CID_EcoCEPAggregation1 = {0x01, 0x10, 0x71, 0xFB, 0x76, 0x6E, 0x1F, 0x17, 0x40, 0x41, 0x85, 0x1E, 0x2D, 0xDF, 0xAC, 0xA4, 0xF1, 0x1B};
#endif /* __CID_EcoCEPAggregation1 */

/* Фабрика компонента для динамической и статической компановки */
#ifdef ECO_DLL
ECO_EXPORT IEcoComponentFactory* ECOCALLMETHOD GetIEcoComponentFactoryPtr();
#elif ECO_LIB
extern IEcoComponentFactory* GetIEcoComponentFactoryPtr_71FB766E1F174041851E2DDFACA4F11B;
#endif

#endif /* __ID_ECOCEPAGGREGATION1_H__ */
