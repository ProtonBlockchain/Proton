// Copyright (c) 2017-2019 The PIVX developers
// Copyright (c) 2021 The Proton developers
// Distributed under the MIT software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#ifndef Proton_BLOCKSIGNATURE_H
#define Proton_BLOCKSIGNATURE_H

#include "key.h"
#include "primitives/block.h"
#include "keystore.h"

bool SignBlockWithKey(CBlock& block, const CKey& key);
bool SignBlock(CBlock& block, const CKeyStore& keystore);
bool CheckBlockSignature(const CBlock& block);

#endif //Proton_BLOCKSIGNATURE_H
