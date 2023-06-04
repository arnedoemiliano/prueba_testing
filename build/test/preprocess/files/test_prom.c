#include "build/test/mocks/mock_suma.h"
#include "src/prom.h"
#include "/var/lib/gems/3.0.0/gems/ceedling-0.31.1/vendor/unity/src/unity.h"


int auxiliar_suma(int a, int b) {

    return a + b;

}



void test_dos_numeros_positivos(void) {

    suma_fake.custom_fake = auxiliar_suma;



    UnityAssertEqualNumber((UNITY_INT)((3)), (UNITY_INT)((promedio(2, 4))), (

   ((void *)0)

   ), (UNITY_UINT)(12), UNITY_DISPLAY_STYLE_INT);

}
