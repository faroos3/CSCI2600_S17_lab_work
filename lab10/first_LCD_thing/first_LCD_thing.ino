#include <LiquidCrystal.h>

/******************************************************************************************************************/
/***********     LCD Initialization Code - Don't change unless you want stuff to stop working! ********************/
/******************************************************************************************************************/
/*
 *      void init_LCD();     Call this function to set up the LCD screen for use
 *      void LCD_off();      Call this function to turn off the backlight of the screen. Note that this leaves the LCD still on, but not visible
 *      void LCD_on();       Call this function to turn the backlight back on. The LCD starts on by default
 * 
 * 
 * 
 * 
 * 
 * 
 * 
 */





                      
// initialize the library with the numbers of the interface pins
LiquidCrystal lcd(48, 46, 44, 42, 40, 38, 36, 34, 32, 30, 28);
int __counter = 0; //Global counter variable for contrast PWM
void init_LCD(){__init_LCD();}

void __init_LCD(){
  pinMode(24, OUTPUT); //K
  pinMode(26, OUTPUT); //A

   pinMode(54, OUTPUT); //VSS
  pinMode(52, OUTPUT); //VDD
  pinMode(50, OUTPUT); //Contrasty pin
  digitalWrite(24, LOW); //Backlight
  digitalWrite(26, HIGH); //Backlight
  digitalWrite(54, LOW); //GND
  digitalWrite(52, HIGH); //VDD
 // set up the LCD's number of columns and rows:
  lcd.begin(16, 2); 
  // Timer0 is used for millis() - we'll just interrupt
  // in the middle and call the compA
  OCR0A = 0x01;
  TIMSK0 |= _BV(OCIE0A);
}
SIGNAL(TIMER0_COMPA_vect) 
{
   __counter++;
   if (__counter > 14){
      digitalWrite(50,HIGH);
      __counter = 0;
   }
   else if (__counter > 3){
      digitalWrite(50, LOW);
   }
}


//turn lcd backlight off
void lcd_off(){
  digitalWrite(26, LOW); //Backlight
}

//turn lcd backlight on
void lcd_on(){
  digitalWrite(26, HIGH); //Backlight
}
/*******************************************************************************************************************/
/*******************************************************************************************************************/
/*******************************************************************************************************************/
unsigned long seconds;
bool timer_started;


unsigned long time; 
void start_timer(){
  time = millis(); 
}

void setup() { 
  // initialize the serial communications:
  Serial.begin(9600);
  init_LCD();

  bool timer_started = false;
  seconds = 0;

}

void printTime()
{
  long hours = seconds % 3600;
  long remain = seconds - (hours * 3600);
  long minutes = remain % 60;
  remain = remain - (minutes * 60);
  long seconds = remain;

  String output = String(hours) + ':' + String(minutes) + ':' + String(seconds);
  lcd.clear();
  lcd.print(output);
}

void loop() {
  String message = Serial.readString();// read a string sent from the computer
  
  if(message == "start"){
    start_timer();
    timer_started = true; 
  }
  else if(message == "end"){
    timer_started = false;
  }
  else if (message[0] == 't')
  {
    // Initial
    String hoursStr = String(message[1]) + String(message[2]);
    String minStr = String(message[3]) + String(message[4]);
    int hours = hoursStr.toInt();
    int mins = minStr.toInt();
    
    seconds = 3600 * hours + 60 * mins;
    Serial.print(seconds);
    //printTime(); 
  }
  
  
  //message = set_timer(message);
  //Serial.print("hello world");//prints hello world to the serial monitor
  lcd.home();
  //lcd.print(message);
  
  //lcd.print(String(hour));
  //lcd.setCursor(0, 1);
  //lcd.clear();
  if(timer_started){
    seconds++;
    printTime();
  }
  else
  {
    // blinky
  }
  delay(1000);
}



