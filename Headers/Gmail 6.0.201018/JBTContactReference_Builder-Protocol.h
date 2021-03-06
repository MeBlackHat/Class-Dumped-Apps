//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JavaObject-Protocol.h"

@class JBTOutboundEncryptionPrediction, NSString;
@protocol JBTContactReference, JBTContactReference_Builder, JBTSmimeCertificate;

@protocol JBTContactReference_Builder <JavaObject>
- (id <JBTContactReference>)build;
- (id <JBTContactReference_Builder>)setIsTlsPlaceholderWithBoolean:(_Bool)arg1;
- (id <JBTContactReference_Builder>)setSmimeCertificateWithJBTSmimeCertificate:(id <JBTSmimeCertificate>)arg1;
- (id <JBTContactReference_Builder>)setOutboundEncryptionPredictionWithJBTOutboundEncryptionPrediction:(JBTOutboundEncryptionPrediction *)arg1;
- (id <JBTContactReference_Builder>)setPhotoUrlWithNSString:(NSString *)arg1;
- (id <JBTContactReference_Builder>)setNameWithNSString:(NSString *)arg1;
- (id <JBTContactReference_Builder>)setEmailAddressWithNSString:(NSString *)arg1;
@end

