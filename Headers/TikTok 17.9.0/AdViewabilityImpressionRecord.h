//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface AdViewabilityImpressionRecord : NSObject
{
    _Bool _meetsMRCStandard;
    _Bool _validViewableImpression;
}

@property(readonly, nonatomic, getter=isValidViewableImpression) _Bool validViewableImpression; // @synthesize validViewableImpression=_validViewableImpression;
@property(readonly, nonatomic) _Bool meetsMRCStandard; // @synthesize meetsMRCStandard=_meetsMRCStandard;
- (id)initWithMeetsMRCStandard:(_Bool)arg1 isValidViewableImpression:(_Bool)arg2;

@end

