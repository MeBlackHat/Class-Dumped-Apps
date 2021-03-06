//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <AnalyticsFramework/NSCoding-Protocol.h>
#import <AnalyticsFramework/NSCopying-Protocol.h>
#import <AnalyticsFramework/TBase-Protocol.h>

@class NSMutableArray, NSString;

@interface AnalyticsCategoryHeader : NSObject <TBase, NSCoding, NSCopying>
{
    _Bool _idIsSet;
    _Bool _nameIsSet;
    _Bool _subreddit_idsIsSet;
    _Bool _subreddit_namesIsSet;
    NSString *_id;
    NSString *_name;
    NSMutableArray *_subreddit_ids;
    NSMutableArray *_subreddit_names;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool subreddit_namesIsSet; // @synthesize subreddit_namesIsSet=_subreddit_namesIsSet;
@property(retain, nonatomic) NSMutableArray *subreddit_names; // @synthesize subreddit_names=_subreddit_names;
@property(nonatomic) _Bool subreddit_idsIsSet; // @synthesize subreddit_idsIsSet=_subreddit_idsIsSet;
@property(retain, nonatomic) NSMutableArray *subreddit_ids; // @synthesize subreddit_ids=_subreddit_ids;
@property(nonatomic) _Bool nameIsSet; // @synthesize nameIsSet=_nameIsSet;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(nonatomic) _Bool idIsSet; // @synthesize idIsSet=_idIsSet;
@property(copy, nonatomic) NSString *id; // @synthesize id=_id;
@property(readonly, copy) NSString *description;
- (_Bool)validate:(id *)arg1;
- (_Bool)write:(id)arg1 error:(id *)arg2;
- (_Bool)read:(id)arg1 error:(id *)arg2;
- (void)unsetSubreddit_names;
- (void)unsetSubreddit_ids;
- (void)unsetName;
- (void)unsetId;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isEqual:(id)arg1;
@property(readonly) unsigned long long hash;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithId:(id)arg1 name:(id)arg2 subreddit_ids:(id)arg3 subreddit_names:(id)arg4;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

