//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DropboxExtensions/DBUserBaseClient.h>

@class NSString;

@interface DBUserClient : DBUserBaseClient
{
    NSString *_tokenUid;
}

@property(readonly, copy, nonatomic) NSString *tokenUid; // @synthesize tokenUid=_tokenUid;
- (void).cxx_destruct;
- (_Bool)isAuthorized;
- (id)accessToken;
- (void)updateAccessToken:(id)arg1;
- (id)withPathRoot:(id)arg1;
- (id)initWithAccessToken:(id)arg1 tokenUid:(id)arg2 transportConfig:(id)arg3;
- (id)initWithAccessToken:(id)arg1 transportConfig:(id)arg2;
- (id)initWithAccessToken:(id)arg1;

@end

