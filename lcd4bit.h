 #include <stdint.h>
extern void Delay(unsigned long b);
extern void delay_ms(uint16_t j);
extern void write_command(int cmd);
extern void write_data(int dat);
extern void lcd_data(char dat);
extern void lcd_command(char cmd);
extern void init_lcd(void);
extern void printlcd(char *CPtr);
