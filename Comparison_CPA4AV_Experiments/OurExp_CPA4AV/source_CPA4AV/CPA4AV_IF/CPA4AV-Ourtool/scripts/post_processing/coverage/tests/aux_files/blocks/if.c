// This file is part of CPAchecker,
// a tool for configurable software verification:
// https://cpachecker.sosy-lab.org
//
// SPDX-FileCopyrightText: 2017 Rodrigo Castano
// SPDX-FileCopyrightText: 2017-2020 Dirk Beyer <https://www.sosy-lab.org>
//
// SPDX-License-Identifier: Apache-2.0

int __VERIFIER_nondet_int();
int main() {
    int i = __VERIFIER_nondet_int();
    if (i > -100 && i < 100 && i*i < 0) {
        i = i + 1;
        i = i + 2;
        i = i + 3;
    }
}
