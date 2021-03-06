//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <FBSharedFramework/IGMediaShellGalleryControllerDelegate-Protocol.h>

@class IGMediaShellGalleryController, IGStoryReel, IGUserSession, NSArray, NSString;
@protocol IGDirectMemoriesDataSourceDelegate;

@interface IGDirectMemoriesDataSource : NSObject <IGMediaShellGalleryControllerDelegate>
{
    IGUserSession *_userSession;
    IGMediaShellGalleryController *_galleryController;
    IGStoryReel *_introReel;
    NSArray *_memoriesSegments;
    id <IGDirectMemoriesDataSourceDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <IGDirectMemoriesDataSourceDelegate> delegate; // @synthesize delegate=_delegate;
- (id)_allReels;
- (id)_allReelPKs;
- (void)mediaShellController:(id)arg1 loadingGalleryDidFailWithError:(id)arg2;
- (void)mediaShellControllerDidLoadGallery:(id)arg1;
@property(readonly, nonatomic) NSString *analyticsModule;
@property(readonly, nonatomic) NSArray *viewModels;
- (id)initWithUserSession:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

