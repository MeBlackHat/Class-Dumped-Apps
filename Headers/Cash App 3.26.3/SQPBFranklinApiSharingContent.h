//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

#import "UIActivityItemSource-Protocol.h"

@class NSString;

@interface SQPBFranklinApiSharingContent : GPBMessage <UIActivityItemSource>
{
}

+ (id)descriptor;
- (id)activityViewController:(id)arg1 subjectForActivityType:(id)arg2;
- (id)activityViewController:(id)arg1 itemForActivityType:(id)arg2;
- (id)activityViewControllerPlaceholderItem:(id)arg1;

// Remaining properties
@property(copy, nonatomic) NSString *URL; // @dynamic URL;
@property(readonly, copy) NSString *debugDescription;
@property(copy, nonatomic) NSString *defaultText; // @dynamic defaultText;
@property(readonly, copy) NSString *description;
@property(copy, nonatomic) NSString *directText; // @dynamic directText;
@property(copy, nonatomic) NSString *emailSubject; // @dynamic emailSubject;
@property(nonatomic) _Bool hasDefaultText; // @dynamic hasDefaultText;
@property(nonatomic) _Bool hasDirectText; // @dynamic hasDirectText;
@property(nonatomic) _Bool hasEmailSubject; // @dynamic hasEmailSubject;
@property(nonatomic) _Bool hasURL; // @dynamic hasURL;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

