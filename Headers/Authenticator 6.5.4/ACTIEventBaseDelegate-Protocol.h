//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AriaObjC/NSObject-Protocol.h>

@class ACTEventBase, NSArray, NSString;

@protocol ACTIEventBaseDelegate <NSObject>
- (void)intakeMultiple:(NSArray *)arg1;
- (void)intake:(ACTEventBase *)arg1;
- (NSString *)componentName;
@end

