//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSError, WJ2Error;

@interface WJ2DeviceInformationFailureViewModel : NSObject
{
    NSError *_error;
    WJ2Error *_WJ2Error;
}

@property(readonly) WJ2Error *WJ2Error; // @synthesize WJ2Error=_WJ2Error;
@property(readonly) NSError *error; // @synthesize error=_error;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (id)initWithError:(id)arg1 andWJ2Error:(id)arg2;

@end

