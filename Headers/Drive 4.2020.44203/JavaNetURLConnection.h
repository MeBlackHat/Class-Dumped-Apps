//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class JavaNetURL, SunNetWwwMessageHeader;

@interface JavaNetURLConnection : NSObject
{
    JavaNetURL *url_;
    _Bool doInput_;
    _Bool doOutput_;
    _Bool allowUserInteraction_;
    _Bool useCaches_;
    long long ifModifiedSince_;
    _Bool connected_;
    int connectTimeout_;
    int readTimeout_;
    SunNetWwwMessageHeader *requests_;
}

+ (void)initialize;
+ (const struct J2ObjcClassInfo *)__metadata;
+ (long long)skipForwardWithJavaIoInputStream:(id)arg1 withLong:(long long)arg2;
+ (int)readBytesWithIntArray:(id)arg1 withInt:(int)arg2 withJavaIoInputStream:(id)arg3;
+ (_Bool)checkfpxWithJavaIoInputStream:(id)arg1;
+ (id)guessContentTypeFromStreamWithJavaIoInputStream:(id)arg1;
+ (id)guessContentTypeFromNameWithNSString:(id)arg1;
+ (void)setContentHandlerFactoryWithJavaNetContentHandlerFactory:(id)arg1;
+ (id)getDefaultRequestPropertyWithNSString:(id)arg1;
+ (void)setDefaultRequestPropertyWithNSString:(id)arg1 withNSString:(id)arg2;
+ (_Bool)getDefaultAllowUserInteraction;
+ (void)setDefaultAllowUserInteractionWithBoolean:(_Bool)arg1;
+ (void)setFileNameMapWithJavaNetFileNameMap:(id)arg1;
+ (id)getFileNameMap;
- (void)dealloc;
- (id)getContentHandlerPkgPrefixes;
- (id)typeToPackageNameWithNSString:(id)arg1;
- (id)lookupContentHandlerClassForWithNSString:(id)arg1;
- (id)stripOffParametersWithNSString:(id)arg1;
- (id)getContentHandler;
- (id)getRequestProperties;
- (id)getRequestPropertyWithNSString:(id)arg1;
- (void)addRequestPropertyWithNSString:(id)arg1 withNSString:(id)arg2;
- (void)setRequestPropertyWithNSString:(id)arg1 withNSString:(id)arg2;
- (void)setDefaultUseCachesWithBoolean:(_Bool)arg1;
- (_Bool)getDefaultUseCaches;
- (long long)getIfModifiedSince;
- (void)setIfModifiedSinceWithLong:(long long)arg1;
- (_Bool)getUseCaches;
- (void)setUseCachesWithBoolean:(_Bool)arg1;
- (_Bool)getAllowUserInteraction;
- (void)setAllowUserInteractionWithBoolean:(_Bool)arg1;
- (_Bool)getDoOutput;
- (void)setDoOutputWithBoolean:(_Bool)arg1;
- (_Bool)getDoInput;
- (void)setDoInputWithBoolean:(_Bool)arg1;
- (id)description;
- (id)getOutputStream;
- (id)getInputStream;
- (id)getPermission;
- (id)getContentWithIOSClassArray:(id)arg1;
- (id)getContent;
- (id)getHeaderFieldWithInt:(int)arg1;
- (id)getHeaderFieldKeyWithInt:(int)arg1;
- (long long)getHeaderFieldDateWithNSString:(id)arg1 withLong:(long long)arg2;
- (long long)getHeaderFieldLongWithNSString:(id)arg1 withLong:(long long)arg2;
- (int)getHeaderFieldIntWithNSString:(id)arg1 withInt:(int)arg2;
- (id)getHeaderFields;
- (id)getHeaderFieldWithNSString:(id)arg1;
- (long long)getLastModified;
- (long long)getDate;
- (long long)getExpiration;
- (id)getContentEncoding;
- (id)getContentType;
- (long long)getContentLengthLong;
- (int)getContentLength;
- (id)getURL;
- (id)initWithJavaNetURL:(id)arg1;
- (int)getReadTimeout;
- (void)setReadTimeoutWithInt:(int)arg1;
- (int)getConnectTimeout;
- (void)setConnectTimeoutWithInt:(int)arg1;
- (void)connect;

@end

