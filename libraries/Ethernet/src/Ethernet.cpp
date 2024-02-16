#include <EthernetC33.h>
#include "EthernetDriver.h"

static void* driver_malloc(size_t size) {

    return mem_malloc(size);
}

EthernetC33Driver<3,3> EthernetDriver(driver_malloc, 1536);
CEth Ethernet(&EthernetDriver);

void _irq_ether_callback(ether_callback_args_t* p_args) {
    // _IRQEtherHandler* context = (_IRQEtherHandler*)p_args->p_context;
        // dynamic_cast<_IRQEtherHandler*>(p_args->p_context);
    // EthernetC33Driver* context =
        // dynamic_cast<EthernetC33Driver*>(p_args->p_context);
        // (EthernetC33Driver<>*)p_args->p_context;

    EthernetDriver.irq_ether_callback(p_args);
}