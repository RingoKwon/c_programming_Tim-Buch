#include <stdio.h>
#include <stdlib.h>

int main()
{
    enum Company  { // DEFINING 
        GOOGLE, 
        FACEBOOK, 
        XEROX,
        YAHOO, 
        EBAY, 
        MICROSOFT
    }; // test
    
    enum Company xerox = XEROX; 
    enum Company google = GOOGLE; 
    enum Company ebay = EBAY; 
    
     
    printf("Xerox: %d\n", xerox);
    printf("Google: %d\n", google);
    printf("eBay: %d\n", ebay);
    
    
    return 0 ;
}

