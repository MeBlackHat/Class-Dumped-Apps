//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, TVOAudioSessionProxy;

@interface TVOMediaFactory : NSObject
{
    scoped_refptr_0271d9ef _coreAudioDevice;
    scoped_refptr_8b29514b _audioSource;
    NSMutableArray *_owners;
    shared_ptr_984c8be7 _coreFactory;
}

+ (void)setAudioDeviceForTest:(id)arg1;
+ (id)getInstance;
+ (id)audioDevice;
+ (void)setAudioDevice:(id)arg1;
+ (void)removeOwner:(id)arg1;
+ (id)instanceWithOwner:(id)arg1 audioDevice:(scoped_refptr_0271d9ef)arg2;
+ (id)instanceWithOwner:(id)arg1;
@property(retain, nonatomic) NSMutableArray *owners; // @synthesize owners=_owners;
@property(readonly, nonatomic) scoped_refptr_8b29514b audioSource; // @synthesize audioSource=_audioSource;
@property(nonatomic) scoped_refptr_0271d9ef coreAudioDevice; // @synthesize coreAudioDevice=_coreAudioDevice;
@property(nonatomic) shared_ptr_984c8be7 coreFactory; // @synthesize coreFactory=_coreFactory;
- (id).cxx_construct;
- (void).cxx_destruct;
- (int)stopRecording;
- (int)startRecording;
@property(readonly, nonatomic) TVOAudioSessionProxy *audioSessionProxy;
- (shared_ptr_1ecc81f6)createCoreAudioTrack:(_Bool)arg1 options:(id)arg2 name:(id)arg3;
- (void)dealloc;
- (id)initWithOptions:(id)arg1;
- (id)init;

@end

