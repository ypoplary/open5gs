/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "S1AP-IEs"
 * 	found in "../support/r14.4.0/36413-e40.asn"
 * 	`asn1c -pdu=all -fcompound-names -findirect-choice -fno-include-deps`
 */

#ifndef	_S1AP_RRC_Container_H_
#define	_S1AP_RRC_Container_H_


#include <asn_application.h>

/* Including external dependencies */
#include <OCTET_STRING.h>

#ifdef __cplusplus
extern "C" {
#endif

/* S1AP_RRC-Container */
typedef OCTET_STRING_t	 S1AP_RRC_Container_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_S1AP_RRC_Container;
asn_struct_free_f S1AP_RRC_Container_free;
asn_struct_print_f S1AP_RRC_Container_print;
asn_constr_check_f S1AP_RRC_Container_constraint;
ber_type_decoder_f S1AP_RRC_Container_decode_ber;
der_type_encoder_f S1AP_RRC_Container_encode_der;
xer_type_decoder_f S1AP_RRC_Container_decode_xer;
xer_type_encoder_f S1AP_RRC_Container_encode_xer;
oer_type_decoder_f S1AP_RRC_Container_decode_oer;
oer_type_encoder_f S1AP_RRC_Container_encode_oer;
per_type_decoder_f S1AP_RRC_Container_decode_uper;
per_type_encoder_f S1AP_RRC_Container_encode_uper;
per_type_decoder_f S1AP_RRC_Container_decode_aper;
per_type_encoder_f S1AP_RRC_Container_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _S1AP_RRC_Container_H_ */
#include <asn_internal.h>
