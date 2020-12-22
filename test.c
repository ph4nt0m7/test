typedef struct 
{    
  // disable receive data
  unsigned tx:1;
  // program stopped
  unsigned StopProgramm:1;
  union {
    enum rx_state_e 
    {
      rxWaitS = 0, // wait Esc symbol
      rxWaitC = 1, // wait Start of frame
      rxReceive = 2, // receiving
      rxEsc = 3, // Esc received
    } rx_state;
    enum tx_state_e 
    {
      txSendS = 0, // send first byte of Start of frame
      txSendC = 1, // send second byte
      txSendN = 2, // send byte of data
      txEsc = 3,   // send escaped byte of data
      txEnd = 4,   // send End of frame
      txSendS2 = 5,// send first byte of Interrupt
      txBrk = 6,   // send second byte
    } tx_state;
  };
  uint8_t pos; // receive/send position
  uint8_t buf[128]; // offset = 3
  uint8_t txCnt; // size of send data
} dbg_t;
#define dbgG ((dbg_t*)DBG_ADDR) // адрес задан жестко, в настройках линкера эта часть озу убирается из доступной
