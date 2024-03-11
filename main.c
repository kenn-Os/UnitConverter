#include <stdio.h>

int main(){
    char category;
    int tempChoice;
    int currencyChoice;
    int massChoice;
    int userinputF; // user input fahrenheit
    int userinputC; // user input celsius
    int userinputUSDtoEuro; // User inputted for USD to Euro
    int userinputUSDtoJPY; // User inputted for USD to JPY
    int userinputUSDtoRMB; // User inputted for USD to RMB
    int userinputOunce; // User inputted for Ounce
    int userinputGram; // User inputted for Gram
    int fahrenheitToCelsius; // variable that stores the converted value F->Celsius
    int celsiusToFahrenheit; // variable that stores the converted value C->Fahrenheit
    float USDtoEuro; // variable that stores the converted USD->EURO
    float USDtoJPY; // variable that stores the converted USD->JPY
    float USDtoRMB; // variable that stores the converted USD->RMB
    float ounceToPounds; // stores the converted Ounce->Pounds
    float gramsToPounds; // stores the converted Grams->Pounds

    printf("Welcome to unit Converter!\n");
    printf("Here is a list of conversions to choose from:\n");
    printf("Temperature(T), Currency(C), MASS(M) \n");
    printf("Please enter the letter you want to convert. \n");
    scanf("%c", &category);

    if (category == 'T')
    {
        printf("Welcome to Temperature Converter! \n");
        printf("Here is a list of conversions to choose from:\n");
        printf("Enter 1 for Fahreheit to Celsius\n");
        printf("Enter 2 for Celsius to Fahreheit \n");
        scanf("%d", &tempChoice);
        if (tempChoice == 1)
        {
            printf("Please enter the Fahrenheit Degree: \n");
            scanf("%d", &userinputF);
            fahrenheitToCelsius = ((userinputF - 32) * (5.0/9.0));
            printf("Celsius: %d\n", fahrenheitToCelsius);
        }

         else if (tempChoice == 2)
        {
            printf("Please enter the Celsius Degree: \n");
            scanf("%d", &userinputC);
            celsiusToFahrenheit = ((userinputC * 9.0/5.0) + (32));
            printf("Fahrenheit: %d\n", celsiusToFahrenheit);
        }
        else 
        printf("Please enter the correct choice. \n");
    }
    else if (category == 'C')
    {
        printf("Welcome to Currency Converter! \n");
        printf("Here is a list of conversions to choose from:\n");
        printf("Enter 1 for USD to EURO \n");
        printf("Enter 2 for USD to JPY \n");
        printf("Enter 3 for USD to RMB \n");
        scanf("%d", &currencyChoice);
        if (currencyChoice == 1)
        {
            printf("Please enter the USD amount: \n");
            scanf("%d", &userinputUSDtoEuro);
            USDtoEuro = userinputUSDtoEuro * 0.93;
            // %.2f = rounds the float to only 2 decimal places
            printf("Euro: %.2f\n", USDtoEuro);
        }
        else if (currencyChoice == 2)
        {
             printf("Please enter the USD amount: \n");
            scanf("%d", &userinputUSDtoJPY);
            USDtoJPY = userinputUSDtoJPY * 139.54;
            // %.2f = rounds the float to only 2 decimal places
            printf("JPY: %.2f\n", USDtoJPY);
        }
        else if (currencyChoice == 3)
        {
             printf("Please enter the USD amount: \n");
            scanf("%d", &userinputUSDtoRMB);
            USDtoRMB = userinputUSDtoRMB * 7.07;
            // %.2f = rounds the float to only 2 decimal places
            printf("RMB: %.2f\n", USDtoRMB);
        }
        else
        printf("Please enter the correct choice. \n");
        
        
    }
    else if (category == 'M')
    {
      printf("Welcome to Mass Converter! \n");
        printf("Here is a list of conversions to choose from:\n");
        printf("Enter 1 for Ounces to Pounds \n");
        printf("Enter 2 for Grams to Pounds \n");
        scanf("%d", &massChoice);  
         if (massChoice == 1)
        {
            printf("Please enter the ounce amount: \n");
            scanf("%d", &userinputOunce);
            ounceToPounds = userinputOunce * 0.0625;
            // %.2f = rounds the float to only 2 decimal places
            printf("Ounces: %.2f\n", ounceToPounds);
        }
        else if (massChoice == 2)
         {
            printf("Please enter the Gram amount: \n");
            scanf("%d", &userinputGram);
            gramsToPounds = userinputGram * 0.00220462;
            // %.2f = rounds the float to only 2 decimal places
            printf("Grams: %.2f\n", gramsToPounds);
        }
    }

}

