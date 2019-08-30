/* soapStub.h
   Generated by gSOAP 2.8.83 for sc.h

gSOAP XML Web services tools
Copyright (C) 2000-2018, Robert van Engelen, Genivia Inc. All Rights Reserved.
The soapcpp2 tool and its generated software are released under the GPL.
This program is released under the GPL with the additional exemption that
compiling, linking, and/or using OpenSSL is allowed.
--------------------------------------------------------------------------------
A commercial use license is available from Genivia Inc., contact@genivia.com
--------------------------------------------------------------------------------
*/


#ifndef soapStub_H
#define soapStub_H
#include "stdsoap2.h"
#if GSOAP_VERSION != 20883
# error "GSOAP VERSION 20883 MISMATCH IN GENERATED CODE VERSUS LIBRARY CODE: PLEASE REINSTALL PACKAGE"
#endif

#ifdef __cplusplus
extern "C" {
#endif

/******************************************************************************\
 *                                                                            *
 * Types with Custom Serializers                                              *
 *                                                                            *
\******************************************************************************/


/******************************************************************************\
 *                                                                            *
 * Structs and Unions                                                         *
 *                                                                            *
\******************************************************************************/

struct ns1__invokeResponse;	/* sc.h:233 */
struct ns1__invoke;	/* sc.h:233 */

/* sc.h:233 */
#ifndef SOAP_TYPE_ns1__invokeResponse
#define SOAP_TYPE_ns1__invokeResponse (10)
/* complex XML schema type 'ns1:invokeResponse': */
struct ns1__invokeResponse {
        /** Optional element 'invokeReturn' of XML schema type 'SOAP-ENC:string' */
        char **_invokeReturn;
};
#endif

/* sc.h:233 */
#ifndef SOAP_TYPE_ns1__invoke
#define SOAP_TYPE_ns1__invoke (11)
/* complex XML schema type 'ns1:invoke': */
struct ns1__invoke {
        /** Optional element 'xmlData' of XML schema type 'SOAP-ENC:string' */
        char *_xmlData;
};
#endif

/* sc.h:246 */
#ifndef WITH_NOGLOBAL
#ifndef SOAP_TYPE_SOAP_ENV__Header
#define SOAP_TYPE_SOAP_ENV__Header (12)
/* SOAP_ENV__Header: */
struct SOAP_ENV__Header {
#ifdef WITH_NOEMPTYSTRUCT
	char dummy;	/* empty struct is a GNU extension */
#endif
};
#endif
#endif

/* sc.h:246 */
#ifndef WITH_NOGLOBAL
#ifndef SOAP_TYPE_SOAP_ENV__Code
#define SOAP_TYPE_SOAP_ENV__Code (13)
/* Type SOAP_ENV__Code is a recursive data type, (in)directly referencing itself through its (base or derived class) members */
/* SOAP_ENV__Code: */
struct SOAP_ENV__Code {
        /** Optional element 'SOAP-ENV:Value' of XML schema type 'xsd:QName' */
        char *SOAP_ENV__Value;
        /** Optional element 'SOAP-ENV:Subcode' of XML schema type 'SOAP-ENV:Code' */
        struct SOAP_ENV__Code *SOAP_ENV__Subcode;
};
#endif
#endif

/* sc.h:246 */
#ifndef WITH_NOGLOBAL
#ifndef SOAP_TYPE_SOAP_ENV__Detail
#define SOAP_TYPE_SOAP_ENV__Detail (15)
/* SOAP_ENV__Detail: */
struct SOAP_ENV__Detail {
        char *__any;
        /** Any type of element 'fault' assigned to fault with its SOAP_TYPE_<typename> assigned to __type */
        /** Do not create a cyclic data structure throught this member unless SOAP encoding or SOAP_XML_GRAPH are used for id-ref serialization */
        int __type;
        void *fault;
};
#endif
#endif

/* sc.h:246 */
#ifndef WITH_NOGLOBAL
#ifndef SOAP_TYPE_SOAP_ENV__Reason
#define SOAP_TYPE_SOAP_ENV__Reason (18)
/* SOAP_ENV__Reason: */
struct SOAP_ENV__Reason {
        /** Optional element 'SOAP-ENV:Text' of XML schema type 'xsd:string' */
        char *SOAP_ENV__Text;
};
#endif
#endif

/* sc.h:246 */
#ifndef WITH_NOGLOBAL
#ifndef SOAP_TYPE_SOAP_ENV__Fault
#define SOAP_TYPE_SOAP_ENV__Fault (19)
/* SOAP_ENV__Fault: */
struct SOAP_ENV__Fault {
        /** Optional element 'faultcode' of XML schema type 'xsd:QName' */
        char *faultcode;
        /** Optional element 'faultstring' of XML schema type 'xsd:string' */
        char *faultstring;
        /** Optional element 'faultactor' of XML schema type 'xsd:string' */
        char *faultactor;
        /** Optional element 'detail' of XML schema type 'SOAP-ENV:Detail' */
        struct SOAP_ENV__Detail *detail;
        /** Optional element 'SOAP-ENV:Code' of XML schema type 'SOAP-ENV:Code' */
        struct SOAP_ENV__Code *SOAP_ENV__Code;
        /** Optional element 'SOAP-ENV:Reason' of XML schema type 'SOAP-ENV:Reason' */
        struct SOAP_ENV__Reason *SOAP_ENV__Reason;
        /** Optional element 'SOAP-ENV:Node' of XML schema type 'xsd:string' */
        char *SOAP_ENV__Node;
        /** Optional element 'SOAP-ENV:Role' of XML schema type 'xsd:string' */
        char *SOAP_ENV__Role;
        /** Optional element 'SOAP-ENV:Detail' of XML schema type 'SOAP-ENV:Detail' */
        struct SOAP_ENV__Detail *SOAP_ENV__Detail;
};
#endif
#endif

/******************************************************************************\
 *                                                                            *
 * Typedefs                                                                   *
 *                                                                            *
\******************************************************************************/


/* (built-in):0 */
#ifndef SOAP_TYPE__XML
#define SOAP_TYPE__XML (5)
typedef char *_XML;
#endif

/* (built-in):0 */
#ifndef SOAP_TYPE__QName
#define SOAP_TYPE__QName (6)
typedef char *_QName;
#endif

/* sc.h:120 */
#ifndef SOAP_TYPE_SOAP_ENC__string
#define SOAP_TYPE_SOAP_ENC__string (7)
typedef char *SOAP_ENC__string;
#endif

/******************************************************************************\
 *                                                                            *
 * Serializable Types                                                         *
 *                                                                            *
\******************************************************************************/


/* char has binding name 'byte' for type 'xsd:byte' */
#ifndef SOAP_TYPE_byte
#define SOAP_TYPE_byte (3)
#endif

/* int has binding name 'int' for type 'xsd:int' */
#ifndef SOAP_TYPE_int
#define SOAP_TYPE_int (1)
#endif

/* struct SOAP_ENV__Fault has binding name 'SOAP_ENV__Fault' for type '' */
#ifndef SOAP_TYPE_SOAP_ENV__Fault
#define SOAP_TYPE_SOAP_ENV__Fault (19)
#endif

/* struct SOAP_ENV__Reason has binding name 'SOAP_ENV__Reason' for type '' */
#ifndef SOAP_TYPE_SOAP_ENV__Reason
#define SOAP_TYPE_SOAP_ENV__Reason (18)
#endif

/* struct SOAP_ENV__Detail has binding name 'SOAP_ENV__Detail' for type '' */
#ifndef SOAP_TYPE_SOAP_ENV__Detail
#define SOAP_TYPE_SOAP_ENV__Detail (15)
#endif

/* struct SOAP_ENV__Code has binding name 'SOAP_ENV__Code' for type '' */
#ifndef SOAP_TYPE_SOAP_ENV__Code
#define SOAP_TYPE_SOAP_ENV__Code (13)
#endif

/* struct SOAP_ENV__Header has binding name 'SOAP_ENV__Header' for type '' */
#ifndef SOAP_TYPE_SOAP_ENV__Header
#define SOAP_TYPE_SOAP_ENV__Header (12)
#endif

/* struct ns1__invoke has binding name 'ns1__invoke' for type 'ns1:invoke' */
#ifndef SOAP_TYPE_ns1__invoke
#define SOAP_TYPE_ns1__invoke (11)
#endif

/* struct ns1__invokeResponse has binding name 'ns1__invokeResponse' for type 'ns1:invokeResponse' */
#ifndef SOAP_TYPE_ns1__invokeResponse
#define SOAP_TYPE_ns1__invokeResponse (10)
#endif

/* struct SOAP_ENV__Reason * has binding name 'PointerToSOAP_ENV__Reason' for type '' */
#ifndef SOAP_TYPE_PointerToSOAP_ENV__Reason
#define SOAP_TYPE_PointerToSOAP_ENV__Reason (21)
#endif

/* struct SOAP_ENV__Detail * has binding name 'PointerToSOAP_ENV__Detail' for type '' */
#ifndef SOAP_TYPE_PointerToSOAP_ENV__Detail
#define SOAP_TYPE_PointerToSOAP_ENV__Detail (20)
#endif

/* struct SOAP_ENV__Code * has binding name 'PointerToSOAP_ENV__Code' for type '' */
#ifndef SOAP_TYPE_PointerToSOAP_ENV__Code
#define SOAP_TYPE_PointerToSOAP_ENV__Code (14)
#endif

/* char ** has binding name 'PointerToSOAP_ENC__string' for type 'SOAP-ENC:string' */
#ifndef SOAP_TYPE_PointerToSOAP_ENC__string
#define SOAP_TYPE_PointerToSOAP_ENC__string (8)
#endif

/* SOAP_ENC__string has binding name 'SOAP_ENC__string' for type 'SOAP-ENC:string' */
#ifndef SOAP_TYPE_SOAP_ENC__string
#define SOAP_TYPE_SOAP_ENC__string (7)
#endif

/* _QName has binding name '_QName' for type 'xsd:QName' */
#ifndef SOAP_TYPE__QName
#define SOAP_TYPE__QName (6)
#endif

/* _XML has binding name '_XML' for type '' */
#ifndef SOAP_TYPE__XML
#define SOAP_TYPE__XML (5)
#endif

/* char * has binding name 'string' for type 'xsd:string' */
#ifndef SOAP_TYPE_string
#define SOAP_TYPE_string (4)
#endif

/******************************************************************************\
 *                                                                            *
 * Externals                                                                  *
 *                                                                            *
\******************************************************************************/


/******************************************************************************\
 *                                                                            *
 * Client-Side Call Stub Functions                                            *
 *                                                                            *
\******************************************************************************/

    
    /** Web service synchronous operation 'soap_call_ns1__invoke' to the specified endpoint and SOAP Action header, returns SOAP_OK or error code */
    SOAP_FMAC5 int SOAP_FMAC6 soap_call_ns1__invoke(struct soap *soap, const char *soap_endpoint, const char *soap_action, char *_xmlData, char **_invokeReturn);
    /** Web service asynchronous operation 'soap_send_ns1__invoke' to send a request message to the specified endpoint and SOAP Action header, returns SOAP_OK or error code */
    SOAP_FMAC5 int SOAP_FMAC6 soap_send_ns1__invoke(struct soap *soap, const char *soap_endpoint, const char *soap_action, char *_xmlData);
    /** Web service asynchronous operation 'soap_recv_ns1__invoke' to receive a response message from the connected endpoint, returns SOAP_OK or error code */
    SOAP_FMAC5 int SOAP_FMAC6 soap_recv_ns1__invoke(struct soap *soap, char **_invokeReturn);

/******************************************************************************\
 *                                                                            *
 * Server-Side Operations                                                     *
 *                                                                            *
\******************************************************************************/

    /** Web service operation 'ns1__invoke' implementation, should return SOAP_OK or error code */
    SOAP_FMAC5 int SOAP_FMAC6 ns1__invoke(struct soap*, char *_xmlData, char **_invokeReturn);

/******************************************************************************\
 *                                                                            *
 * Server-Side Skeletons to Invoke Service Operations                         *
 *                                                                            *
\******************************************************************************/

SOAP_FMAC5 int SOAP_FMAC6 soap_serve(struct soap*);

SOAP_FMAC5 int SOAP_FMAC6 soap_serve_request(struct soap*);

SOAP_FMAC5 int SOAP_FMAC6 soap_serve_ns1__invoke(struct soap*);

#ifdef __cplusplus
}
#endif

#endif

/* End of soapStub.h */