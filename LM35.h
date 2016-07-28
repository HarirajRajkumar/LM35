
/* .Header File
 *  Contains only the Declaration
 */


#ifndef LM35_h    //PreProcessor Directive
#define LM35_h

#include "Arduino.h"


 class LM35Temp{

  /* Class includes two sujects
   *  No 1 is Class Declaration 
   *  and the other one is
   *  Class Implementation ( defining funcn )
   */

  // Number "1"

  
  private :  // This variable is only used by the class
  byte _TempPin ;

  
  public :   //  This constructor and funcn are called by the user to perform a task
      /*
       * Declare constructor
       * and 
       * Declare Funcn name with it's data type
       */
  // Declaring Constructor
       LM35Temp(byte TempPin );
  // Declaring Funcn 
    float TempinCelsius(void);
    float TempinFahren(void);
    int TempinKelvin(void);
    void print_C(void);
    void print_F(void);
    void print_K(void);
 };

  #endif
