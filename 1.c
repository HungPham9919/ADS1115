#include "stdio.h"
#include "stdint.h"
#include "unistd.h"
#include "stdlib.h"
#include "wiringPi.h"
#include "wiringPiSPI.h"
#define spi0 0
/*#define col_1 0x01
#define col_2 0x02
#define col_3 0x03
#define col_4 0x04
#define col_5 0x05
#define col_6 0x06
#define col_7 0x07
#define col_8 0x08*/
void send_data(uint8_t address, uint8_t data){
    buff[0]= address;
    buff[1] = data;
    wiringPiSPIDataRW(spi0,buff,2);
}
void init_max7219(void){
    send_data(0x09,0x00); // no decode
    send_data(0x0A,0x0B); // Intensity
    send_data(0x0C,1); // off
    send_data(0x0F,0); // no shutdown
    send_data(0x0B,7);  // scan led
}
// LED matrix Column 0x01->0x08 (cột 1 đến 8)
void wall(void){
    // row: hangf0 và 7 full : 0xFF 2-6 0x81
    for(int i = 0; i < 8;i++){
        if(i = 0 || i = 7){
            send_data(i,0xFF);
        }
        else 
            send_data(i,0x81); 
    }
}
// making snake: middle row: hàng 4: 2 điểm cách cột 0, 2 điểm
uint8_t rand_point(void){
    uint8_t row[6] = {0xC1,0xA1,0x91,0x89,0x85,0x83};
    uint8_t col[6] = {0x01,0x02,0x03,0x04,0x05,0x06};
    int x,y;
    for(int i = 0 ; i < 10; i++){
        x = rand()%6;
        y = rand()%6;
        printf(" %u \n ", value_row1[x]); // address
        printf(" %u \n ", cols[y]); // data
        //send_data(cols[x],row[y]);
        //delay(10000); // 10s    
        }
    return x, y;
}
uint8_t compare(void){
    // so sánh và trả ra giá trị true false
}
void snake(void){
    uint8_t value_row1[6] = {0xC1,0xA1,0x91,0x89,0x85,0x83};
    for(int i = 0; i < 4; i++){
        send_data(4,value_row1[i]);
        send_data(4,value_row1[i + 1]);
    }
}
int main(void){
    wiringPiSetupSPI(spi0,8000000);
    init_max7219();
    return 0;
}
void wall(void){
    // address là hàng row || data là cột
    for(int i = 1; i < 9;i++){
        if(i == 1 || i == 8){
            send_data(i,0xFF);
        }
        else 
            send_data(i,0x81); 
    }
}
typedef struct 
{
    int x;
    int y;
} Point;  // dùng 2 giá trị này để lưu lại
uint8_t col[6] = {0x50,0x20,0x10,0x08,0x04,0x02}; // data
uint8_t row[6] = {0x02,0x03,0x04,0x05,0x06,0x07}; // address
Point result;
Point rand_point(void){
    clear();
    for(int i = 0 ; i < 5; i++){
        result.x = rand()%6;
        result.y = rand()%6;
        send_data(row[result.y],col[result.x]);
        delay(3000);
        send_data(row[result.y],0x00); // clear point
        }
    return result;
}
void snake(void){
    uint8_t value_row1[6] = {0xE1,0xB1,0x99,0x8D,0x87};
    for(int i = 1; i < 6; i++){
        send_data(4,value_row1[i-1]);
        delay(1000);
    }
}