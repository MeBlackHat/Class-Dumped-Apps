//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <FBSharedFramework/FBValueObject.h>

#import <FBSharedFramework/IGListDiffable-Protocol.h>
#import <FBSharedFramework/NSCoding-Protocol.h>
#import <FBSharedFramework/NSCopying-Protocol.h>

@class IGUser, NSString;

@interface IGCountdownStickerConsumptionModel : FBValueObject <IGListDiffable, NSCopying, NSCoding>
{
    _Bool _followingEnabled;
    _Bool _isViewerCountdownOwner;
    _Bool _isViewerFollowing;
    NSString *_pk;
    NSString *_text;
    NSString *_textColor;
    NSString *_startBackgroundColor;
    NSString *_endBackgroundColor;
    NSString *_digitColor;
    NSString *_digitCardColor;
    double _endUnixTimestamp;
    IGUser *_attributionUser;
}

+ (id)valueWithJSONDictionary:(id)arg1 objectStores:(id)arg2 error:(id *)arg3;
@property(readonly, nonatomic) _Bool isViewerFollowing; // @synthesize isViewerFollowing=_isViewerFollowing;
@property(readonly, nonatomic) _Bool isViewerCountdownOwner; // @synthesize isViewerCountdownOwner=_isViewerCountdownOwner;
@property(readonly, copy, nonatomic) IGUser *attributionUser; // @synthesize attributionUser=_attributionUser;
@property(readonly, nonatomic) _Bool followingEnabled; // @synthesize followingEnabled=_followingEnabled;
@property(readonly, nonatomic) double endUnixTimestamp; // @synthesize endUnixTimestamp=_endUnixTimestamp;
@property(readonly, copy, nonatomic) NSString *digitCardColor; // @synthesize digitCardColor=_digitCardColor;
@property(readonly, copy, nonatomic) NSString *digitColor; // @synthesize digitColor=_digitColor;
@property(readonly, copy, nonatomic) NSString *endBackgroundColor; // @synthesize endBackgroundColor=_endBackgroundColor;
@property(readonly, copy, nonatomic) NSString *startBackgroundColor; // @synthesize startBackgroundColor=_startBackgroundColor;
@property(readonly, copy, nonatomic) NSString *textColor; // @synthesize textColor=_textColor;
@property(readonly, copy, nonatomic) NSString *text; // @synthesize text=_text;
@property(readonly, copy, nonatomic) NSString *pk; // @synthesize pk=_pk;
- (void).cxx_destruct;
- (_Bool)isEqualToDiffableObject:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)diffIdentifier;
- (id)initWithPk:(id)arg1 text:(id)arg2 textColor:(id)arg3 startBackgroundColor:(id)arg4 endBackgroundColor:(id)arg5 digitColor:(id)arg6 digitCardColor:(id)arg7 endUnixTimestamp:(double)arg8 followingEnabled:(_Bool)arg9 attributionUser:(id)arg10 isViewerCountdownOwner:(_Bool)arg11 isViewerFollowing:(_Bool)arg12;
- (id)initWithCoder:(id)arg1;

@end

