//----------------------HOWTO----------------------------------------
/*  
    matrix.displaybuffer[i] : directly access display buffer. check if node has been hit.
    matrix.drawPixel() : draw to a pixel.
    matrix.drawBitmap(0, 0,  mybitmap, 16, 32, LED_ON); outputs "mybmp" to buffer
    matrix.drawLine(0,0, 7,15, Mat1); 

  //INITIALLIZING BUFFER
    static const uint16_t PROGMEM
      mybitmap[] =
      { B0011110000111100,
        B0100001000111100,
        B1010010100111100,
        B1000000100111100,
        B1010010100111100,
        B1001100100111100,
        B0100001000111100,
        B0011110000111100 };
  
  
   write the changes we just made to the display. display buffer to LED. 
   matrix.writeDisplay();
  */

//-----------------------ENDHOWTO---------------------------------------


#include <Adafruit_GFX.h>
#include <Wire.h>
#include <Adafruit_LEDBackpack.h>
#include <SoftwareSerial.h>



Adafruit_8x16matrix matrix = Adafruit_8x16matrix();  //specify your display buffer


void LEDFlash(int r, int c){
  matrix.drawPixel(r,c, LED_ON);
  matrix.writeDisplay();
  delay(100);
  matrix.drawPixel(r,c, LED_OFF);
  matrix.writeDisplay();
  delay(100);
  matrix.drawPixel(r,c, LED_ON);
  matrix.writeDisplay();
  delay(100);
  matrix.drawPixel(r,c, LED_OFF);
  matrix.writeDisplay();
  delay(100);
  matrix.drawPixel(r,c, LED_ON); //after blinking twice stays on
  matrix.writeDisplay();
}

void LEDFlash2(int r, int c, int r1, int c1){
  matrix.drawPixel(r,c, LED_ON);
  matrix.drawPixel(r1,c1, LED_ON);
  matrix.writeDisplay();
  delay(100);
  matrix.drawPixel(r,c, LED_OFF);
  matrix.drawPixel(r1,c1, LED_OFF);
  matrix.writeDisplay();
  delay(100);
  matrix.drawPixel(r,c, LED_ON);
  matrix.drawPixel(r1,c1, LED_ON);
  matrix.writeDisplay();
  delay(100);
  matrix.drawPixel(r,c, LED_OFF);
  matrix.drawPixel(r1,c1, LED_OFF);
  matrix.writeDisplay();
  delay(100);
  //after blinking twice stays on
  matrix.drawPixel(r,c, LED_ON);
  matrix.drawPixel(r1,c1, LED_ON);
  matrix.writeDisplay();
}
void LEDFlash4(int r, int c, int r1, int c1, int r2, int c2, int r3, int c3){
  matrix.drawPixel(r,c, LED_ON);
  matrix.drawPixel(r1,c1, LED_ON);
  matrix.drawPixel(r2,c2, LED_ON);
  matrix.drawPixel(r3,c3, LED_ON);
  matrix.writeDisplay();
  delay(100);
  matrix.drawPixel(r,c, LED_OFF);
  matrix.drawPixel(r1,c1, LED_OFF);
  matrix.drawPixel(r2,c2, LED_OFF);
  matrix.drawPixel(r3,c3, LED_OFF);
  matrix.writeDisplay();
  delay(100);
  matrix.drawPixel(r,c, LED_ON);
  matrix.drawPixel(r1,c1, LED_ON);
  matrix.drawPixel(r2,c2, LED_ON);
  matrix.drawPixel(r3,c3, LED_ON);
  matrix.writeDisplay();
  delay(100);
  matrix.drawPixel(r,c, LED_OFF);
  matrix.drawPixel(r1,c1, LED_OFF);
  matrix.drawPixel(r2,c2, LED_OFF);
  matrix.drawPixel(r3,c3, LED_OFF);
  matrix.writeDisplay();
  delay(100);
  matrix.drawPixel(r,c, LED_ON);
  matrix.drawPixel(r1,c1, LED_ON);
  matrix.drawPixel(r2,c2, LED_ON);
  matrix.drawPixel(r3,c3, LED_ON);
  matrix.writeDisplay();
}

