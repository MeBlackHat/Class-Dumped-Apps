//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface TVOAudioCodec : NSObject
{
    shared_ptr_d852d109 _coreAudioCodec;
}

@property(readonly, nonatomic) shared_ptr_d852d109 coreAudioCodec; // @synthesize coreAudioCodec=_coreAudioCodec;
- (id).cxx_construct;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
@property(readonly, copy, nonatomic) NSString *name;
- (id)initWithCoreAudioCodec:(shared_ptr_d852d109)arg1;
- (id)init;

@end

