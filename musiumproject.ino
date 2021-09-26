#include <SD.h> 
#define SD_ChipSelectPin 53
#include <TMRpcm.h> 
#include <SPI.h> 

TMRpcm tmrpcm; 
int kannad=4;
int hindi=5;
int telgu=6;
int english=7;


void setup()
{ 
 pinMode(hindi,INPUT_PULLUP);
 pinMode(kannad,INPUT_PULLUP);
 pinMode(telgu,INPUT_PULLUP);
 pinMode(english,INPUT_PULLUP);
 
  
 
 pinMode(22,OUTPUT);
 pinMode(23,OUTPUT);
 pinMode(24,OUTPUT);
 pinMode(25,OUTPUT);
 pinMode(26,OUTPUT);
 pinMode(27,OUTPUT);
 pinMode(28,OUTPUT);
 pinMode(29,OUTPUT);
 pinMode(30,OUTPUT);
 pinMode(31,OUTPUT);
 pinMode(32,OUTPUT);
 pinMode(33,OUTPUT);
 pinMode(34,OUTPUT);
 pinMode(35,OUTPUT);
 digitalWrite(22,HIGH);
 digitalWrite(23,HIGH);
 digitalWrite(24,HIGH);
 digitalWrite(25,HIGH);
 digitalWrite(26,HIGH);
 digitalWrite(27,HIGH);
 digitalWrite(28,HIGH);
 digitalWrite(29,HIGH);
 digitalWrite(30,HIGH);
 digitalWrite(31,HIGH);
 digitalWrite(32,HIGH);
 digitalWrite(33,HIGH);
 digitalWrite(34,HIGH);
 digitalWrite(35,HIGH);
 
 
 tmrpcm.speakerPin = 46; 
 Serial.begin(115200);
 if (!SD.begin(SD_ChipSelectPin)) 
 {
  Serial.println("SD fail");
  return;
 }

 tmrpcm.setVolume(5); 
 tmrpcm.play("om.wav"); 
                     
}


