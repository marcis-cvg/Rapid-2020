import processing.serial.*;
import java.awt.Toolkit; 
int data;
String[] palabi = {
  "C://Users//Mārcis Andersons//Desktop//palabi.ahk"
};
String[] pakreisi = {
  "C://Users//Mārcis Andersons//Desktop//pakreisi.ahk"
};
String[] kreisakreisa = {
  "C://Users//Mārcis Andersons//Desktop//Makro pogas//Arduino//kreisakreisa.ahk"
};
String[] labalaba = {
  "C://Users//Mārcis Andersons//Desktop//Makro pogas//Arduino//labalaba.ahk"
};
String[] labavidus = {
  "C://Users//Mārcis Andersons//Desktop//Makro pogas//Arduino//labavidus.ahk"
};
String[] kreisavidus = {
  "C://Users//Mārcis Andersons//Desktop//Makro pogas//Arduino//kreisavidus.ahk"
};
String[] ofsetaugsa = {
  "C://Users//Mārcis Andersons//Desktop//Makro pogas//Arduino//ofsetaugsa.ahk"
};
String[] ofsetleja = {
  "C://Users//Mārcis Andersons//Desktop//Makro pogas//Arduino//ofsetleja.ahk"
};
String[] ofsetlaba = {
  "C://Users//Mārcis Andersons//Desktop//Makro pogas//Arduino/ofsetlaba.ahk"
};
String[] ofsetkreisa = {
  "C://Users//Mārcis Andersons//Desktop//Makro pogas//Arduino/ofsetkreisa.ahk"
};
String[] liftaugsa = {
  "C://Users//Mārcis Andersons//Desktop//Makro pogas//Arduino//liftaugsa.ahk"
};
String[] liftleja = {
  "C://Users//Mārcis Andersons//Desktop//Makro pogas//Arduino//liftleja.ahk"
};
String[] liftlaba = {
  "C://Users//Mārcis Andersons//Desktop//Makro pogas//Arduino/liftlaba.ahk"
};
String[] liftkreisa = {
  "C://Users//Mārcis Andersons//Desktop//Makro pogas//Arduino/liftkreisa.ahk"
};
String[] gainaugsa = {
  "C://Users//Mārcis Andersons//Desktop//Makro pogas//Arduino//gainaugsa.ahk"
};
String[] gainleja = {
  "C://Users//Mārcis Andersons//Desktop//Makro pogas//Arduino//gainleja.ahk"
};
String[] gainlaba = {
  "C://Users//Mārcis Andersons//Desktop//Makro pogas//Arduino/gainlaba.ahk"
};
String[] gainkreisa = {
  "C://Users//Mārcis Andersons//Desktop//Makro pogas//Arduino/gainkreisa.ahk"
};
String[] augsakreisa = {
  "C://Users//Mārcis Andersons//Desktop//Makro pogas//Arduino/augsakreisa.ahk"
};
String[] augsalaba = {
  "C://Users//Mārcis Andersons//Desktop//Makro pogas//Arduino/augsalaba.ahk"
};



String[] kreisaiskreisais = {
  "C://Users//Mārcis Andersons//Desktop//Makro pogas//Arduino/kreisaiskreisais.ahk"
};
String[] kreisaislabi = {
  "C://Users//Mārcis Andersons//Desktop//Makro pogas//Arduino/kreisaislabi.ahk"
};
String[] labaislabi = {
  "C://Users//Mārcis Andersons//Desktop//Makro pogas//Arduino/labaislabi.ahk"
};
String[] labaiskreisi = {
  "C://Users//Mārcis Andersons//Desktop//Makro pogas//Arduino/labaiskreisi.ahk"
};
Serial myPort;

void setup() {
  myPort = new Serial(this, "COM3", 9600);

  //launch(params);
}
void draw() {
  delay(1);
  println(data);
  switch(data) {
  case 1:
    launch(palabi); 
    break;

  case 2:
    launch(pakreisi); 
    break;

  case 3:
    launch(kreisakreisa); 
    break;

  case 4:
    launch(labalaba); 
    break;

  case 5:
    launch(labavidus); 
    break;

  case 6:
    launch(kreisavidus); 
    break;

  case 7:
    launch(ofsetaugsa); 
    break;

  case 8:
    launch(ofsetleja); 
    break;

  case 9:
    launch(ofsetlaba); 
    break;

  case 10:
    launch(ofsetkreisa); 
    break;

  case 11:
    launch(liftaugsa); 
    break;

  case 12:
    launch(liftleja); 
    break;

  case 14:
    launch(liftlaba); 
    break;

  case 13:
    launch(liftkreisa); 
    break;

  case 15:
    launch(gainaugsa); 
    break;

  case 16:
    launch(gainleja); 
    break;

  case 18:
    launch(gainlaba); 
    break;

  case 17:
    launch(gainkreisa); 
    break;

  case 19:
    launch(augsakreisa); 
    break;

  case 20:
    launch(augsalaba); 
    break;

  case 21:
    launch(labaislabi); 
    break;

  case 22:
    launch(labaiskreisi); 
    break;

  case 23:
    launch(kreisaislabi); 
    break;

  case 24:
    launch(kreisaiskreisais); 
    break;
  }
  data = 0;
}
void serialEvent (Serial myPort) {
  data = myPort.read();
}
