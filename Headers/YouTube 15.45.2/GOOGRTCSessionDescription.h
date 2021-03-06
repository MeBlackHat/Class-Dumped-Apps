//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface GOOGRTCSessionDescription : NSObject
{
    long long _type;
    NSString *_sdp;
}

+ (long long)typeForStdString:(const basic_string_90719d97 *)arg1;
+ (basic_string_90719d97)stdStringForType:(long long)arg1;
+ (long long)typeForString:(id)arg1;
+ (id)stringForType:(long long)arg1;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *sdp; // @synthesize sdp=_sdp;
@property(readonly, nonatomic) long long type; // @synthesize type=_type;
- (id)initWithNativeDescription:(const struct SessionDescriptionInterface *)arg1;
@property(readonly, nonatomic) struct SessionDescriptionInterface *nativeDescription;
- (id)description;
- (id)initWithType:(long long)arg1 sdp:(id)arg2;
- (id)stringForAttributeKey:(unsigned long long)arg1;
- (id)removeAttributeString:(id)arg1 fromLine:(id)arg2;
- (long long)nextVideoMetadataIndexInLines:(id)arg1 fromStartLineIndex:(long long)arg2;
- (id)descriptionWithPreferredVideoCodec:(id)arg1 fromStartLineIndex:(long long)arg2 sdpString:(id)arg3 preferredCodec:(_Bool)arg4;
- (id)descriptionForCodec:(id)arg1 withAttributeString:(id)arg2 value:(id)arg3;
- (id)descriptionForCodec:(id)arg1 withAttributesValues:(id)arg2;
- (id)descriptionWithPreferredVideoCodec:(id)arg1;

@end