void loop()
{  
  while(digitalRead(hindi)==0 || digitalRead(kannad)==0 || digitalRead(telgu)==0 || digitalRead(english)==0 )
  {
    if(digitalRead(hindi)==0)
    {
    digitalWrite(22,HIGH);
 digitalWrite(23,HIGH);
 digitalWrite(24,HIGH);
 digitalWrite(25,HIGH);
 digitalWrite(26,HIGH);
 digitalWrite(27,HIGH);
 digitalWrite(28,HIGH);
 digitalWrite(29,HIGH);
 digitalWrite(30,HIGH);
 digitalWrite(31,HIGH);
 digitalWrite(32,HIGH);
 digitalWrite(33,HIGH);
 digitalWrite(34,HIGH);
 digitalWrite(35,HIGH);
 delay(500);
     
   tmrpcm.play("hm.wav");
    delay(3000);
    
    digitalWrite(32,LOW);
    tmrpcm.play("hs26.wav");
    delay(26000);
    tmrpcm.play("h1.wav");
    delay(135000);
    digitalWrite(32,HIGH);
    
    digitalWrite(33,LOW); 
    tmrpcm.play("om.wav");
    delay(27000);
    tmrpcm.play("h2.wav");
    delay(228000);
    digitalWrite(33,HIGH); 
      
    digitalWrite(22,LOW); 
    tmrpcm.play("music.wav");
    delay(11000);
    tmrpcm.play("h3.wav");
    delay(158000);
    digitalWrite(22,HIGH);
    
    digitalWrite(23,LOW); 
    tmrpcm.play("music.wav");
    delay(11000);
    tmrpcm.play("h4.wav");
    delay(229000);
    digitalWrite(23,HIGH);
    
    digitalWrite(24,LOW); 
    tmrpcm.play("music.wav");
    delay(11000);
    tmrpcm.play("h5.wav");
    delay(199000);
    digitalWrite(24,HIGH);
    
    digitalWrite(25,LOW); 
    tmrpcm.play("music.wav");
    delay(11000);
    tmrpcm.play("h6.wav");
    delay(72000);
    digitalWrite(25,HIGH);
    
    digitalWrite(26,LOW); 
    tmrpcm.play("music.wav");
    delay(11000);
    tmrpcm.play("h7.wav");
    delay(103000);
    digitalWrite(26,HIGH);

    digitalWrite(27,LOW); 
    tmrpcm.play("music.wav");
    delay(11000);
    tmrpcm.play("h8.wav");
    delay(131000);
    digitalWrite(27,HIGH);

    digitalWrite(28,LOW); 
    tmrpcm.play("music.wav");
    delay(11000);
    tmrpcm.play("h9.wav");
    delay(366000);
    digitalWrite(28,HIGH);

    digitalWrite(29,LOW); 
    tmrpcm.play("music.wav");
    delay(11000);
    tmrpcm.play("h10.wav");
    delay(281000);
    digitalWrite(29,HIGH);

    digitalWrite(30,LOW); 
    tmrpcm.play("music.wav");
    delay(11000);
    tmrpcm.play("h11.wav");
    delay(130000);
    digitalWrite(30,HIGH);

    digitalWrite(31,LOW); 
    tmrpcm.play("music.wav");
    delay(11000);
    tmrpcm.play("h12.wav");
    delay(229000);
    tmrpcm.play("h13.wav");
    delay(84000);
    digitalWrite(31,HIGH);

    digitalWrite(34,LOW); 
    tmrpcm.play("music.wav");
    delay(11000);
    tmrpcm.play("h14.wav");
    delay(101000);
    digitalWrite(34,HIGH);

    digitalWrite(35,LOW); 
     tmrpcm.play("music.wav");
    delay(11000);
    tmrpcm.play("h15.wav");
    delay(239000);
    digitalWrite(35,HIGH);
  }
    
    else if(digitalRead(kannad)==0)
    {
    digitalWrite(22,HIGH);
 digitalWrite(23,HIGH);
 digitalWrite(24,HIGH);
 digitalWrite(25,HIGH);
 digitalWrite(26,HIGH);
 digitalWrite(27,HIGH);
 digitalWrite(28,HIGH);
 digitalWrite(29,HIGH);
 digitalWrite(30,HIGH);
 digitalWrite(31,HIGH);
 digitalWrite(32,HIGH);
 digitalWrite(33,HIGH);
 digitalWrite(34,HIGH);
 digitalWrite(35,HIGH);
 delay(500);
      tmrpcm.play("km.wav");
        delay(3000);
     digitalWrite(32,LOW);
     
    tmrpcm.play("ks.wav");
    delay(44000);
    tmrpcm.play("k1.wav");
    delay(45000);
    digitalWrite(32,HIGH);
    
    digitalWrite(33,LOW); 
    tmrpcm.play("om.wav");
    delay(27000);
    tmrpcm.play("k2.wav");
    delay(228000);
    digitalWrite(33,HIGH); 
      
    digitalWrite(22,LOW); 
    tmrpcm.play("music.wav");
    delay(11000);
    tmrpcm.play("k3.wav");
    delay(158000);
    digitalWrite(22,HIGH);
    
    digitalWrite(23,LOW); 
    tmrpcm.play("music.wav");
    delay(11000);
    tmrpcm.play("k4.wav");
    delay(229000);
    digitalWrite(23,HIGH);
    
    digitalWrite(24,LOW); 
    tmrpcm.play("music.wav");
    delay(11000);
    tmrpcm.play("k5.wav");
    delay(199000);
    digitalWrite(24,HIGH);
    
    digitalWrite(25,LOW); 
    tmrpcm.play("music.wav");
    delay(11000);
    tmrpcm.play("k6.wav");
    delay(72000);
    digitalWrite(25,HIGH);
    
    digitalWrite(26,LOW); 
    tmrpcm.play("music.wav");
    delay(11000);
    tmrpcm.play("k7.wav");
    delay(103000);
    digitalWrite(26,HIGH);

    digitalWrite(27,LOW); 
    tmrpcm.play("music.wav");
    delay(11000);
    tmrpcm.play("k8.wav");
    delay(131000);
    digitalWrite(27,HIGH);

    digitalWrite(28,LOW); 
    tmrpcm.play("music.wav");
    delay(11000);
    tmrpcm.play("k9.wav");
    delay(366000);
    digitalWrite(28,HIGH);

    digitalWrite(29,LOW); 
    tmrpcm.play("music.wav");
    delay(11000);
    tmrpcm.play("k10.wav");
    delay(281000);
    digitalWrite(29,HIGH);

    digitalWrite(30,LOW); 
    tmrpcm.play("music.wav");
    delay(11000);
    tmrpcm.play("k11.wav");
    delay(130000);
    digitalWrite(30,HIGH);

    digitalWrite(31,LOW); 
    tmrpcm.play("music.wav");
    delay(11000);
    tmrpcm.play("k12a.wav");
    delay(229000);
    tmrpcm.play("k12b.wav");
    delay(84000);
    digitalWrite(31,HIGH);

    digitalWrite(34,LOW); 
    tmrpcm.play("music.wav");
    delay(11000);
    tmrpcm.play("k13.wav");
    delay(101000);
    digitalWrite(34,HIGH);

    digitalWrite(35,LOW); 
     tmrpcm.play("music.wav");
    delay(11000);
    tmrpcm.play("k14.wav");
    delay(239000);
    digitalWrite(35,HIGH);
  }
    else if(digitalRead(telgu)==0)
    {
 digitalWrite(22,HIGH);
 digitalWrite(23,HIGH);
 digitalWrite(24,HIGH);
 digitalWrite(25,HIGH);
 digitalWrite(26,HIGH);
 digitalWrite(27,HIGH);
 digitalWrite(28,HIGH);
 digitalWrite(29,HIGH);
 digitalWrite(30,HIGH);
 digitalWrite(31,HIGH);
 digitalWrite(32,HIGH);
 digitalWrite(33,HIGH);
 digitalWrite(34,HIGH);
 digitalWrite(35,HIGH);
 delay(500);
    tmrpcm.play("tm.wav");
        delay(3000);
     digitalWrite(32,LOW);
     tmrpcm.play("ts46.wav");
    delay(46000);
    
    tmrpcm.play("t1.wav");
    delay(105000);
    digitalWrite(32,HIGH);
    
    digitalWrite(33,LOW); 
    tmrpcm.play("om.wav");
    delay(27000);
    tmrpcm.play("t2.wav");
    delay(148000);
    digitalWrite(33,HIGH); 
      
    digitalWrite(22,LOW); 
    tmrpcm.play("music.wav");
    delay(11000);
    tmrpcm.play("t3.wav");
    delay(185000);
    digitalWrite(22,HIGH);
    
    digitalWrite(23,LOW); 
    tmrpcm.play("music.wav");
    delay(11000);
    tmrpcm.play("t4.wav");
    delay(285000);
    digitalWrite(23,HIGH);
    
    digitalWrite(24,LOW); 
    tmrpcm.play("music.wav");
    delay(11000);
    tmrpcm.play("t5.wav");
    delay(194000);
    digitalWrite(24,HIGH);
    
    digitalWrite(25,LOW); 
    tmrpcm.play("music.wav");
    delay(11000);
    tmrpcm.play("t6.wav");
    delay(72000);
    digitalWrite(25,HIGH);
    
    digitalWrite(26,LOW); 
    tmrpcm.play("music.wav");
    delay(11000);
    tmrpcm.play("t7.wav");
    delay(103000);
    digitalWrite(26,HIGH);

    digitalWrite(27,LOW); 
    tmrpcm.play("music.wav");
    delay(11000);
    tmrpcm.play("t8.wav");
    delay(131000);
    digitalWrite(27,HIGH);

    digitalWrite(28,LOW); 
    tmrpcm.play("music.wav");
    delay(11000);
    tmrpcm.play("t9.wav");
    delay(366000);
    digitalWrite(28,HIGH);

    digitalWrite(29,LOW); 
    tmrpcm.play("music.wav");
    delay(11000);
    tmrpcm.play("t10.wav");
    delay(281000);
    digitalWrite(29,HIGH);

    digitalWrite(30,LOW); 
    tmrpcm.play("music.wav");
    delay(11000);
    tmrpcm.play("t11.wav");
    delay(130000);
    digitalWrite(30,HIGH);

    digitalWrite(31,LOW); 
    tmrpcm.play("music.wav");
    delay(11000);
    tmrpcm.play("t12.wav");
    delay(229000);
    tmrpcm.play("t13.wav");
    delay(84000);
    digitalWrite(31,HIGH);

    digitalWrite(34,LOW); 
    tmrpcm.play("music.wav");
    delay(11000);
    tmrpcm.play("t14.wav");
    delay(101000);
    digitalWrite(34,HIGH);

    digitalWrite(35,LOW); 
     tmrpcm.play("music.wav");
    delay(11000);
    tmrpcm.play("t15.wav");
    delay(239000);
    digitalWrite(35,HIGH);
  }
   
  else if(digitalRead(english)==0)
     {
        
    digitalWrite(22,HIGH);
 digitalWrite(23,HIGH);
 digitalWrite(24,HIGH);
 digitalWrite(25,HIGH);
 digitalWrite(26,HIGH);
 digitalWrite(27,HIGH);
 digitalWrite(28,HIGH);
 digitalWrite(29,HIGH);
 digitalWrite(30,HIGH);
 digitalWrite(31,HIGH);
 digitalWrite(32,HIGH);
 digitalWrite(33,HIGH);
 digitalWrite(34,HIGH);
 digitalWrite(35,HIGH);
 delay(500);
     tmrpcm.play("em.wav");
        delay(3000);
     digitalWrite(32,LOW);
     tmrpcm.play("es29.wav");
    delay(29000);
    tmrpcm.play("e1.wav");
    delay(44000);
    digitalWrite(32,HIGH);
    
    digitalWrite(33,LOW); 
    tmrpcm.play("om.wav");
    delay(27000);
    tmrpcm.play("e2.wav");
    delay(67000);
    digitalWrite(33,HIGH); 
      
    digitalWrite(22,LOW); 
    tmrpcm.play("music.wav");
    delay(11000);
    tmrpcm.play("e3.wav");
    delay(92000);
    digitalWrite(22,HIGH);
    
    digitalWrite(23,LOW); 
    tmrpcm.play("music.wav");
    delay(11000);
    tmrpcm.play("e4.wav");
    delay(179000);
    digitalWrite(23,HIGH);
    
    digitalWrite(24,LOW); 
    tmrpcm.play("music.wav");
    delay(11000);
    tmrpcm.play("e5.wav");
    delay(77000);
    digitalWrite(24,HIGH);
    
    digitalWrite(25,LOW); 
    tmrpcm.play("music.wav");
    delay(11000);
    tmrpcm.play("e6.wav");
    delay(76000);
    digitalWrite(25,HIGH);
    
    digitalWrite(26,LOW); 
    tmrpcm.play("music.wav");
    delay(11000);
    tmrpcm.play("e7.wav");
    delay(84000);
    digitalWrite(26,HIGH);

    digitalWrite(27,LOW); 
    tmrpcm.play("music.wav");
    delay(11000);
    tmrpcm.play("e8.wav");
    delay(105000);
    digitalWrite(27,HIGH);

    digitalWrite(28,LOW); 
    tmrpcm.play("music.wav");
    delay(11000);
    tmrpcm.play("e9.wav");
    delay(107000);
    digitalWrite(28,HIGH);

    digitalWrite(29,LOW); 
    tmrpcm.play("music.wav");
    delay(11000);
    tmrpcm.play("e10.wav");
    delay(194000);
    digitalWrite(29,HIGH);

    digitalWrite(30,LOW); 
    tmrpcm.play("music.wav");
    delay(11000);
    tmrpcm.play("e11.wav");
    delay(137000);
    digitalWrite(30,HIGH);

    digitalWrite(31,LOW); 
    tmrpcm.play("music.wav");
    delay(11000);
    tmrpcm.play("e12.wav");
    delay(113000);
    tmrpcm.play("e13.wav");
    delay(85000);
    digitalWrite(31,HIGH);

    digitalWrite(34,LOW); 
    tmrpcm.play("music.wav");
    delay(11000);
    tmrpcm.play("e14.wav");
    delay(69000);
    digitalWrite(34,HIGH);

    digitalWrite(35,LOW); 
     tmrpcm.play("music.wav");
    delay(11000);
    tmrpcm.play("e15.wav");
    delay(87000);
    digitalWrite(35,HIGH);
  }
  }
}
