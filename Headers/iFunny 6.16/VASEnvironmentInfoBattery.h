//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface VASEnvironmentInfoBattery : NSObject
{
    _Bool _charging;
    double _level;
}

@property(nonatomic, getter=isCharging) _Bool charging; // @synthesize charging=_charging;
@property(nonatomic) double level; // @synthesize level=_level;
- (id)initWithLevel:(float)arg1 charging:(_Bool)arg2;

@end

