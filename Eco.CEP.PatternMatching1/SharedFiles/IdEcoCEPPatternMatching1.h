/*
 * <кодировка символов>
 *   Cyrillic (UTF-8 with signature) - Codepage 65001
 * </кодировка символов>
 *
 * <сводка>
 *   IdEcoCEPPatternMatching1
 * </сводка>
 *
 * <описание>
 *   Данный заголовок описывает интерфейс IdEcoCEPPatternMatching1
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

#ifndef __ID_ECOCEPPATTERNMATCHING1_H__
#define __ID_ECOCEPPATTERNMATCHING1_H__

#include "IEcoBase1.h"
#include "IEcoCEPPatternMatching1.h"

/* EcoCEPPatternMatching1 CID = {32A79131-E0F3-4E54-9D35-6E2891CE310F} */
#ifndef __CID_EcoCEPPatternMatching1
static const UGUID CID_EcoCEPPatternMatching1 = {0x01, 0x10, 0x32, 0xA7, 0x91, 0x31, 0xE0, 0xF3, 0x4E, 0x54, 0x9D, 0x35, 0x6E, 0x28, 0x91, 0xCE, 0x31, 0x0F};
#endif /* __CID_EcoCEPPatternMatching1 */

/* Фабрика компонента для динамической и статической компановки */
#ifdef ECO_DLL
ECO_EXPORT IEcoComponentFactory* ECOCALLMETHOD GetIEcoComponentFactoryPtr();
#elif ECO_LIB
extern IEcoComponentFactory* GetIEcoComponentFactoryPtr_32A79131E0F34E549D356E2891CE310F;
#endif

#endif /* __ID_ECOCEPPATTERNMATCHING1_H__ */