//Subroutine to indicate to the user that they can throw dart. i.e Light up all LED 2 times. etc.
void ShowReady(){

}

//Function to animate clearing of screen. 
void AnimateClear(){
for(int i=1; i<83; i++){
  
}
}

void PaintSegment(int seg){
  if(seg==64){
    LEDFlash(5,7);
  }
  else if(seg==65){
    LEDFlash(1,0);
  }
  else if(seg==66){
    LEDFlash(11,0);
  }
  else if(seg==67){
    LEDFlash(12,0);
  }
  else if(seg==68){
    LEDFlash(12,7);
  }
  else if(seg==69){
    LEDFlash(12,4);
  }
  else if(seg==70){
    LEDFlash(12,3);
  }
  else if(seg==71){
    LEDFlash(0,0);
  }
  else if(seg==72){
    LEDFlash(11,7);
  }
  else if(seg==73){
    LEDFlash(5,0);
  }
  else if(seg==74){
    LEDFlash(6,0);
  }
   else if(seg==75){
    LEDFlash(10,3);
  }
   else if(seg==76){
    LEDFlash(10,4);
  }
   else if(seg==77){
    LEDFlash(10,7);
  }
  else if(seg==78){
    LEDFlash(10,0);
  }
  else if(seg==79){
    LEDFlash(4,7);
  }
  else if(seg==80){
    LEDFlash(0,7);
  }
  else if(seg==81){
    LEDFlash(1,7);
  }
  else if(seg==82){
    LEDFlash(6,7);
  }
  else if(seg==63){
    LEDFlash(4,0);
  }
  else if(seg==44){
    LEDFlash2(5,6,6,6);
  }
  else if(seg==45){
    LEDFlash2(2,7,3,7);
  }
  else if(seg==46){
    LEDFlash2(15,7,13,7);
  }
  else if(seg==47){
    LEDFlash2(14,6,14,7);
  }
  else if(seg==48){
    LEDFlash2(12,6,12,5);
  }
  else if(seg==49){
    LEDFlash2(12,1,12,2);
  }
  else if(seg==50){
    LEDFlash2(14,1,14,0);
  }
  else if(seg==51){
    LEDFlash2(15,0,13,0);
  }
  else if(seg==52){
    LEDFlash2(11,1,0,1);
  }
  else if(seg==53){
    LEDFlash2(2,0,3,0);
  }
  else if(seg==54){
    LEDFlash2(7,0,8,0);
  }
  else if(seg==55){
    LEDFlash2(9,1,9,0);
  }
  else if(seg==56){
    LEDFlash2(10,2,10,1);
  }
  else if(seg==57){
    LEDFlash2(10,6,10,5);
  }
  else if(seg==58){
    LEDFlash2(5,1,6,1);
  }
  else if(seg==59){
    LEDFlash2(1,1,4,1);
  }
  else if(seg==60){
    LEDFlash2(11,6,0,6);
  }
  else if(seg==61){
    LEDFlash2(4,6,1,6);
  }
  else if(seg==62){
    LEDFlash2(9,7,9,6);
  }
  else if(seg==43){
    LEDFlash2(7,7,8,7);
  }
  else if(seg==24){
    LEDFlash(2,6);
  }
  else if(seg==25){
    LEDFlash(14,4);
  }
  else if(seg==26){
    LEDFlash(14,3);
  }
  else if(seg==27){
    LEDFlash(14,2);
  }
  else if(seg==28){
    LEDFlash(13,1);
  }
  else if(seg==29){
    LEDFlash(15,1);
  }
  else if(seg==30){
    LEDFlash(14,5);
  }
  else if(seg==31){
    LEDFlash(9,2);
  }
  else if(seg==32){
    LEDFlash(9,3);
  }
  else if(seg==33){
    LEDFlash(9,4);
  }
  else if(seg==34){
    LEDFlash(9,5);
  }
  else if(seg==35){
    LEDFlash(8,6);
  }
  else if(seg==36){
    LEDFlash(8,1);
  }
  else if(seg==37){
    LEDFlash(7,6);
  }
  else if(seg==38){
    LEDFlash(7,1);
  }
  else if(seg==39){
    LEDFlash(15,6);
  }
  else if(seg==40){
    LEDFlash(13,6);
  }
  else if(seg==41){
    LEDFlash(2,1);
  }
  else if(seg==42){
    LEDFlash(3,1);
  }
  else if(seg==23){
    LEDFlash(3,6);
  }
  else if(seg==4){
    LEDFlash2(0,5,0,4);
  }
  else if(seg==5){
    LEDFlash2(11,5,11,4);
  }
  else if(seg==6){
    LEDFlash2(15,5,15,4);
  }
  else if(seg==7){
    LEDFlash2(13,5,13,4);
  }
  else if(seg==8){
    LEDFlash2(13,2,13,3);
  }
  else if(seg==9){
    LEDFlash2(15,2,15,3);
  }
  else if(seg==10){
    LEDFlash2(11,2,11,3);
  }
  else if(seg==11){
    LEDFlash2(0,2,0,3);
  }
  else if(seg==12){
    LEDFlash2(1,2,2,2);
  }
  else if(seg==13){
    LEDFlash2(7,3,7,2);
  }
  else if(seg==14){
    LEDFlash2(8,3,8,2);
  }
  else if(seg==15){
    LEDFlash2(8,5,8,4);
  }
  else if(seg==16){
    LEDFlash2(4,2,3,2);
  }
  else if(seg==17){
    LEDFlash2(7,5,7,4);
  }
  else if(seg==18){
    LEDFlash2(6,3,6,2);
  }
  else if(seg==19){
    LEDFlash2(6,5,6,4);
  }
  else if(seg==20){
    LEDFlash2(5,2,5,3);
  }
  else if(seg==21){
    LEDFlash2(5,4,5,5);
  }
  else if(seg==22){
    LEDFlash2(3,5,4,5);
  }
  else if(seg==3){
    LEDFlash2(1,5,2,5);
  }
  else if(seg==2){
    LEDFlash4(1,3,1,4,4,4,4,3);
  }
  else if(seg==1){ //equivalent to segment 0
    LEDFlash(2,4);
  }
  
}

