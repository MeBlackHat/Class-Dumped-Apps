//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface IGBrushSizeModel : NSObject
{
    double _defaultSize;
    double _minimum;
    double _maximum;
}

+ (id)fromJSON:(id)arg1;
@property(readonly, nonatomic) double maximum; // @synthesize maximum=_maximum;
@property(readonly, nonatomic) double minimum; // @synthesize minimum=_minimum;
@property(readonly, nonatomic) double defaultSize; // @synthesize defaultSize=_defaultSize;
- (id)_initWithJSON:(id)arg1;

@end

