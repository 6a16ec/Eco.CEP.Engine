/*
 * <кодировка символов>
 *   Cyrillic (UTF-8 with signature) - Codepage 65001
 * </кодировка символов>
 *
 * <сводка>
 *   IdEcoCEPEngine1
 * </сводка>
 *
 * <описание>
 *   Данный заголовок описывает интерфейс IdEcoCEPEngine1
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

#ifndef __ID_ECOCEPENGINE1_H__
#define __ID_ECOCEPENGINE1_H__

#include "IEcoBase1.h"
#include "IEcoCEPEngine1.h"

/* EcoCEPEngine1 CID = {A1AC4926-21FE-4596-816E-F9BF5150045C} */
#ifndef __CID_EcoCEPEngine1
static const UGUID CID_EcoCEPEngine1 = {0x01, 0x10, 0xA1, 0xAC, 0x49, 0x26, 0x21, 0xFE, 0x45, 0x96, 0x81, 0x6E, 0xF9, 0xBF, 0x51, 0x50, 0x04, 0x5C};
#endif /* __CID_EcoCEPEngine1 */

/* Фабрика компонента для динамической и статической компановки */
#ifdef ECO_DLL
ECO_EXPORT IEcoComponentFactory* ECOCALLMETHOD GetIEcoComponentFactoryPtr();
#elif ECO_LIB
extern IEcoComponentFactory* GetIEcoComponentFactoryPtr_A1AC492621FE4596816EF9BF5150045C;
#endif

#endif /* __ID_ECOCEPENGINE1_H__ */
