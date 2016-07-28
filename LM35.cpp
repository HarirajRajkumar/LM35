
/* .C Plus Plus file
 *  contains only the Function Definitions
 */


// Inlcude preprocessor directive

 #include "Arduino.h"
 #include "LM35.h"

  
           LM35Temp :: LM35Temp(byte TempPin)
           {
            _TempPin = TempPin ; // Here the TempPin is read from the user through  
           }

  // Function Definition
  
   /* Funcn 1
    *  Input : Gets input from the private base ie, _TempPin
    *  Output : Gives in float data type
    *  Funcn Name : float TempinFahren(void);
    *  
    */

  // Defining TempinFahren() funcn

   // Syntax =>  ClassName :: Funcnname ( parameters )

    float LM35Temp::TempinCelsius(void){
      
          float Temp_C =  (5.0 * analogRead(_TempPin) * 100.0) / 1024 ; // Formula to convert the LM35 input to Degree celsius
          return Temp_C ;
      }

    float LM35Temp::TempinFahren(void){
          float Temp_F = ((TempinCelsius() * 1.8) + 32);  // Standard formula to convert *C to *F.
          return Temp_F ;
    }
  
    int LM35Temp::TempinKelvin(void)
    {
      int Temp_K = TempinCelsius() + 273; // Standard Forumla to convert *C to Kelvin
      return Temp_K;
    }

    void LM35Temp::print_C(void)   // Print Temp in Celsius to the Serial monitor
    {
      Serial.print(TempinCelsius());
      Serial.print(" * C");
      Serial.println();
    }


    void LM35Temp::print_F(void)
    {
      Serial.print(TempinFahren());
      Serial.print(" * F");
      Serial.println();
    }

    void LM35Temp::print_K(void)
    {
      Serial.print(TempinKelvin());
      Serial.print(" * K");
      Serial.println();
    }

