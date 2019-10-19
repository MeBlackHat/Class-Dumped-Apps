//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate, NSString, WAUserJID;
@protocol WAServerDate;

@interface XMPPStatus : NSObject
{
    WAUserJID *_userJID;
    NSString *_aboutText;
    NSDate<WAServerDate> *_timestamp;
    unsigned long long _errorCode;
}

@property(readonly, nonatomic) unsigned long long errorCode; // @synthesize errorCode=_errorCode;
@property(readonly, nonatomic) NSDate<WAServerDate> *timestamp; // @synthesize timestamp=_timestamp;
@property(readonly, copy, nonatomic) NSString *aboutText; // @synthesize aboutText=_aboutText;
@property(readonly, nonatomic) WAUserJID *userJID; // @synthesize userJID=_userJID;
- (void).cxx_destruct;
- (id)initWithUserJID:(id)arg1 aboutText:(id)arg2 timestamp:(id)arg3;
- (id)initWithUserJID:(id)arg1 errorCode:(unsigned long long)arg2;

@end

