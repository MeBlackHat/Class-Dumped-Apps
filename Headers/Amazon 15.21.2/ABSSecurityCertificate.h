//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface ABSSecurityCertificate : NSObject
{
    struct __SecTrust *trust;
}

+ (id)certificateWithTrust:(struct __SecTrust *)arg1;
- (struct __SecTrust *)trust;
- (id)initWithTrust:(struct __SecTrust *)arg1;

@end

