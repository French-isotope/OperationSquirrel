/********************************************************************************
 * @file    serial_port_handler.h
 * @author  Cameron Rose
 * @date    12/27/2023
 ********************************************************************************/
#ifndef SERIAL_PORT_HANDLER_H
#define SERIAL_PORT_HANDLER_H

/********************************************************************************
 * Includes
 ********************************************************************************/
#include "common_inc.h"

/********************************************************************************
 * Imported objects
 ********************************************************************************/

/********************************************************************************
 * Exported objects
 ********************************************************************************/

/********************************************************************************
 * Function prototypes
 ********************************************************************************/
class SerialPort
{
    public:
        SerialPort();
        ~SerialPort();

        void open_serial_port(void);
        void close_serial_port(void);
        void write_serial_port(uint8_t* buffer, uint16_t len);
        uint8_t read_serial_port(void);
        void offset_buffer(uint8_t* buffer, uint16_t &len, mavlink_message_t &msg);

    private:
        // Private member variables


        // Private member functions
        void clear_buffer(uint8_t* buffer, uint16_t len);
};


#endif // SERIAL_PORT_HANDLER_H