//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ServiceKnowledge/SCSWebServerResponse.h>

@class NSString;

@interface SCSWebServerFileResponse : SCSWebServerResponse
{
    NSString *_path;
    unsigned long long _offset;
    unsigned long long _size;
    int _file;
}

+ (id)responseWithFile:(id)arg1 byteRange:(struct _NSRange)arg2 isAttachment:(_Bool)arg3;
+ (id)responseWithFile:(id)arg1 byteRange:(struct _NSRange)arg2;
+ (id)responseWithFile:(id)arg1 isAttachment:(_Bool)arg2;
+ (id)responseWithFile:(id)arg1;
- (void).cxx_destruct;
- (id)description;
- (void)close;
- (id)readData:(id *)arg1;
- (_Bool)open:(id *)arg1;
- (id)initWithFile:(id)arg1 byteRange:(struct _NSRange)arg2 isAttachment:(_Bool)arg3;
- (id)initWithFile:(id)arg1 byteRange:(struct _NSRange)arg2;
- (id)initWithFile:(id)arg1 isAttachment:(_Bool)arg2;
- (id)initWithFile:(id)arg1;

@end

