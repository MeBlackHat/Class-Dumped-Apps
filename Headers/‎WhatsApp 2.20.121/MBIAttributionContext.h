//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface MBIAttributionContext : NSObject
{
    unsigned int _currentToken;
    double _enqueueTime;
}

+ (id)currentContext;
+ (id)contextWithToken:(unsigned int)arg1;
@property(readonly, nonatomic) unsigned int currentToken; // @synthesize currentToken=_currentToken;
@property(nonatomic) double enqueueTime; // @synthesize enqueueTime=_enqueueTime;
- (id)initWithToken:(unsigned int)arg1;

@end

