//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "GRWCardDisplayStyle-Protocol.h"

@class NSString;

@interface GRWM1CardDisplayStyle : NSObject <GRWCardDisplayStyle>
{
}

- (_Bool)inlinesSheetIcon;
- (_Bool)hasRoundedCornersAsAlert;
- (_Bool)hasRoundIcon;
- (id)actionButtonForStyle:(unsigned long long)arg1 titleColor:(id)arg2 backgroundColor:(id)arg3 inkColor:(id)arg4;
- (id)actionButtonForStyle:(unsigned long long)arg1 primaryColor:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

