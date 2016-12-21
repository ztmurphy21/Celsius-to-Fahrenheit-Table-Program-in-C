#include <stdio.h>
#include <stdlib.h>

main()
{
    printf("Celsius to Fahrenheit Table\n");
    int fahrTemp, celTemp;

    int lower = 0; /*lower limit of table.*/
    int upper = 300; /*upper limit of table.*/
    int step = 20; /*size of step*/

    celTemp = lower;
    while (celTemp <= upper){
        fahrTemp = (celTemp *9/5) + 32;
        printf("%d\t%d\n", celTemp, fahrTemp);
        celTemp = celTemp + step;
    }
}
