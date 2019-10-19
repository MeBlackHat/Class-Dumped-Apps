//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate, NSString, WAUserJID;
@protocol WAServerDate;

@interface WAStatusViewerUser : NSObject
{
    WAUserJID *_userJID;
    NSString *_displayName;
    NSDate<WAServerDate> *_seenDate;
}

@property(readonly, copy, nonatomic) NSDate<WAServerDate> *seenDate; // @synthesize seenDate=_seenDate;
@property(readonly, copy, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
@property(readonly, nonatomic) WAUserJID *userJID; // @synthesize userJID=_userJID;
- (void).cxx_destruct;
- (id)initWithUserJID:(id)arg1 displayName:(id)arg2 seenDate:(id)arg3;

@end

