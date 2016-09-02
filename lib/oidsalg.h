/*
 * Copyright (c) 1999-2004 Apple Computer, Inc. All Rights Reserved.
 * 
 * @APPLE_LICENSE_HEADER_START@
 * 
 * This file contains Original Code and/or Modifications of Original Code
 * as defined in and that are subject to the Apple Public Source License
 * Version 2.0 (the 'License'). You may not use this file except in
 * compliance with the License. Please obtain a copy of the License at
 * http://www.opensource.apple.com/apsl/ and read it before using this
 * file.
 * 
 * The Original Code and all software distributed under the License are
 * distributed on an 'AS IS' basis, WITHOUT WARRANTY OF ANY KIND, EITHER
 * EXPRESS OR IMPLIED, AND APPLE HEREBY DISCLAIMS ALL SUCH WARRANTIES,
 * INCLUDING WITHOUT LIMITATION, ANY WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE, QUIET ENJOYMENT OR NON-INFRINGEMENT.
 * Please see the License for the specific language governing rights and
 * limitations under the License.
 * 
 * @APPLE_LICENSE_HEADER_END@
 *
 * oidsalg.h -- OIDs defining crypto algorithms
 */

#ifndef	_OIDS_ALG_H_
#define _OIDS_ALG_H_

#include <Security/cssmtype.h>

#ifdef	__cplusplus
extern "C" {
#endif

extern const CSSM_OID
	CSSMOID_MD2,
	CSSMOID_MD4,
	CSSMOID_MD5,
	CSSMOID_RSA,
	CSSMOID_MD2WithRSA,
	CSSMOID_MD4WithRSA,
	CSSMOID_MD5WithRSA,
	CSSMOID_SHA1WithRSA,
	CSSMOID_SHA224WithRSA,
	CSSMOID_SHA256WithRSA,
	CSSMOID_SHA384WithRSA,
	CSSMOID_SHA512WithRSA,
	CSSMOID_SHA1WithRSA_OIW,
	CSSMOID_DES_CBC,
	CSSMOID_ANSI_DH_PUB_NUMBER,
	CSSMOID_ANSI_DH_STATIC,
	CSSMOID_ANSI_DH_ONE_FLOW,
	CSSMOID_ANSI_DH_EPHEM,
	CSSMOID_ANSI_DH_HYBRID1,
	CSSMOID_ANSI_DH_HYBRID2,
	CSSMOID_ANSI_DH_HYBRID_ONEFLOW,
	CSSMOID_ANSI_MQV1,
	CSSMOID_ANSI_MQV2,
	CSSMOID_ANSI_DH_STATIC_SHA1,
	CSSMOID_ANSI_DH_ONE_FLOW_SHA1,
	CSSMOID_ANSI_DH_EPHEM_SHA1,
	CSSMOID_ANSI_DH_HYBRID1_SHA1,
	CSSMOID_ANSI_DH_HYBRID2_SHA1,
	CSSMOID_ANSI_MQV1_SHA1,
	CSSMOID_ANSI_MQV2_SHA1,
	CSSMOID_PKCS3,
	CSSMOID_DH,
	CSSMOID_DSA,				// BSAFE only
	CSSMOID_DSA_CMS,			// X509/CMS
	CSSMOID_DSA_JDK,			// JDK 1.1
	CSSMOID_SHA1WithDSA,		// BSAFE
	CSSMOID_SHA1WithDSA_CMS,	// X509/CMS	
	CSSMOID_SHA1WithDSA_JDK,	// JDK 1.1
	CSSMOID_SHA1,
	CSSMOID_SHA224,
	CSSMOID_SHA256,
	CSSMOID_SHA384,
	CSSMOID_SHA512,
	CSSMOID_APPLE_ISIGN,
	CSSMOID_APPLE_X509_BASIC,
	CSSMOID_APPLE_TP_SSL,
	CSSMOID_APPLE_TP_LOCAL_CERT_GEN,
	CSSMOID_APPLE_TP_CSR_GEN,
	CSSMOID_APPLE_TP_REVOCATION_CRL,
	CSSMOID_APPLE_TP_REVOCATION_OCSP,
	CSSMOID_APPLE_TP_SMIME,
	CSSMOID_APPLE_TP_EAP,
	CSSMOID_APPLE_TP_CODE_SIGN,
	CSSMOID_APPLE_TP_IP_SEC,
	CSSMOID_APPLE_TP_ICHAT,
	CSSMOID_APPLE_FEE,
	CSSMOID_APPLE_ASC,
	CSSMOID_APPLE_FEE_MD5,
	CSSMOID_APPLE_FEE_SHA1,
	CSSMOID_APPLE_FEED,
	CSSMOID_APPLE_FEEDEXP,
	CSSMOID_APPLE_ECDSA,
	CSSMOID_DOTMAC_CERT,
	CSSMOID_DOTMAC_CERT_REQ,
	CSSMOID_DOTMAC_CERT_REQ_IDENTITY,
	CSSMOID_DOTMAC_CERT_REQ_EMAIL_SIGN,
	CSSMOID_DOTMAC_CERT_REQ_EMAIL_ENCRYPT,
	CSSMOID_DOTMAC_CERT_REQ_ARCHIVE_LIST,
	CSSMOID_DOTMAC_CERT_REQ_ARCHIVE_STORE,
	CSSMOID_DOTMAC_CERT_REQ_ARCHIVE_FETCH,
	CSSMOID_DOTMAC_CERT_REQ_ARCHIVE_REMOVE,
	CSSMOID_DOTMAC_CERT_REQ_VALUE_USERNAME,
	CSSMOID_DOTMAC_CERT_REQ_VALUE_PASSWORD,
	CSSMOID_DOTMAC_CERT_REQ_VALUE_HOSTNAME,
	CSSMOID_DOTMAC_CERT_REQ_VALUE_RENEW,
	CSSMOID_DOTMAC_CERT_REQ_VALUE_ASYNC,
	CSSMOID_DOTMAC_CERT_REQ_VALUE_IS_PENDING,
	CSSMOID_PKCS5_DIGEST_ALG,
	CSSMOID_PKCS5_ENCRYPT_ALG,
	CSSMOID_PKCS5_HMAC_SHA1,
	CSSMOID_PKCS5_pbeWithMD2AndDES,
	CSSMOID_PKCS5_pbeWithMD2AndRC2,
	CSSMOID_PKCS5_pbeWithMD5AndDES,
	CSSMOID_PKCS5_pbeWithMD5AndRC2,
	CSSMOID_PKCS5_pbeWithSHA1AndDES,
	CSSMOID_PKCS5_pbeWithSHA1AndRC2,
	CSSMOID_PKCS5_PBKDF2,
	CSSMOID_PKCS5_PBES2,
	CSSMOID_PKCS5_PBMAC1,
	CSSMOID_PKCS5_RC2_CBC,
	CSSMOID_PKCS5_DES_EDE3_CBC,
	CSSMOID_PKCS5_RC5_CBC,
	CSSMOID_PKCS12_pbeWithSHAAnd128BitRC4,
	CSSMOID_PKCS12_pbeWithSHAAnd40BitRC4,
	CSSMOID_PKCS12_pbeWithSHAAnd3Key3DESCBC,
	CSSMOID_PKCS12_pbeWithSHAAnd2Key3DESCBC,
	CSSMOID_PKCS12_pbeWithSHAAnd128BitRC2CBC,
	CSSMOID_PKCS12_pbewithSHAAnd40BitRC2CBC;

#ifdef	__cplusplus
}
#endif

#endif	/* _OIDS_ALG_H_ */
