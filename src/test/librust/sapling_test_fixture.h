// Copyright (c) 2020 The PIVX developers
// Copyright (c) 2021 The T-Notes developers
// Distributed under the MIT software license, see the accompanying
// file COPYING or https://www.opensource.org/licenses/mit-license.php.

#ifndef T_Notes_SAPLING_TEST_FIXTURE_H
#define T_Notes_SAPLING_TEST_FIXTURE_H

#include "test/test_t_notes.h"

/**
 * Testing setup that configures a complete environment for Sapling testing.
 */
struct SaplingTestingSetup : public TestingSetup {
    SaplingTestingSetup();
    ~SaplingTestingSetup();
};


#endif //T_Notes_SAPLING_TEST_FIXTURE_H
