//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate;

@interface CYFMotionModel : NSObject
{
    _Bool _touch;
    double _agx;
    double _agy;
    double _agz;
    double _ax;
    double _ay;
    double _az;
    double _rx;
    double _ry;
    double _rz;
    NSDate *_timestamp;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool touch; // @synthesize touch=_touch;
@property(retain, nonatomic) NSDate *timestamp; // @synthesize timestamp=_timestamp;
@property(nonatomic) double rz; // @synthesize rz=_rz;
@property(nonatomic) double ry; // @synthesize ry=_ry;
@property(nonatomic) double rx; // @synthesize rx=_rx;
@property(nonatomic) double az; // @synthesize az=_az;
@property(nonatomic) double ay; // @synthesize ay=_ay;
@property(nonatomic) double ax; // @synthesize ax=_ax;
@property(nonatomic) double agz; // @synthesize agz=_agz;
@property(nonatomic) double agy; // @synthesize agy=_agy;
@property(nonatomic) double agx; // @synthesize agx=_agx;

@end

