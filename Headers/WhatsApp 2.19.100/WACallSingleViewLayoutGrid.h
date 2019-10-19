//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "WACallSingleVideoViewLayout-Protocol.h"

@interface WACallSingleViewLayoutGrid : NSObject <WACallSingleVideoViewLayout>
{
    long long _position;
    long long _total;
}

@property(readonly, nonatomic) long long gridTotal;
@property(readonly, nonatomic) long long gridPosition;
@property(readonly, nonatomic, getter=isFullscreen) _Bool fullscreen;
@property(readonly, nonatomic, getter=isGrid) _Bool grid;
- (id)initWithPosition:(unsigned long long)arg1 total:(unsigned long long)arg2;

@end

