//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSOperation.h>

@class LLVideoPlayerCacheFile, NSURLRequest;
@protocol LLVideoPlayerOperationDelegate;

@interface LLVideoPlayerLocalOperation : NSOperation
{
    _Bool _executing;
    _Bool _finished;
    id <LLVideoPlayerOperationDelegate> _delegate;
    NSURLRequest *_request;
    LLVideoPlayerCacheFile *_cacheFile;
}

@property(retain, nonatomic) LLVideoPlayerCacheFile *cacheFile; // @synthesize cacheFile=_cacheFile;
@property(retain, nonatomic) NSURLRequest *request; // @synthesize request=_request;
@property(nonatomic) __weak id <LLVideoPlayerOperationDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic, getter=isFinished) _Bool finished; // @synthesize finished=_finished;
@property(nonatomic, getter=isExecuting) _Bool executing; // @synthesize executing=_executing;
- (void).cxx_destruct;
- (void)finish;
- (void)cancel;
- (void)main;
- (id)initWithRequest:(id)arg1 cacheFile:(id)arg2;
- (id)description;

@end

