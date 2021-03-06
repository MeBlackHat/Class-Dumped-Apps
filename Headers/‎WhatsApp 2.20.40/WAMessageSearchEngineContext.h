//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString, WAContactsSearchController, WAUserJID;

@interface WAMessageSearchEngineContext : NSObject
{
    WAContactsSearchController *_contactsSearchController;
    _Bool _contentOnly;
    NSArray *_jids;
    WAUserJID *_authorJID;
    NSArray *_authorTokens;
    NSString *_labelId;
    long long _type;
}

@property(readonly, nonatomic) _Bool contentOnly; // @synthesize contentOnly=_contentOnly;
@property(readonly, nonatomic) long long type; // @synthesize type=_type;
@property(readonly, nonatomic) WAContactsSearchController *contactsSearchController; // @synthesize contactsSearchController=_contactsSearchController;
@property(readonly, nonatomic) NSString *labelId; // @synthesize labelId=_labelId;
@property(readonly, nonatomic) NSArray *authorTokens; // @synthesize authorTokens=_authorTokens;
@property(readonly, nonatomic) WAUserJID *authorJID; // @synthesize authorJID=_authorJID;
@property(readonly, nonatomic) NSArray *jids; // @synthesize jids=_jids;
- (void).cxx_destruct;
- (id)initWithContactsSearchController:(id)arg1 chatSessionJIDs:(id)arg2 restrictedToAuthorTokens:(id)arg3 authorJID:(id)arg4 labelId:(id)arg5 type:(long long)arg6 contentOnly:(_Bool)arg7;

@end

