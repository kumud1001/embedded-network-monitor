#include <stdio.h>

int main()
{
    int temperature = 30;
    float voltage = 3.3;
    char device_status = 'A';

    printf("Temperature: %d C\n", temperature);
    printf("Voltage: %.2f V\n", voltage);
    printf("Device Status: %c\n", device_status);

    return 0;
}
