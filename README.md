# LM35
Reads the surrounding ambient temperature using LM35 and gives output in 3 different units.

1.Celsius

2.Fahrenheit

3.Kelvin

and even directly prints the Temperature (in *C , *F & K) to the serial monitor at the set baud rate.

#Functionality

This library contains 6 functions..
##Returning Functions.
 1.float TempinCelsius();
 
  Returns Celsius value in float datatype.. So use a variable to store the returned data .
  
 2.float TempinFahren();
 
  Returns Fahren value in float datatype.. So use a variable to store the returned data .
  
 3.int TempinKelvin();
 
  Returns Kelvin value in int datatype.. So use a variable to store the returned data .  
  
### Direct Using functions.    
      NOTE : Setup Serial.begin(); function before using these functions.. 
      
 4. print_C();  
 
   Prints temperature in celsius directly to the serial monitor.
   
  i.e OBJECT_NAME.print_C();

5.void print_F();

   Prints temperature in Fahrenheit directly to the serial monitor.
   
  i.e OBJECT_NAME.print_F();
  
  6.void print_K();
  
   Prints temperature in Kelvin directly to the serial monitor.
   
 
 Just an Arduino Startup.. Thank you   


