
#ifndef RS232CPM_H
#define RS232CPM_H

#include "../bus/bus.h"


#define FOLDERCHAR '/'

// Silly typedefs that runcpm uses
typedef unsigned char   uint8;
typedef unsigned short  uint16;
typedef unsigned int    uint32;

class rs232CPM : public virtualDevice
{
private:

    void rs232_status() override;
    void rs232_process(uint32_t commanddata, uint8_t checksum) override;

public:
    bool cpmActive = false; 
    void init_cpm(int baud);
    void rs232_handle_cpm();
    
};

#endif /* RS232CPM_H */