//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, VERecursiveMutex;
@protocol IVESequence;

@interface VEModelAdapter : NSObject
{
    struct NSMutableDictionary *_veFilterInfoDic;
    VERecursiveMutex *_filterInfoMutex;
    id <IVESequence> _vemodel;
}

@property(retain, nonatomic) id <IVESequence> vemodel; // @synthesize vemodel=_vemodel;
@property(retain, nonatomic) VERecursiveMutex *filterInfoMutex; // @synthesize filterInfoMutex=_filterInfoMutex;
@property(retain, nonatomic) NSMutableDictionary *veFilterInfoDic; // @synthesize veFilterInfoDic=_veFilterInfoDic;
- (void).cxx_destruct;
- (id)init;

@end

