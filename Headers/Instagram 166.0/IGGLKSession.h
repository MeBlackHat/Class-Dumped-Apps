//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class IGGLKQueue, IGGLKTextureLoader, IGLKQueuesAndLoaders;

@interface IGGLKSession : NSObject
{
    _Bool _shouldUseDisposableQueuesAndLoader;
    _Bool _isRawOpenGL;
    struct mutex _mutex;
    _Bool _isMetalEnabled;
    _Bool _isIGLEnabled;
    _Bool _isIGLMetal;
    _Bool _isIGLOpenGL;
    IGLKQueuesAndLoaders *_safeQueuesAndLoader;
}

+ (id)sharedSession;
- (id).cxx_construct;
- (void).cxx_destruct;
@property(retain) IGLKQueuesAndLoaders *safeQueuesAndLoader; // @synthesize safeQueuesAndLoader=_safeQueuesAndLoader;
@property(readonly, nonatomic) _Bool isIGLOpenGL; // @synthesize isIGLOpenGL=_isIGLOpenGL;
@property(readonly, nonatomic) _Bool isIGLMetal; // @synthesize isIGLMetal=_isIGLMetal;
@property(readonly, nonatomic) _Bool isIGLEnabled; // @synthesize isIGLEnabled=_isIGLEnabled;
@property(readonly, nonatomic) _Bool isMetalEnabled; // @synthesize isMetalEnabled=_isMetalEnabled;
- (void)configureForShareExtension;
- (void)_resetQueuesAndLoader;
- (void)clearContextQueues;
@property(readonly, nonatomic) IGGLKTextureLoader *textureLoader;
@property(readonly, nonatomic) IGGLKQueue *programQueue;
@property(readonly, nonatomic) IGGLKQueue *renderQueue;
@property(readonly, nonatomic) IGGLKQueue *textureQueue;
- (_Bool)_globalQueuesAndLoaderHaveBeenCreated;
- (id)_queuesAndLoaders;
- (id)_globalQueuesAndLoadersShouldCreate:(_Bool)arg1;
- (id)initWithConfiguration:(id)arg1;

@end

