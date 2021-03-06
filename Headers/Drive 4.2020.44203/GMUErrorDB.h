//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface GMUErrorDB : NSObject
{
    NSMutableDictionary *_errorsForAssetID;
    NSMutableDictionary *_lastErrorDateforAssetID;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSMutableDictionary *lastErrorDateforAssetID; // @synthesize lastErrorDateforAssetID=_lastErrorDateforAssetID;
@property(readonly, nonatomic) NSMutableDictionary *errorsForAssetID; // @synthesize errorsForAssetID=_errorsForAssetID;
- (void)addError:(id)arg1 forAssetIdentifier:(id)arg2;
- (id)errorArrayForAssetIdentifier:(id)arg1;
- (id)errorMutableArrayForAssetIdentifier:(id)arg1;
- (id)init;

@end

