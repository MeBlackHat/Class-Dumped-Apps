//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface _TtC6Reddit11SnapchatKit : NSObject
{
    // Error parsing type: , name: clientID
}

+ (_Bool)canOpenWithDestination:(long long)arg1;
- (void).cxx_destruct;
- (id)init;
- (id)createVideoData:(id)arg1;
- (id)createImageData:(id)arg1;
- (void)shareWithImage:(id)arg1 destination:(long long)arg2 attachmentURL:(id)arg3 caption:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (id)initWithClientID:(id)arg1;
@property(nonatomic, readonly) NSString *clientID;

@end

