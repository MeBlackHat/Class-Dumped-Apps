//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AWEShareCommonTask.h"

@interface AWEShareWebTask : AWEShareCommonTask
{
}

+ (id)prepareShareWebModelStage;
+ (id)webGetLocalImageStage;
+ (id)webRequestAlbumAccessStage;
+ (id)statsShareWebStage;
+ (id)contextWithWebModel:(id)arg1;
+ (id)taskWithWebModel:(id)arg1;
- (_Bool)doesPlatformSupportsImageSharing:(long long)arg1;
- (void)prepareWithChannel:(id)arg1 inView:(id)arg2;

@end

