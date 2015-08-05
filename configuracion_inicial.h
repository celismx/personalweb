
    void HardwareDefinitions(void)
    {
    //DEFINE PUSH BUTTONS
#define PUSH1  PORTDbits.RD3
#define TPUSH1 TRISDbits.TRISD3
        TPUSH1 = 1;
/*
#define TPUSH1   TRISBbits.TRISB4
#define TPUSH2   TRISBbits.TRISB7
#define TPUSH3   TRISBbits.TRISB6

    TPUSH1 = 1;
    TPUSH2 = 1;
    TPUSH3 = 1;

#define PUSH1   PORTBbits.RB4
#define PUSH2   PORTBbits.RB7
#define PUSH3   PORTBbits.RB6
*/
}