void cycleAround(){
  for(int i=1; i<83; i++){
      PaintSegment(i);
      delay(10);
    }  
}

//Function to check if segment has already been hit. 
SoftwareSerial BT(10, 11);


void setup() {
  // put your setup code here, to run once:
  Wire.begin();
  
  Serial.begin(9600);
  matrix.begin(0x70); //go to first matrix
  matrix.setRotation(1); 
  matrix.setBrightness(15);
  BT.begin(9600);

}

void loop() {

    //Process Data from Kinect
    if(Serial.available()){
      int kinect_data=Serial.read();
      if(kinect_data<84 && kinect_data>0){
        PaintSegment(kinect_data);
        BT.write(2); //RESERVED KEYWORD FOR BEGIN SEGMENT TRANSMISSION
        BT.write(kinect_data); //SEND TARGET SEGMENT. 
        BT.write(3); //RESERVED KEYWORD FOR END OF SEGMENT TANSMISSION
      }
    }
    
    //Process Data From App
    if(BT.available()){
      int android_data=Serial.read();
      if(android_data<16 && android_data>=0){
        matrix.setBrightness(android_data);
        PaintSegment(android_data); ////////////THIS LINE IS FOR TESTING
      }
      if(android_data==20){ //clear screen command
        matrix.clear();
        matrix.writeDisplay();
      }
    }

}




