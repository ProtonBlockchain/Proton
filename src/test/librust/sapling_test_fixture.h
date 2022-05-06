// Copyright (c) 2020 The PIVX developers
// Copyright (c) 2021 The Proton developers
// Distributed under the MIT software license, see the accompanying
// file COPYING or https://www.opensource.org/licenses/mit-license.php.

#ifndef Proton_SAPLING_TEST_FIXTURE_H
#define Proton_SAPLING_TEST_FIXTURE_H

#include "test/test_proton.h"

/**
 * Testing setup that configures a complete environment for Sapling testing.
 */
struct SaplingTestingSetup : public TestingSetup {
    SaplingTestingSetup();
    ~SaplingTestingSetup();
};


#endif //Proton_SAPLING_TEST_FIXTURE_H
