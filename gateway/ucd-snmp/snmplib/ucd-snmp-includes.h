#include <stdio.h>
#include <sys/types.h>

#include <netinet/in.h>

/* uncomment if you don't have in_addr_t in netinet/in.h */
/* typedef u_int in_addr_t; */

#include <ucd-snmp/asn1.h>
#include <ucd-snmp/snmp_api.h>
#include <ucd-snmp/snmp_impl.h>
#include <ucd-snmp/snmp_client.h>
#include <ucd-snmp/mib.h>
#include <ucd-snmp/snmp.h>
