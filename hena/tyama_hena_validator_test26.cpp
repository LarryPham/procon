#include <string>
void test(std::string input, std::string expect);
void testloader(){ //insert test cases here
/*0*/ test( "bdelmnouy", "5,7,9" );    
/*1*/ test( "a", "1,1,1" );    
/*2*/ test( "q", "1,1,1" );    
/*3*/ test( "t", "1,1,1" );    
/*4*/ test( "i", "1,1,1" );    
/*5*/ test( "fg", "2,0,2" );    
/*6*/ test( "gh", "0,2,2" );    
/*7*/ test( "gm", "2,2,0" );    
/*8*/ test( "fgh", "1,1,3" );    
/*9*/ test( "fghm", "2,2,2" );    
/*10*/ test( "fhm", "3,3,3" );    
/*11*/ test( "bdfhjprx", "8,8,0" );    
/*12*/ test( "abcdfghm", "4,4,0" );    
/*13*/ test( "jklmqrst", "0,4,4" );    
/*14*/ test( "klmntuvw", "4,0,4" );    
/*15*/ test( "abcdefghijklmnopqrstuvwxy", "5,5,5" );    
/*16*/ test( "abcdefghijklmnoqrtvwxy", "6,8,4" );    
/*17*/ test( "abdefhijklnoprstvwxy", "10,8,4" );    
/*18*/ test( "acegikmoqsuwy", "13,13,5" );    
/*19*/ test( "bdfhjlnprtvxy", "13,11,1" );    
/*20*/ test( "abdegijlnpqsuwy", "15,15,15" );    
/*21*/ test( "aefghiqrstuvwxy", "3,3,15" );    
/*22*/ test( "cfhkmoqrstuvwxy", "7,7,15" );    
/*23*/ test( "cfhkmortvx", "10,10,10" );    
/*24*/ test( "no", "0,2,2" );    
/*25*/ test( "pwy", "3,3,3" );    
/*26*/ test( "iqwy", "4,4,4" );    
/*27*/ test( "lopuv", "3,3,5" );    
/*28*/ test( "abdjtw", "6,6,6" );    
/*29*/ test( "fgpstux", "5,3,5" );    
/*30*/ test( "dijlnotv", "6,8,2" );    
/*31*/ test( "bdefkmpwx", "5,9,3" );    
/*32*/ test( "bfghjlmuwx", "4,8,6" );    
/*33*/ test( "befghlopqrw", "5,7,9" );    
/*34*/ test( "bfgjklmnqsux", "8,6,8" );    
/*35*/ test( "fijklnpqstvwy", "9,9,9" );    
/*36*/ test( "abcdfgilmnrsuv", "8,6,6" );    
/*37*/ test( "abcdegijklnpruw", "11,11,9" );    
/*38*/ test( "efgijkmnopqrtvwx", "6,8,4" );    
/*39*/ test( "abcdefghilopqrtwy", "9,9,7" );    
/*40*/ test( "abfghklmopqrsuvwxy", "8,6,12" );    
/*41*/ test( "abcdeghklmoprstuwxy", "9,7,7" );    
/*42*/ test( "abcdehijklmnopqrtwxy", "8,8,6" );    
/*43*/ test( "acdefghimnopqrstuvwxy", "7,3,9" );    
/*44*/ test( "abcfghijklmnopqrtuvwxy", "6,6,6" );    
/*45*/ test( "abcdefghijklmnoqrstuwxy", "5,7,7" );    
/*46*/ test( "abcdeghijklmnopqrstuvwxy", "6,6,6" );
}