#include <ti/devices/msp432p4xx/driverlib/driverlib.h>
#include "homework4.h"

int main(void)
{
    char rChar;
    char *response = "\n\n\r2534 is the best course in the curriculum!\r\n\n";

    // Declare the variables that main uses to interact with your state machine.


    // Stops the Watchdog timer.
    initBoard();
    // Declare a UART config struct as defined in uart.h.
    //       To begin, configure the UART for 9600 baud, 8-bit payload (LSB first), no parity, 1 stop bit.


    // Make sure Tx AND Rx pins of EUSCI_A0 work for UART and not as regular GPIO pins.


    // Initialize EUSCI_A0


    // Enable EUSCI_A0


    while(1)
    {
        // Check the receive interrupt flag to see if a received character is available.
        //       Return 0xFF if no character is available.


        // If an actual character was received, echo the character to the terminal AND use it to update the FSM.
        //       Check the transmit interrupt flag prior to transmitting the character.



        // If the FSM indicates a successful string entry, transmit the response string.
        //       Check the transmit interrupt flag prior to transmitting each character and moving on to the next one.
        //       Make sure to reset the success variable after transmission.


    }
}

void initBoard()
{
    WDT_A_hold(WDT_A_BASE);
}

// FSM for detecting character sequence.
bool charFSM(char rChar)
{
    bool finished = false;


    return finished;
}
