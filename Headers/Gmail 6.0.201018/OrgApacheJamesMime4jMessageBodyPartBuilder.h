//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "OrgApacheJamesMime4jInternalAbstractEntityBuilder.h"

@protocol OrgApacheJamesMime4jMessageBodyFactory;

@interface OrgApacheJamesMime4jMessageBodyPartBuilder : OrgApacheJamesMime4jInternalAbstractEntityBuilder
{
    id <OrgApacheJamesMime4jMessageBodyFactory> bodyFactory_;
}

- (void)dealloc;
- (id)build;
- (id)setBodyWithByteArray:(id)arg1 withNSString:(id)arg2;
- (id)setBodyWithNSString:(id)arg1 withNSString:(id)arg2 withJavaNioCharsetCharset:(id)arg3;
- (id)setBodyWithNSString:(id)arg1 withJavaNioCharsetCharset:(id)arg2;
- (id)setBodyWithOrgApacheJamesMime4jDomMessage:(id)arg1;
- (id)setBodyWithOrgApacheJamesMime4jDomMultipart:(id)arg1;
- (id)setBodyWithOrgApacheJamesMime4jDomBinaryBody:(id)arg1;
- (id)setBodyWithOrgApacheJamesMime4jDomTextBody:(id)arg1;
- (id)setBodyWithOrgApacheJamesMime4jDomBody:(id)arg1;
- (id)setContentDispositionWithNSString:(id)arg1 withNSString:(id)arg2 withLong:(long long)arg3 withJavaUtilDate:(id)arg4 withJavaUtilDate:(id)arg5 withJavaUtilDate:(id)arg6;
- (id)setContentDispositionWithNSString:(id)arg1 withNSString:(id)arg2 withLong:(long long)arg3;
- (id)setContentDispositionWithNSString:(id)arg1 withNSString:(id)arg2;
- (id)setContentDispositionWithNSString:(id)arg1;
- (id)setContentTypeWithNSString:(id)arg1 withOrgApacheJamesMime4jStreamNameValuePairArray:(id)arg2;
- (id)setContentTransferEncodingWithNSString:(id)arg1;
- (id)removeFieldsWithNSString:(id)arg1;
- (id)addFieldWithOrgApacheJamesMime4jStreamField:(id)arg1;
- (id)setFieldWithOrgApacheJamesMime4jStreamField:(id)arg1;
- (id)useWithOrgApacheJamesMime4jMessageBodyFactory:(id)arg1;

@end

