#include <unity.h>
#include <prom.h>
#include "mock_suma.h"

int auxiliar_suma(int a, int b) {
    return a + b;
}

void test_dos_numeros_positivos(void) {
    suma_fake.custom_fake = auxiliar_suma;

    TEST_ASSERT_EQUAL(3, promedio(2, 4));
}