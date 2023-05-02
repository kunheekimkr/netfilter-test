//libnet.h
/*
    original source: http://packetfactory.openwall.net/projects/libnet/
*/

#pragma once
#include <stdint.h>

/*
 *  IPv4 header
 *  Internet Protocol, version 4
 *  Static header size: 20 bytes
 */
struct libnet_ipv4_hdr
{

    uint8_t ip_hl:4;      /* header length */
    uint8_t ip_v:4;       /* version */ 
    uint8_t ip_tos;       /* type of service */
    uint16_t ip_len;         /* total length */
    uint16_t ip_id;          /* identification */
    uint16_t ip_off;
    uint8_t ip_ttl;          /* time to live */
    uint8_t ip_p;            /* protocol */
    uint16_t ip_sum;         /* checksum */
    uint8_t ip_src[4], ip_dst[4]; /* source and dest address */
};


/*
 *  TCP header
 *  Transmission Control Protocol
 *  Static header size: 20 bytes
 */
struct libnet_tcp_hdr
{
    uint16_t th_sport;       /* source port */
    uint16_t th_dport;       /* destination port */
    uint32_t th_seq;          /* sequence number */
    uint32_t th_ack;          /* acknowledgement number */
    uint8_t th_x2:4;         /* (unused) */
    uint8_t th_off:4;        /* data offset */
    uint8_t  th_flags;       /* control flags */
    uint16_t th_win;         /* window */
    uint16_t th_sum;         /* checksum */
    uint16_t th_urp;         /* urgent pointer */
};