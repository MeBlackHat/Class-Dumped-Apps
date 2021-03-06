//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ChromeInternal/DSCChannel.h>

#import <ChromeInternal/DSCStreamCoding-Protocol.h>
#import <ChromeInternal/NSCopying-Protocol.h>

@class NSString, NSURL;

@interface DSCPublisherChannel : DSCChannel <NSCopying, DSCStreamCoding>
{
    NSString *_subtitle;
    NSString *_detailText;
    NSURL *_headerImageURL;
    NSURL *_webPageURL;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSURL *webPageURL; // @synthesize webPageURL=_webPageURL;
@property(readonly, nonatomic) NSURL *headerImageURL; // @synthesize headerImageURL=_headerImageURL;
@property(readonly, copy, nonatomic) NSString *detailText; // @synthesize detailText=_detailText;
@property(readonly, copy, nonatomic) NSString *subtitle; // @synthesize subtitle=_subtitle;
- (_Bool)encodeToStream:(id)arg1 error:(id *)arg2;
- (id)initWithStream:(id)arg1 error:(id *)arg2;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
- (id)initWithName:(id)arg1 title:(id)arg2 icon:(id)arg3 token:(id)arg4 sharingURL:(id)arg5 clickAction:(id)arg6 viewAction:(id)arg7 experimental:(_Bool)arg8 contentOrder:(long long)arg9 followState:(long long)arg10 followerCount:(long long)arg11 subtitle:(id)arg12 detailText:(id)arg13 headerImageURL:(id)arg14 webPageURL:(id)arg15;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

