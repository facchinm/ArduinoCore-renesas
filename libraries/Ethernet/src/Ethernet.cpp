#include <EthernetC33.h>
#include "EthernetDriver.h"

EthernetC33Driver<2, 2> EthernetDriver(mem_malloc, 1536);
CEth Ethernet(&EthernetDriver);

void _irq_ether_callback(ether_callback_args_t* p_args) {
    // _IRQEtherHandler* context = (_IRQEtherHandler*)p_args->p_context;
        // dynamic_cast<_IRQEtherHandler*>(p_args->p_context);
    // EthernetC33Driver* context =
        // dynamic_cast<EthernetC33Driver*>(p_args->p_context);
        // (EthernetC33Driver<>*)p_args->p_context;

    EthernetDriver.irq_ether_callback(p_args);
}