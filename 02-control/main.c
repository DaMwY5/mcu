
#include "stdlib.h"
#include "pico/stdlib.h"
#include "stdio.h"
#include "hardware/gpio.h"
#include "stdio-task/stdio-task.h"
int main(){
    stdio_init_all();
    stdio_task_init();
    while(1){
        stdio_task_handle();
    }
}